/*
 * XREFs of RaidAdapterGetFirstUnit @ 0x14005A4C4
 * Callers:
 *     StorEtwMiniportLogError @ 0x140042658 (StorEtwMiniportLogError.c)
 *     StorpMarkDeviceFailed @ 0x140075234 (StorpMarkDeviceFailed.c)
 *     StorEtwMiniportLogByteStream @ 0x1400A8AB0 (StorEtwMiniportLogByteStream.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x14001A910 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1400277E0 (RaidAdapterReleaseInterruptLock.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidAdapterGetFirstUnit(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int CurrentIrql; // ebp
  unsigned int i; // r14d
  _QWORD **v5; // rsi
  _QWORD *j; // r15
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 (__fastcall *v9)(); // [rsp+28h] [rbp-20h]

  v1 = 0LL;
  v8 = 0LL;
  v9 = RaidpAdapterEnumerateUnit;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < *(_DWORD *)(a1 + 856) )
    LOBYTE(CurrentIrql) = RaidAdapterAcquireInterruptLock(a1);
  for ( i = 0; i < *(_DWORD *)(a1 + 172); ++i )
  {
    v5 = (_QWORD **)(*(_QWORD *)(a1 + 184) + 16LL * i);
    for ( j = *v5; j != v5; j = (_QWORD *)*j )
    {
      if ( !((unsigned __int8 (__fastcall *)(__int64 *, _QWORD *))v9)(&v8, j) )
        goto LABEL_9;
    }
  }
LABEL_9:
  if ( (unsigned int)(unsigned __int8)CurrentIrql < *(_DWORD *)(a1 + 856) )
    RaidAdapterReleaseInterruptLock(a1, CurrentIrql);
  if ( v8 )
    return v8 - 80;
  return v1;
}

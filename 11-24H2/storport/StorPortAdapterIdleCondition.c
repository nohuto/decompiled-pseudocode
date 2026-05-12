/*
 * XREFs of StorPortAdapterIdleCondition @ 0x14001C590
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x14001C7B0 (RaidIsAdapterControlSupported.c)
 *     RaUnitLockForwardIo @ 0x1400301C0 (RaUnitLockForwardIo.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140053FF0 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StorPortAdapterIdleCondition(__int64 a1, unsigned int a2, int a3)
{
  signed __int32 v5; // edi
  __int64 v6; // r9
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  void (__fastcall *v11)(__int64, __int64, _DWORD *); // rax
  __int64 result; // rax
  int v13; // ecx
  int v14; // r8d
  _QWORD *i; // r14
  _DWORD v16[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+38h] [rbp-30h]
  unsigned int v18; // [rsp+40h] [rbp-28h]
  char v19; // [rsp+44h] [rbp-24h]
  __int16 v20; // [rsp+45h] [rbp-23h]
  char v21; // [rsp+47h] [rbp-21h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  if ( StorEtwLoggingEnabled && (byte_140171462 & 0x10) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(
      a1,
      (unsigned int)&EventAdapterIdleConditionStart,
      a3,
      **(_QWORD **)(a1 + 4960),
      *(_DWORD *)(a1 + 56),
      a2);
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)(a1 + 4960) + 20LL), 0);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 988));
  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
    for ( i = *(_QWORD **)(a1 + 144); i != (_QWORD *)(a1 + 144); i = (_QWORD *)*i )
      RaUnitLockForwardIo(i - 8, 4LL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( (qword_140170460 & 0x200) != 0 )
  {
    v6 = *(unsigned int *)(a1 + 56);
    if ( *(_DWORD *)a1 != 1314275652 )
    {
      v7 = *(_DWORD *)(a1 + 4932);
      if ( v7 )
      {
        v8 = *(_QWORD *)(a1 + 4936);
        if ( v8 )
        {
          v9 = v8 + 48LL * (_InterlockedIncrement((volatile signed __int32 *)(a1 + 4928)) % v7);
          *(_DWORD *)v9 = 6;
          *(_QWORD *)(v9 + 40) = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(v9 + 16) = v5;
          *(_QWORD *)(v9 + 8) = retaddr;
          *(_QWORD *)(v9 + 24) = a1;
          *(_QWORD *)(v9 + 32) = v6;
        }
      }
    }
  }
  if ( (unsigned __int8)RaidIsAdapterControlSupported(a1 + 376, 8LL) )
  {
    if ( (unsigned __int8)RaidIsAdapterControlSupported(a1 + 376, 8LL) )
    {
      v16[0] = 1;
      v20 = 0;
      v21 = 0;
      v17 = 0LL;
      v19 = 0;
      v10 = *(_QWORD *)(a1 + 608);
      v16[1] = 24;
      v18 = a2;
      v11 = *(void (__fastcall **)(__int64, __int64, _DWORD *))(v10 + 120);
      if ( v11 )
        v11(*(_QWORD *)(a1 + 616) + 16LL, 8LL, v16);
    }
  }
  result = PoFxCompleteIdleCondition(**(_QWORD **)(a1 + 4960), a2);
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_140171462 & 0x10) != 0 )
      return McTemplateK0pqq_EtwWriteTransfer(
               v13,
               (unsigned int)&EventAdapterIdleConditionStop,
               v14,
               **(_QWORD **)(a1 + 4960),
               *(_DWORD *)(a1 + 56),
               a2);
  }
  return result;
}

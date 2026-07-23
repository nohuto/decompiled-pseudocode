/*
 * XREFs of HdlspAddLogEntry @ 0x140B9D008
 * Callers:
 *     HdlspDispatch @ 0x140B9D320 (HdlspDispatch.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     wcscmp @ 0x1404FD6A0 (wcscmp.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14069B800 (ZwQuerySystemInformation.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall HdlspAddLogEntry(_WORD *Src)
{
  void *v1; // r12
  __int64 v2; // rax
  ULONG_PTR v4; // rbx
  void *Pool2; // rax
  void *v6; // r14
  KIRQL v7; // bp
  PKSPIN_LOCK v8; // rdi
  __int16 v9; // si
  __int64 v10; // r15
  unsigned __int16 v11; // si
  const wchar_t *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  KSPIN_LOCK v15; // rax
  KSPIN_LOCK v16; // rdx
  __int64 v17; // rcx
  __int128 SystemInformation; // [rsp+20h] [rbp-68h] BYREF
  __int128 v19; // [rsp+30h] [rbp-58h]
  __int128 v20; // [rsp+40h] [rbp-48h]

  v1 = 0LL;
  v2 = -1LL;
  SystemInformation = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  do
    ++v2;
  while ( Src[v2] );
  v4 = 2 * v2 + 2;
  if ( KeGetCurrentIrql() < 2u )
  {
    if ( ZwQuerySystemInformation(SystemTimeOfDayInformation, &SystemInformation, 0x30u, 0LL) < 0 )
    {
      SystemInformation = 0LL;
      v19 = 0LL;
      v20 = 0LL;
    }
    Pool2 = (void *)ExAllocatePool2(0x40uLL, v4, 0x736C6448uLL);
    v6 = Pool2;
    if ( Pool2 )
      memmove(Pool2, Src, v4);
    if ( (HeadlessGlobals[6] & 2) != 0 )
      v7 = -1;
    else
      v7 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
    v8 = HeadlessGlobals;
    v9 = *((_WORD *)HeadlessGlobals + 48);
    *((_DWORD *)HeadlessGlobals + 12) |= 4u;
    v10 = *((unsigned __int16 *)v8 + 49);
    v11 = (unsigned __int8)(v9 + 1);
    *((_WORD *)v8 + 48) = v11;
    if ( v11 == (_WORD)v10 )
    {
      v12 = *(const wchar_t **)(56 * v10 + v8[2] + 48);
      v13 = wcscmp(v12, L"Entry could not be recorded due to lack of memory.\n");
      *((_WORD *)v8 + 49) = (unsigned __int8)(v10 + 1);
      v1 = (void *)((unsigned __int64)v12 & -(__int64)(v13 != 0));
    }
    else if ( (_WORD)v10 == 0xFFFF )
    {
      *((_WORD *)v8 + 49) = 0;
    }
    v14 = 56LL * v11;
    v15 = v8[2];
    *(_OWORD *)(v14 + v15) = SystemInformation;
    *(_OWORD *)(v14 + v15 + 16) = v19;
    *(_OWORD *)(v14 + v15 + 32) = v20;
    v16 = v8[2];
    v17 = 56LL * *((unsigned __int16 *)v8 + 48);
    if ( v6 )
      *(_QWORD *)(v17 + v16 + 48) = v6;
    else
      *(_QWORD *)(v17 + v16 + 48) = L"Entry could not be recorded due to lack of memory.\n";
    if ( v7 != 0xFF )
      KeReleaseSpinLock(v8, v7);
    if ( v1 )
      ExFreePoolWithTag(v1, 0);
  }
}

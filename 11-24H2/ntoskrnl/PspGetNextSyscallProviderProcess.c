/*
 * XREFs of PspGetNextSyscallProviderProcess @ 0x140771338
 * Callers:
 *     PspQuerySyscallProviderProcessList @ 0x1407714B0 (PspQuerySyscallProviderProcessList.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14033E7D0 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspGetNextSyscallProviderProcess(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v3; // rbx
  unsigned __int64 v6; // r15
  char v7; // r14
  _QWORD *v8; // rdi
  _QWORD *v9; // rbp
  _QWORD *v10; // rdi

  CurrentThread = KeGetCurrentThread();
  v3 = (signed __int64 *)(a1 + 64);
  --CurrentThread->KernelApcDisable;
  v6 = 0LL;
  v7 = 0;
  v8 = KeAbPreAcquire(a1 + 64, 0LL);
  if ( _InterlockedCompareExchange64(v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, 0, v8, (__int64)v3);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  v9 = (_QWORD *)(a1 + 72);
  v10 = a2 + 248;
  if ( !a2 )
    v10 = v9;
  while ( 1 )
  {
    v10 = (_QWORD *)*v10;
    if ( v10 == v9 )
      break;
    v6 = (unsigned __int64)(v10 - 248);
    if ( ObReferenceObjectSafeWithTag((__int64)(v10 - 248), 0x63537350u) )
    {
      v7 = 1;
      break;
    }
  }
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x63537350u);
  return v6 & -(__int64)(v7 != 0);
}

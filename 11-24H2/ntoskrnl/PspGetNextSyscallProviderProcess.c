/*
 * XREFs of PspGetNextSyscallProviderProcess @ 0x140771558
 * Callers:
 *     PspQuerySyscallProviderProcessList @ 0x1407716D0 (PspQuerySyscallProviderProcessList.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14031DCB0 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall PspGetNextSyscallProviderProcess(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v3; // rbx
  unsigned __int64 v6; // r15
  char v7; // r14
  char *v8; // rdi
  _QWORD *v9; // rbp
  _QWORD *v10; // rdi

  CurrentThread = KeGetCurrentThread();
  v3 = (signed __int64 *)(a1 + 64);
  --CurrentThread->KernelApcDisable;
  v6 = 0LL;
  v7 = 0;
  v8 = (char *)KeAbPreAcquire(a1 + 64, 0LL);
  if ( _InterlockedCompareExchange64(v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, 0, v8, (__int64)v3);
  if ( v8 )
    v8[10] = 1;
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

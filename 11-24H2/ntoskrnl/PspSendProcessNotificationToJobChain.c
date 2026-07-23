/*
 * XREFs of PspSendProcessNotificationToJobChain @ 0x14085BFB0
 * Callers:
 *     PspRundownSingleProcess @ 0x1408FED98 (PspRundownSingleProcess.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     PspSendJobNotification @ 0x14048E6FC (PspSendJobNotification.c)
 *     PspLockRootJobFromProcess @ 0x14085CB34 (PspLockRootJobFromProcess.c)
 *     PspUnlockJob @ 0x14085EB90 (PspUnlockJob.c)
 */

__int64 __fastcall PspSendProcessNotificationToJobChain(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 i; // rbx
  __int64 j; // rcx
  struct _ERESOURCE *v9; // rdi
  __int64 k; // rcx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v12 = 0LL;
  v11 = 0LL;
  PspLockRootJobFromProcess(a1, CurrentThread, &v12, &v11);
  for ( i = v12; i; i = *(_QWORD *)(i + 1304) )
  {
    for ( j = 0LL; ; j = 1LL )
    {
      if ( (_DWORD)j )
      {
        v9 = (struct _ERESOURCE *)(i + 56);
        ExAcquireResourceExclusiveLite((PERESOURCE)(i + 56), 1u);
        goto LABEL_11;
      }
      if ( i == *(&v11 + j) )
        break;
    }
    v9 = (struct _ERESOURCE *)(i + 56);
LABEL_11:
    if ( *(_QWORD *)(i + 552) && ((1 << a2) & *(_DWORD *)(i + 1104)) != 0 )
      PspSendJobNotification(i, a2, a3, 0);
    for ( k = 0LL; !(_DWORD)k; k = 1LL )
    {
      if ( i == *(&v11 + k) )
        goto LABEL_3;
    }
    ExReleaseResourceLite(v9);
LABEL_3:
    ;
  }
  return PspUnlockJob(v11, CurrentThread);
}

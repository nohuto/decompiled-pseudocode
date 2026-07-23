/*
 * XREFs of ExAllocateCacheAwarePushLock @ 0x1404B6390
 * Callers:
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x14026FD20 (KeQueryNodeActiveAffinity.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeSetSystemGroupAffinityThread @ 0x140318B30 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140319730 (KeRevertToUserGroupAffinityThread.c)
 *     ExFreeCacheAwarePushLock @ 0x1404F8C10 (ExFreeCacheAwarePushLock.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
 */

void *__fastcall ExAllocateCacheAwarePushLock(char a1)
{
  char v1; // r15
  ULONG_PTR v2; // rsi
  void *Pool2; // rdi
  void *v4; // rbx
  __int64 v5; // rax
  __int64 *v6; // rcx
  __int64 v7; // rbp
  unsigned int v8; // r12d
  __int64 i; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 Pool3; // rax
  _GROUP_AFFINITY Affinity; // [rsp+40h] [rbp-48h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+50h] [rbp-38h] BYREF

  v1 = 0;
  Affinity = 0LL;
  v2 = (-(__int64)((a1 & 1) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256;
  PreviousAffinity = 0LL;
  Pool2 = (void *)ExAllocatePool2(v2, 0x100uLL, 0x70636C50u);
  if ( !Pool2 )
    return 0LL;
  if ( KeNumberNodes == 1 )
  {
    v5 = ExAllocatePool2(v2, 0x1000uLL, 0x6C636C50u);
    if ( !v5 )
    {
      v4 = 0LL;
LABEL_27:
      ExFreeCacheAwarePushLock(Pool2);
      return v4;
    }
    v6 = (__int64 *)Pool2;
    v7 = 32LL;
    do
    {
      *(_QWORD *)v5 = 0LL;
      *(_BYTE *)(v5 + 8) = 1;
      *(_QWORD *)(v5 + 16) = Pool2;
      *v6 = v5;
      v5 += 128LL;
      ++v6;
      --v7;
    }
    while ( v7 );
    return Pool2;
  }
  else
  {
    v8 = KeNumberProcessors_0;
    for ( i = 0LL; (unsigned int)i < 0x20; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= v8 )
        CurrentPrcb = KeGetCurrentPrcb();
      else
        CurrentPrcb = (struct _KPRCB *)KeGetPrcb(i);
      if ( (v2 & 0x40) != 0 )
      {
        Pool3 = ExAllocatePool3(v2, 1);
      }
      else
      {
        KeQueryNodeActiveAffinity(CurrentPrcb->SchedulerSubNode->Affinity.Reserved[0], &Affinity, 0LL);
        if ( v1 )
        {
          KeSetSystemGroupAffinityThread(&Affinity, 0LL);
        }
        else
        {
          KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
          v1 = 1;
        }
        Pool3 = ExAllocatePool2(v2, 0x80uLL, 0x6C636C50u);
      }
      if ( !Pool3 )
      {
        v4 = 0LL;
        goto LABEL_24;
      }
      *(_QWORD *)Pool3 = 0LL;
      *(_BYTE *)(Pool3 + 8) = 0;
      *(_QWORD *)(Pool3 + 16) = Pool2;
      *((_QWORD *)Pool2 + i) = Pool3;
    }
    v4 = Pool2;
    Pool2 = 0LL;
LABEL_24:
    if ( v1 )
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    if ( Pool2 )
      goto LABEL_27;
  }
  return v4;
}

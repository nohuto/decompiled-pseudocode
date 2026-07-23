/*
 * XREFs of SmGetStoreOwnerProcessId @ 0x14060D3FC
 * Callers:
 *     ?SmStEtwFillStoreEvent@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z @ 0x14060CB3C (-SmStEtwFillStoreEvent@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x14020DF80 (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreDereference @ 0x14022FA28 (SmKmStoreDereference.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     SmKmStoreReference @ 0x1402F6020 (SmKmStoreReference.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14041E240 (SmKmStoreRefFromStoreIndex.c)
 */

__int64 __fastcall SmGetStoreOwnerProcessId(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v3; // edx
  volatile signed __int64 *v4; // rdi
  __int64 v5; // rax
  unsigned int v6; // ebx
  struct _KTHREAD *CurrentThread; // rax
  char *v8; // rbx
  __int64 v9; // rax
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 7576);
  v3 = *(_DWORD *)(a1 + 6832);
  v11 = 0LL;
  v4 = (volatile signed __int64 *)(v1 + 2232);
  v5 = SmKmStoreReference(v1, v3);
  if ( v5 && v5 == a1 )
  {
    v11 = *(_QWORD *)(SmKmStoreRefFromStoreIndex(v1, *(_DWORD *)(a1 + 6832) & 0x3FF) + 24);
    if ( v11 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v8 = (char *)KeAbPreAcquire(v1 + 2232, 0LL);
      if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v1 + 2232), 0, v8, v1 + 2232);
      if ( v8 )
        v8[10] = 1;
      v9 = SmpKeyedStoreEntryGet(v1 + 2232, &v11, 0, 1);
      if ( v9 && *(unsigned __int16 *)(v9 + 16) == *(_DWORD *)(a1 + 6832) )
        v6 = *(_DWORD *)(v11 + 464);
      else
        v6 = -1;
      if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v1 + 2232));
      KeAbPostRelease(v1 + 2232);
      KeLeaveCriticalRegion();
    }
    else
    {
      v6 = 0;
    }
    goto LABEL_17;
  }
  v6 = -1;
  if ( v5 )
LABEL_17:
    SmKmStoreDereference(v1, *(_DWORD *)(a1 + 6832));
  return v6;
}

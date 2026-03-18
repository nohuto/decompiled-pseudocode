/*
 * XREFs of SmGetStoreOwnerProcessId @ 0x140602E7C
 * Callers:
 *     ?SmStEtwFillStoreEvent@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z @ 0x1406025BC (-SmStEtwFillStoreEvent@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     SmpKeyedStoreEntryGet @ 0x1403243B0 (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreDereference @ 0x14034AECC (SmKmStoreDereference.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140432420 (SmKmStoreRefFromStoreIndex.c)
 *     SmKmStoreReference @ 0x140435200 (SmKmStoreReference.c)
 */

__int64 __fastcall SmGetStoreOwnerProcessId(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v3; // edx
  volatile signed __int64 *v4; // rdi
  __int64 v5; // rax
  unsigned int v6; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v8; // rbx
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
      v8 = KeAbPreAcquire(v1 + 2232, 0LL);
      if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v1 + 2232), 0, v8, v1 + 2232);
      if ( v8 )
        *((_BYTE *)v8 + 10) = 1;
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

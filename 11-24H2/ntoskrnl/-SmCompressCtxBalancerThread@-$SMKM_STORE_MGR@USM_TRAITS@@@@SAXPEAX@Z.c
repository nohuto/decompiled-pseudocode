/*
 * XREFs of ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403763F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAKP6AXPEAX@Z@Z @ 0x140376298 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?SmCompressCtxDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x140376500 (-SmCompressCtxDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAM.c)
 *     ?SmCompressManagerGetIdealProcessor@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1@KK@Z @ 0x1403765B0 (-SmCompressManagerGetIdealProcessor@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1.c)
 *     ?SmCompressCtxNewThreadNeeded@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x140383540 (-SmCompressCtxNewThreadNeeded@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxBalancerThread(PRKEVENT *P)
{
  __int64 v1; // rbx
  KIRQL v3; // si
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF
  int IdealProcessor; // [rsp+60h] [rbp+8h] BYREF

  v1 = (__int64)*P;
  Object[0] = &(*P)[3].Header.WaitListHead;
  Object[1] = (PVOID)(v1 + 56);
  KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 25);
  KeSetEvent(P[2], 0, 0);
  while ( KeWaitForMultipleObjects(2u, Object, WaitAny, WrKernel, 0, 0, 0LL, 0LL) )
  {
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v1);
    KeResetEvent((PRKEVENT)(v1 + 56));
    if ( (unsigned int)SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxNewThreadNeeded(v1) )
    {
      IdealProcessor = SMKM_STORE_MGR<SM_TRAITS>::SmCompressManagerGetIdealProcessor(
                         *(_QWORD *)(v1 + 8),
                         *(unsigned int *)(v1 + 168),
                         1LL);
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v1, v3);
      SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThread(v1, (__int64)P[1], (__int64)&IdealProcessor, 0LL);
    }
    else
    {
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v1, v3);
    }
  }
  return SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxDeleteThreadParams(P);
}

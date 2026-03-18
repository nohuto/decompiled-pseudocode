/*
 * XREFs of ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140393600
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020E620 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     ?SmCompressCtxDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x140393710 (-SmCompressCtxDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAM.c)
 *     ?SmCompressManagerGetIdealProcessor@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1@KK@Z @ 0x1403937A0 (-SmCompressManagerGetIdealProcessor@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAKP6AXPEAX@Z@Z @ 0x140393894 (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?SmCompressCtxNewThreadNeeded@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x1403A1100 (-SmCompressCtxNewThreadNeeded@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxBalancerThread(PRKEVENT *P)
{
  PRKEVENT v1; // rbx
  KIRQL v3; // si
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF
  int IdealProcessor; // [rsp+60h] [rbp+8h] BYREF

  v1 = *P;
  Object[0] = &(*P)[3].Header.WaitListHead;
  Object[1] = &v1[2].Header.WaitListHead;
  KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 25);
  KeSetEvent(P[2], 0, 0);
  while ( KeWaitForMultipleObjects(2u, Object, WaitAny, WrKernel, 0, 0, 0LL, 0LL) )
  {
    v3 = ExAcquireSpinLockExclusive(&v1->Header.Lock);
    KeResetEvent((PRKEVENT)((char *)v1 + 56));
    if ( (unsigned int)SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxNewThreadNeeded(v1) )
    {
      IdealProcessor = SMKM_STORE_MGR<SM_TRAITS>::SmCompressManagerGetIdealProcessor(
                         v1->Header.WaitListHead.Flink,
                         (unsigned int)v1[7].Header.Lock,
                         1LL);
      ExReleaseSpinLockExclusive(&v1->Header.Lock, v3);
      SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThread(v1, P[1], &IdealProcessor, 0LL);
    }
    else
    {
      ExReleaseSpinLockExclusive(&v1->Header.Lock, v3);
    }
  }
  return SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxDeleteThreadParams(P);
}

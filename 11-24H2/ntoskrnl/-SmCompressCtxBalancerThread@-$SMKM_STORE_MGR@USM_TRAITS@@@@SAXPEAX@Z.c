/*
 * XREFs of ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140449540
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
 *     ?SmCompressCtxNewThreadNeeded@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x140389C00 (-SmCompressCtxNewThreadNeeded@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     ?SmCompressCtxDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x140449650 (-SmCompressCtxDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAM.c)
 *     ?SmCompressManagerGetIdealProcessor@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1@KK@Z @ 0x14044A328 (-SmCompressManagerGetIdealProcessor@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1.c)
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAKP6AXPEAX@Z@Z @ 0x14044A41C (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxBalancerThread(PRKEVENT *P, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  KIRQL v5; // si
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF
  int IdealProcessor; // [rsp+60h] [rbp+8h] BYREF

  v3 = (__int64)*P;
  Object[0] = &(*P)[3].Header.WaitListHead;
  Object[1] = (PVOID)(v3 + 56);
  KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 25, a3);
  KeSetEvent(P[2], 0, 0);
  while ( KeWaitForMultipleObjects(2u, Object, WaitAny, WrKernel, 0, 0, 0LL, 0LL) )
  {
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v3);
    KeResetEvent((PRKEVENT)(v3 + 56));
    if ( SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxNewThreadNeeded(v3) )
    {
      IdealProcessor = SMKM_STORE_MGR<SM_TRAITS>::SmCompressManagerGetIdealProcessor(
                         *(_QWORD *)(v3 + 8),
                         *(unsigned int *)(v3 + 168),
                         1LL);
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v3, v5);
      SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThread(v3, P[1], &IdealProcessor, 0LL);
    }
    else
    {
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)v3, v5);
    }
  }
  return SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxDeleteThreadParams(P);
}

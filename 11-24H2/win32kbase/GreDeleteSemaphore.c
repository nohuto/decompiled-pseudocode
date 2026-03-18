/*
 * XREFs of GreDeleteSemaphore @ 0x14003E0B0
 * Callers:
 *     vUnreferencePdevWorker @ 0x14003D4F0 (vUnreferencePdevWorker.c)
 *     EngDeleteSemaphore @ 0x14003E090 (EngDeleteSemaphore.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x14008A220 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x140198F20 (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator() @ 0x14019AF2C (_PDEVOBJ--PDEVOBJ_--_2_--_lambda_1_--operator().c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x14019BA3C (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     EngDeleteSafeSemaphore @ 0x1401C4430 (EngDeleteSafeSemaphore.c)
 * Callees:
 *     MultiUserGreTrackRemoveEngResource @ 0x14001A640 (MultiUserGreTrackRemoveEngResource.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

void __fastcall GreDeleteSemaphore(PERESOURCE Resource, __int64 a2)
{
  if ( Resource )
  {
    MultiUserGreTrackRemoveEngResource(&Resource[-1].NumberOfSharedWaiters, a2);
    ExDeleteResourceLite(Resource);
    GreDeleteFastMutex((char *)&Resource[-1].NumberOfSharedWaiters);
  }
}

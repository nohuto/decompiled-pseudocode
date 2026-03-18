/*
 * XREFs of KiSetProcessorIdle @ 0x140447AB0
 * Callers:
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1403173E0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiCompleteKernelInit @ 0x140B45C50 (KiCompleteKernelInit.c)
 * Callees:
 *     KiSetProcessorIdle_LockFree @ 0x1404EFA64 (KiSetProcessorIdle_LockFree.c)
 *     Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline @ 0x1404F0A14 (Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline.c)
 *     KiSetProcessorIdle_WithLock @ 0x1405C3754 (KiSetProcessorIdle_WithLock.c)
 */

__int64 __fastcall KiSetProcessorIdle(__int64 a1, unsigned int a2, unsigned int a3)
{
  if ( (unsigned int)Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline() )
    return KiSetProcessorIdle_LockFree(a1, a2, a3);
  else
    return KiSetProcessorIdle_WithLock(a1, a2, a3);
}

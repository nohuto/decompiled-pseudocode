/*
 * XREFs of ?ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@IAEBVCMILMatrix@@PEA_N@Z @ 0x18028A5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x18025834C (-ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_.c)
 */

__int64 __fastcall CInteraction::ProcessInput(
        CInteraction *this,
        const struct tagPOINTER_INFO *a2,
        const struct tagPOINTER_INFO_UNION *a3,
        unsigned int a4,
        const struct CMILMatrix *a5,
        bool *a6)
{
  return CInteractionProcessor::ProcessInput(
           (CInteraction *)((char *)this + 288),
           (CInteraction *)((char *)this - 72),
           a2,
           a3,
           a4,
           a5,
           (struct IManipulationResource *)((*((_QWORD *)this + 26) + 80LL) & -(__int64)(*((_QWORD *)this + 26) != 0LL)),
           a6);
}

/*
 * XREFs of ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005B068
 * Callers:
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x180018290 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ?GetInputSink@DWMFocusedInputTarget@@UEBAPEAXXZ @ 0x180198CC0 (-GetInputSink@DWMFocusedInputTarget@@UEBAPEAXXZ.c)
 *     ?GetInteractionObject@DWMFocusedInputTarget@@UEBAIXZ @ 0x180198D30 (-GetInteractionObject@DWMFocusedInputTarget@@UEBAIXZ.c)
 *     ?GetRoutingInfo@DWMFocusedInputTarget@@UEBA?AUtagMsgRoutingInfo@@XZ @ 0x180198E40 (-GetRoutingInfo@DWMFocusedInputTarget@@UEBA-AUtagMsgRoutingInfo@@XZ.c)
 *     ?IsSameAsTarget@DWMFocusedInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@@Z @ 0x180198EB0 (-IsSameAsTarget@DWMFocusedInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@@Z.c)
 *     ?IsSameAsTarget@DWMFocusedInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z @ 0x180198F20 (-IsSameAsTarget@DWMFocusedInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z.c)
 *     ?IsSameByLuid@DWMFocusedInputTarget@@UEBA_NPEAX@Z @ 0x180198FA0 (-IsSameByLuid@DWMFocusedInputTarget@@UEBA_NPEAX@Z.c)
 *     ?SetInteractionObject@DWMFocusedInputTarget@@UEAAJI@Z @ 0x1801990B0 (-SetInteractionObject@DWMFocusedInputTarget@@UEAAJI@Z.c)
 *     ?ShouldRedirectToManipulationThread@DWMFocusedInputTarget@@UEBA_NXZ @ 0x180199120 (-ShouldRedirectToManipulationThread@DWMFocusedInputTarget@@UEBA_NXZ.c)
 *     ?GetInputSink@ContextualProcessorBuffer@@UEBAPEAXXZ @ 0x18019B980 (-GetInputSink@ContextualProcessorBuffer@@UEBAPEAXXZ.c)
 *     ?GetInteractionObject@ContextualProcessorBuffer@@UEBAIXZ @ 0x18019B9E0 (-GetInteractionObject@ContextualProcessorBuffer@@UEBAIXZ.c)
 *     ?GetRoutingInfo@ContextualProcessorBuffer@@UEBA?AUtagMsgRoutingInfo@@XZ @ 0x18019BAB0 (-GetRoutingInfo@ContextualProcessorBuffer@@UEBA-AUtagMsgRoutingInfo@@XZ.c)
 *     ?IsSameAsTarget@ContextualProcessorBuffer@@UEBA_NAEBUtagMsgRoutingInfo@@@Z @ 0x18019BC80 (-IsSameAsTarget@ContextualProcessorBuffer@@UEBA_NAEBUtagMsgRoutingInfo@@@Z.c)
 *     ?IsSameAsTarget@ContextualProcessorBuffer@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z @ 0x18019BCF0 (-IsSameAsTarget@ContextualProcessorBuffer@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z.c)
 *     ?IsSameByLuid@ContextualProcessorBuffer@@UEBA_NPEAX@Z @ 0x18019BD70 (-IsSameByLuid@ContextualProcessorBuffer@@UEBA_NPEAX@Z.c)
 *     ?SetInteractionObject@ContextualProcessorBuffer@@UEAAJI@Z @ 0x18019BEF0 (-SetInteractionObject@ContextualProcessorBuffer@@UEAAJI@Z.c)
 *     ?ShouldRedirectToManipulationThread@ContextualProcessorBuffer@@UEBA_NXZ @ 0x18019BF60 (-ShouldRedirectToManipulationThread@ContextualProcessorBuffer@@UEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rsi
  __int64 v5; // rcx

  v3 = *a1;
  v4 = ***a1;
  v5 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v4(v3, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, a2);
}

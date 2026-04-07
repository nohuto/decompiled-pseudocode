/*
 * XREFs of ??$_Destroy_range@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU1234@AEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@0@@Z @ 0x180100014
 * Callers:
 *     ??$_Assign_range@PEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAXPEBUUserResizeVisual@Transitions@Udwm@winrt@@0Uforward_iterator_tag@1@@Z @ 0x1800FFEAC (--$_Assign_range@PEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisual@Transi.c)
 *     ??$_Uninitialized_move@PEAUUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU1234@0PEAU1234@AEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@0@@Z @ 0x180100528 (--$_Uninitialized_move@PEAUUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UUserResizeVisu.c)
 *     ??1?$removed_values@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@X@impl@winrt@@QEAA@XZ @ 0x180100AEC (--1-$removed_values@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResi.c)
 *     ??_E?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UEAAPEAXI@Z @ 0x180100C80 (--_E-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResizeVisual@Transiti.c)
 *     ?Clear@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x180100EE0 (-Clear@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResizeV.c)
 *     ?ReplaceAll@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXU?$array_view@$$CBUUserResizeVisual@Transitions@Udwm@winrt@@@2@@Z @ 0x180102518 (-ReplaceAll@-$vector_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUs.c)
 *     ?TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@5@XZ @ 0x1801027B4 (-TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AU-$IVec.c)
 *     ?_Change_array@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAXQEAUUserResizeVisual@Transitions@Udwm@winrt@@_K1@Z @ 0x180103890 (-_Change_array@-$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UUserResizeVisual.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAX_K@Z @ 0x180103978 (-_Clear_and_reserve_geometric@-$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UU.c)
 * Callees:
 *     ??_GUserResizeVisual@Transitions@Udwm@winrt@@QEAAPEAXI@Z @ 0x180100D64 (--_GUserResizeVisual@Transitions@Udwm@winrt@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::_Destroy_range<std::allocator<winrt::Udwm::Transitions::UserResizeVisual>>(
        winrt::Udwm::Transitions::UserResizeVisual *this,
        winrt::Udwm::Transitions::UserResizeVisual *a2)
{
  winrt::Udwm::Transitions::UserResizeVisual *v3; // rbx
  void *result; // rax

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      result = winrt::Udwm::Transitions::UserResizeVisual::`scalar deleting destructor'(v3, (unsigned int)a2);
      v3 = (winrt::Udwm::Transitions::UserResizeVisual *)((char *)v3 + 8);
    }
    while ( v3 != a2 );
  }
  return result;
}

/*
 * XREFs of ??1?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x18009C2B8
 * Callers:
 *     _SystemCursorController2::SystemCursorController2_::_1_::dtor$3 @ 0x1801C862B (_SystemCursorController2--SystemCursorController2_--_1_--dtor$3.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$6 @ 0x1801CA50A (_DWMInputRouter--DWMInputRouter_--_1_--dtor$6.c)
 *     _ControllerNavigationManager::ControllerNavigationManager_::_1_::dtor$1 @ 0x1801CC593 (_ControllerNavigationManager--ControllerNavigationManager_--_1_--dtor$1.c)
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$2 @ 0x1801CC64D (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$2.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$7 @ 0x1801CFF47 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$7.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$8 @ 0x1801CFF60 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$8.c)
 *     _ResizeProcessor::ResizeProcessor_::_1_::dtor$6 @ 0x1801D01C6 (_ResizeProcessor--ResizeProcessor_--_1_--dtor$6.c)
 *     _EdgyProcessor::EdgyProcessor_::_1_::dtor$2 @ 0x1801D0342 (_EdgyProcessor--EdgyProcessor_--_1_--dtor$2.c)
 *     _EdgyProcessor::EdgyProcessor_::_1_::dtor$4 @ 0x1801D0371 (_EdgyProcessor--EdgyProcessor_--_1_--dtor$4.c)
 *     _EdgyProcessor::EdgyProcessor_::_1_::dtor$9 @ 0x1801D03EE (_EdgyProcessor--EdgyProcessor_--_1_--dtor$9.c)
 *     _PenHapticInterface::PenHapticInterface_::_1_::dtor$1 @ 0x1801D109D (_PenHapticInterface--PenHapticInterface_--_1_--dtor$1.c)
 *     _InputInfoValidator::ValidatePointerInput_::_1_::dtor$0 @ 0x1801D1244 (_InputInfoValidator--ValidatePointerInput_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::unordered_map<unsigned long,unsigned __int64>::~unordered_map<unsigned long,unsigned __int64>(
        __int64 a1)
{
  std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::~_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>(a1);
}

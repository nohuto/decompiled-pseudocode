/*
 * XREFs of ??_G?$_Ref_count_del_alloc@V__ExceptionPtr@@P6AXPEAV1@@ZU?$_DebugMallocator@H@@@std@@UEAAPEAXI@Z_0 @ 0x18005F230
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 */

_QWORD *__fastcall std::_Ref_count_del_alloc<__ExceptionPtr,void (*)(__ExceptionPtr *),_DebugMallocator<int>>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_obj2<Spectre::Engine::DistanceFromCameraSceneNodeTraversal>::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B77C(a1);
  return a1;
}

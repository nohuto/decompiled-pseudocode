/*
 * XREFs of ??_G?$_Ref_count_del_alloc@V__ExceptionPtr@@P6AXPEAV1@@ZU?$_DebugMallocator@H@@@std@@UEAAPEAXI@Z @ 0x180024C30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 */

_QWORD *__fastcall std::_Ref_count_del_alloc<__ExceptionPtr,void (*)(__ExceptionPtr *),_DebugMallocator<int>>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &stdext::exception::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(a1);
  return a1;
}

/*
 * XREFs of ?RemoveInterface@PenHapticDevice@@QEAAXV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801883D0
 * Callers:
 *     ?RemoveInterface@PenDevice@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180191250 (-RemoveInterface@PenDevice@@QEAAXV-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z.c)
 * Callees:
 *     ?UpdateBamoProperties@PenHapticDevice@@QEAAXXZ @ 0x180188668 (-UpdateBamoProperties@PenHapticDevice@@QEAAXXZ.c)
 *     ?erase@?$vector@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x180188AF4 (-erase@-$vector@V-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V-$allocator@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenHapticDevice::RemoveInterface(PenHapticDevice *this, __int64 *a2)
{
  char *v4; // rcx
  _QWORD *v5; // r8
  char v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v8; // [rsp+38h] [rbp+10h]

  v8 = a2;
  v4 = (char *)this + 88;
  v5 = *(_QWORD **)v4;
  if ( *(_QWORD *)v4 != *((_QWORD *)v4 + 1) )
  {
    do
    {
      if ( *v5 == *a2 )
        break;
      ++v5;
    }
    while ( v5 != *((_QWORD **)v4 + 1) );
    if ( v5 != *((_QWORD **)v4 + 1) )
      std::vector<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>>::erase(v4, &v7);
  }
  PenHapticDevice::UpdateBamoProperties(this);
  return wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::~com_ptr_t<PenHapticInterface,wil::err_exception_policy>(a2);
}

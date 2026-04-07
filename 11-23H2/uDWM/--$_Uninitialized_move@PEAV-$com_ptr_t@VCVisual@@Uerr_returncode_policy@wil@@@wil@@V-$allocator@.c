/*
 * XREFs of ??$_Uninitialized_move@PEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180100568
 * Callers:
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180100384 (--$_Emplace_reallocate@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$com.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18010004C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@s.c)
 */

CBaseObject **__fastcall std::_Uninitialized_move<wil::com_ptr_t<CVisual,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>>(
        CBaseObject **a1,
        CBaseObject **a2,
        CBaseObject **a3)
{
  CBaseObject *v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *a3++ = v4;
    ++a1;
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>>(a3, a3);
  return a3;
}

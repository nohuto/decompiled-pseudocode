/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1802C0EE0
 * Callers:
 *     ?ProcessDeviceLost@CDeviceManager@@IEAAXXZ @ 0x1800319C0 (-ProcessDeviceLost@CDeviceManager@@IEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEAPEAVCD3DDevice@@@?$vector@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCD3DDevice@@@Z @ 0x1802C0F18 (--$_Emplace_reallocate@AEAPEAVCD3DDevice@@@-$vector@V-$com_ptr_t@VCD3DDevice@@Uerr_returncode_po.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1802C104C (--$_Uninitialized_move@PEAV-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@V-$allocat.c)
 * Callees:
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800BFD28 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

unsigned int __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>>>(
        CD3DDevice **a1,
        CD3DDevice **a2)
{
  CD3DDevice **v3; // rbx
  unsigned int result; // eax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(v3++);
    while ( v3 != a2 );
  }
  return result;
}

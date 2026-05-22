/*
 * XREFs of _PenEventsDispatcherPrincipal::GetClientsForProcess_::_1_::dtor$0 @ 0x1801D8CDD
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180064450 (--1-$vector@V-$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@V-$al.c)
 */

void __fastcall PenEventsDispatcherPrincipal::GetClientsForProcess_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::vector<wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>>::~vector<wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>>(*(_QWORD *)(a2 + 88));
  }
}

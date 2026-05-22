/*
 * XREFs of ?_Change_array@?$vector@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x1800649F4
 * Callers:
 *     ??$_Emplace_reallocate@PEAVBamoInputSpacePayloadPrincipal@@@?$vector@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV23@$$QEAPEAVBamoInputSpacePayloadPrincipal@@@Z @ 0x1800648D8 (--$_Emplace_reallocate@PEAVBamoInputSpacePayloadPrincipal@@@-$vector@V-$com_ptr_t@VBamoInputSpac.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180072F8C (--$_Emplace_reallocate@V-$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@.c)
 *     ??$_Reallocate@$0A@@?$vector@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXAEA_K@Z @ 0x18013BCC4 (--$_Reallocate@$0A@@-$vector@V-$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801891B0 (--$_Emplace_reallocate@V-$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_polic.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1800647B0 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@w.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v6; // rcx
  __int64 result; // rax

  v6 = *(char **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(
      (__int64 *)v6,
      *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(
      *(char **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}

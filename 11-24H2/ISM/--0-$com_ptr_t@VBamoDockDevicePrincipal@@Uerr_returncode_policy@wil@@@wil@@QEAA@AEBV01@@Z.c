/*
 * XREFs of ??0?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18017F090
 * Callers:
 *     ??$_Emplace@AEAKAEAV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEAKAEAV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18017E928 (--$_Emplace@AEAKAEAV-$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@-$_.c)
 *     ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x18017FFF4 (-OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>(
        _QWORD *a1,
        void (__fastcall ****a2)(_QWORD))
{
  void (__fastcall ***v3)(_QWORD); // rcx

  v3 = *a2;
  *a1 = *a2;
  if ( v3 )
    (**v3)(v3);
  return a1;
}

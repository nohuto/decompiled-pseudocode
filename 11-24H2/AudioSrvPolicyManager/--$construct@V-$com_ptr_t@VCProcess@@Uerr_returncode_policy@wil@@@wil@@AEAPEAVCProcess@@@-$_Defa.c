/*
 * XREFs of ??$construct@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVCProcess@@@?$_Default_allocator_traits@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_Flist_node@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@QEAV?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVCProcess@@@Z @ 0x1800301DC
 * Callers:
 *     ??$emplace_front@AEAPEAVCProcess@@@?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAPEAVCProcess@@@Z @ 0x18003037C (--$emplace_front@AEAPEAVCProcess@@@-$forward_list@V-$com_ptr_t@VCProcess@@Uerr_returncode_policy.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Default_allocator_traits<std::allocator<std::_Flist_node<wil::com_ptr_t<CProcess,wil::err_returncode_policy>,void *>>>::construct<wil::com_ptr_t<CProcess,wil::err_returncode_policy>,CProcess * &>(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  return wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(a2, *a3);
}

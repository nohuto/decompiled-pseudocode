/*
 * XREFs of ?OnPeerDisconnected@MPCManagerConnection@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@_N@Z @ 0x1800C0C20
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoPeer@MPCManagerBamo_AutoBamos@@@Z @ 0x1800B7EE8 (--0-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBam.c)
 *     ??1?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B7F88 (--1-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA_KAEBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BB500 (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_p.c)
 */

__int64 __fastcall MPCManagerConnection::OnPeerDisconnected(
        MPCManagerConnection *this,
        struct MPCManagerBamo_AutoBamos::BamoPeer *a2)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 31);
  wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>(
    &v4,
    (__int64)a2);
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>,std::less<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>,0>>::erase(
    v2 + 72,
    (unsigned __int64 *)&v4);
  wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>::~com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy>(&v4);
  return 0LL;
}

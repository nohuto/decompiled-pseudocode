/*
 * XREFs of ??1CAppSubmixClientContext@@QEAA@XZ @ 0x180080C9C
 * Callers:
 *     ??R?$default_delete@VCAppSubmixClientContext@@@std@@QEBAXPEAVCAppSubmixClientContext@@@Z @ 0x1800B0E50 (--R-$default_delete@VCAppSubmixClientContext@@@std@@QEBAXPEAVCAppSubmixClientContext@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$_Hash@V?$_Uset_traits@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180080CF8 (--1-$_Hash@V-$_Uset_traits@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@0@@Z @ 0x1800A61B8 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixCli.c)
 */

void __fastcall CAppSubmixClientContext::~CAppSubmixClientContext(CAppSubmixClientContext *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CAppSubmixClient>>>(v2, *((_QWORD *)this + 12));
    std::_Deallocate<16,0>(
      *((char **)this + 11),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 13) - *((_QWORD *)this + 11)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
  }
  std::_Hash<std::_Uset_traits<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,std::_Uhash_compare<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>,std::allocator<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,0>>::~_Hash<std::_Uset_traits<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,std::_Uhash_compare<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>,std::allocator<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,0>>((char *)this + 24);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)this);
}

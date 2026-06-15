/*
 * XREFs of ??$emplace_front@AEAV?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@@?$forward_list@V?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAV?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800C641C
 * Callers:
 *     _lambda_f00ad828a2d515e855b0de47f172bf9e_::operator() @ 0x1800C6AD0 (_lambda_f00ad828a2d515e855b0de47f172bf9e_--operator().c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002203C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800A5B44 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCPBMStreamClassVolumeGainSta.c)
 *     ??$construct@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@?$_Default_allocator_traits@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@SAXAEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@1@QEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@AEBV34@@Z @ 0x1800C2270 (--$construct@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@-$_Default_al.c)
 */

__int64 __fastcall std::forward_list<wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>>::emplace_front<wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy> &>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD *v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  v7 = a1;
  v8 = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  std::_Default_allocator_traits<std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>::construct<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>,wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> const &>(
    v5,
    v4 + 1,
    a2);
  *v4 = *a1;
  v8 = 0LL;
  *a1 = v4;
  std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>((__int64)&v7);
  return *a1 + 8LL;
}

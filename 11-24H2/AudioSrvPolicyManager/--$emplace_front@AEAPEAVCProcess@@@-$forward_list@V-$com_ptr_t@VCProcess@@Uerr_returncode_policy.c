/*
 * XREFs of ??$emplace_front@AEAPEAVCProcess@@@?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAPEAVCProcess@@@Z @ 0x18003037C
 * Callers:
 *     ?GetSmtcProcesses@CApplication@@QEAAJPEAV?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAI@Z @ 0x1800322A0 (-GetSmtcProcesses@CApplication@@QEAAJPEAV-$forward_list@V-$com_ptr_t@VCProcess@@Uerr_returncode_.c)
 *     ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x18003F498 (-TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180004DE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18001D930 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCPBMStreamClassVolumeGainSta.c)
 *     ??$construct@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVCProcess@@@?$_Default_allocator_traits@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_Flist_node@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@QEAV?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVCProcess@@@Z @ 0x1800301DC (--$construct@V-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVCProcess@@@-$_Defa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>::emplace_front<CProcess * &>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // r11
  _QWORD *v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v8 = a1;
  v9 = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  std::_Default_allocator_traits<std::allocator<std::_Flist_node<wil::com_ptr_t<CProcess,wil::err_returncode_policy>,void *>>>::construct<wil::com_ptr_t<CProcess,wil::err_returncode_policy>,CProcess * &>(
    v5,
    v4 + 1,
    a2);
  *v6 = *a1;
  v9 = 0LL;
  *a1 = v6;
  std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>((__int64)&v8);
  return *a1 + 8LL;
}

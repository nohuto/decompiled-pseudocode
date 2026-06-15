/*
 * XREFs of ??1?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001F9D8
 * Callers:
 *     ??1_Flist_node_remove_op@?$forward_list@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18001F6F4 (--1_Flist_node_remove_op@-$forward_list@V-$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_retur.c)
 *     _lambda_5f73260db21cd4e80ff2f87aa86ff472_::operator() @ 0x18002C714 (_lambda_5f73260db21cd4e80ff2f87aa86ff472_--operator().c)
 *     ??1?$forward_list@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18003BED0 (--1-$forward_list@V-$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$2 @ 0x1800493B0 (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--dtor$2.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$4 @ 0x1800493D0 (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--dtor$4.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$5 @ 0x1800493F0 (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--dtor$5.c)
 *     __lambda_5f73260db21cd4e80ff2f87aa86ff472_::operator()_::_1_::dtor$1 @ 0x18004A66E (__lambda_5f73260db21cd4e80ff2f87aa86ff472_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180017660 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 */

__int64 __fastcall wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>::~com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v1);
  return result;
}

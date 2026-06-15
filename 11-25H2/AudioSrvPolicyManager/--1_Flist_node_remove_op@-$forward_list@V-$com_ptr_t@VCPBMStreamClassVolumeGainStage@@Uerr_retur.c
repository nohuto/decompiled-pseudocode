/*
 * XREFs of ??1_Flist_node_remove_op@?$forward_list@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18001F814
 * Callers:
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$16 @ 0x18004C030 (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--dtor$16.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180015D50 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001FA80 (--1-$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::_Flist_node_remove_op::~_Flist_node_remove_op(
        __int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx

  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>::~com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>(v1 + 1);
      std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x10);
      v1 = v2;
    }
    while ( v2 );
  }
}

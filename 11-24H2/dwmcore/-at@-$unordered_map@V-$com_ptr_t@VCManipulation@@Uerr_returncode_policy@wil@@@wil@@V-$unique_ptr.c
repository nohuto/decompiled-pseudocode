/*
 * XREFs of ?at@?$unordered_map@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@@std@@QEAAAEAV?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@2@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800E5340
 * Callers:
 *     ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x1800E64DC (-OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipu.c)
 * Callees:
 *     ??$?RV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@QEBA_KAEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800E4048 (--$-RV-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@-$_Uhash_compare@V-$com_ptr.c)
 */

__int64 __fastcall std::unordered_map<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>>::at(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 *v3; // r11
  _QWORD *v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx

  v2 = std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>::operator()<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>(
         a1,
         a2);
  v5 = v4[3];
  v6 = 2 * (v4[6] & v2);
  v7 = *(_QWORD *)(v5 + 16 * (v4[6] & v2) + 8);
  if ( v7 == v4[1] )
    goto LABEL_7;
  v8 = *(_QWORD *)(v5 + 8 * v6);
  v9 = *v3;
  while ( 1 )
  {
    if ( v9 != *(_QWORD *)(v7 + 16) )
    {
      if ( v7 != v8 )
        goto LABEL_8;
      goto LABEL_7;
    }
    if ( v7 )
      return v7 + 24;
LABEL_7:
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
LABEL_8:
    v7 = *(_QWORD *)(v7 + 8);
  }
}

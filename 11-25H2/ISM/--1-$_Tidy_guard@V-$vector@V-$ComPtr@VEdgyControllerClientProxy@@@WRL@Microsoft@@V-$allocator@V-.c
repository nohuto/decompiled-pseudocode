/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAA@XZ @ 0x1801A1F1C
 * Callers:
 *     ??$_Construct_n@AEBQEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@AEBQEAV123@@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@AEAAX_KAEBQEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@1@Z @ 0x1801A1700 (--$_Construct_n@AEBQEAV-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@AEBQEAV123@@-$vector.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1801A0EC8 (-_Tidy@-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VEd.c)
 */

void __fastcall std::_Tidy_guard<std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>>::~_Tidy_guard<std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>>(
        __int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::_Tidy(v1);
}

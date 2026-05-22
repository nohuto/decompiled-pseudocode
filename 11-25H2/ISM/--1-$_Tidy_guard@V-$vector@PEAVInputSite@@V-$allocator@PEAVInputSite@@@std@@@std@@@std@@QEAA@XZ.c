/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@@std@@QEAA@XZ @ 0x1800AA148
 * Callers:
 *     ??$_Construct_n@AEBQEAPEAVInputSite@@AEBQEAPEAV1@@?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@AEAAX_KAEBQEAPEAVInputSite@@1@Z @ 0x1800A9B2C (--$_Construct_n@AEBQEAPEAVInputSite@@AEBQEAPEAV1@@-$vector@PEAVInputSite@@V-$allocator@PEAVInput.c)
 * Callees:
 *     ?_Tidy@?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@AEAAXXZ @ 0x1800661C0 (-_Tidy@-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Tidy_guard<std::vector<InputSite *>>::~_Tidy_guard<std::vector<InputSite *>>(__int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<InputSite *>::_Tidy(v1);
}

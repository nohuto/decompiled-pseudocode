/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@@std@@QEAA@XZ @ 0x180177F64
 * Callers:
 *     ??$_Construct_n@PEBU?$pair@G_N@std@@PEBU12@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAX_K$$QEAPEBU?$pair@G_N@1@1@Z @ 0x180096D60 (--$_Construct_n@PEBU-$pair@G_N@std@@PEBU12@@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@s.c)
 * Callees:
 *     ?_Tidy@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAXXZ @ 0x18006A3D4 (-_Tidy@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Tidy_guard<std::vector<std::pair<unsigned short,bool>>>::~_Tidy_guard<std::vector<std::pair<unsigned short,bool>>>(
        __int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<std::pair<unsigned short,bool>>::_Tidy(v1);
}

/*
 * XREFs of ??$_Construct_n@PEBU?$pair@G_N@std@@PEBU12@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAX_K$$QEAPEBU?$pair@G_N@1@1@Z @ 0x180096E70
 * Callers:
 *     _dynamic_initializer_for__c_taskSwitcherLaunchSequence__ @ 0x180009BC0 (_dynamic_initializer_for__c_taskSwitcherLaunchSequence__.c)
 * Callees:
 *     ??1?$_Tidy_guard@V?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@@std@@QEAA@XZ @ 0x180178E6C (--1-$_Tidy_guard@V-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@@std@@QEAA@XZ.c)
 *     ?_Buy_raw@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAX_K@Z @ 0x18017D20C (-_Buy_raw@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2@@std@@AEAAX_K@Z.c)
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 */

__int64 __fastcall std::vector<std::pair<unsigned short,bool>>::_Construct_n<std::pair<unsigned short,bool> const *,std::pair<unsigned short,bool> const *>(
        __int64 a1,
        unsigned __int64 a2,
        const void **a3,
        _QWORD *a4)
{
  signed __int64 v6; // rbx
  void *v7; // rdi
  __int64 result; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    v9 = a1;
    if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    std::vector<std::pair<unsigned short,bool>>::_Buy_raw(&qword_180250F70);
    v6 = *a4 - (_QWORD)*a3;
    v7 = qword_180250F70;
    memmove_0(qword_180250F70, *a3, v6);
    v9 = 0LL;
    qword_180250F78 = (__int64)v7 + 4 * (v6 >> 2);
    return std::_Tidy_guard<std::vector<std::pair<unsigned short,bool>>>::~_Tidy_guard<std::vector<std::pair<unsigned short,bool>>>(&v9);
  }
  return result;
}

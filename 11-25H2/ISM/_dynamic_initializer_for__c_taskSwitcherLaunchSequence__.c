/*
 * XREFs of _dynamic_initializer_for__c_taskSwitcherLaunchSequence__ @ 0x180009630
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Construct_n@PEBU?$pair@G_N@std@@PEBU12@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAX_K$$QEAPEBU?$pair@G_N@1@1@Z @ 0x180096D60 (--$_Construct_n@PEBU-$pair@G_N@std@@PEBU12@@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@s.c)
 *     atexit @ 0x18009CD84 (atexit.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

int dynamic_initializer_for__c_taskSwitcherLaunchSequence__()
{
  __int64 *v1; // [rsp+20h] [rbp-30h] BYREF
  __int16 *v2; // [rsp+28h] [rbp-28h] BYREF
  __int16 v3; // [rsp+30h] [rbp-20h] BYREF
  char v4; // [rsp+32h] [rbp-1Eh]
  __int16 v5; // [rsp+34h] [rbp-1Ch]
  char v6; // [rsp+36h] [rbp-1Ah]
  __int16 v7; // [rsp+38h] [rbp-18h]
  char v8; // [rsp+3Ah] [rbp-16h]
  __int16 v9; // [rsp+3Ch] [rbp-14h]
  char v10; // [rsp+3Eh] [rbp-12h]
  __int64 v11; // [rsp+40h] [rbp-10h] BYREF

  v4 = 1;
  v3 = 91;
  v6 = 1;
  v7 = 91;
  v8 = 0;
  v5 = 9;
  v9 = 9;
  v1 = &v11;
  v2 = &v3;
  v10 = 0;
  ((void (__fastcall *)(__int64, __int64, __int16 **, __int64 **))std::vector<std::pair<unsigned short,bool>>::_Construct_n<std::pair<unsigned short,bool> const *,std::pair<unsigned short,bool> const *>)(
    91LL,
    4LL,
    &v2,
    &v1);
  return atexit(dynamic_atexit_destructor_for__c_taskSwitcherLaunchSequence__);
}

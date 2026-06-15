/*
 * XREFs of ??$transform_primary@PEBG@?$_Regex_traits@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEBG0@Z @ 0x18013B0B0
 * Callers:
 *     ?_Add_equiv@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEBG0_J@Z @ 0x18013E21C (-_Add_equiv@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXPEBG0_J@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180054280 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18012890C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy@?$vector@GV?$allocator@G@std@@@std@@AEAAXXZ @ 0x180131770 (-_Tidy@-$vector@GV-$allocator@G@std@@@std@@AEAAXXZ.c)
 *     ??$?0PEBG$0A@@?$vector@GV?$allocator@G@std@@@std@@QEAA@PEBG0AEBV?$allocator@G@1@@Z @ 0x180139E10 (--$-0PEBG$0A@@-$vector@GV-$allocator@G@std@@@std@@QEAA@PEBG0AEBV-$allocator@G@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Regex_traits<unsigned short>::transform_primary<unsigned short const *>(
        _QWORD *a1,
        __int64 a2,
        const void *a3,
        __int64 a4)
{
  char *v7; // [rsp+38h] [rbp-48h] BYREF
  __int64 v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+50h] [rbp-30h]
  _BYTE v10[32]; // [rsp+58h] [rbp-28h] BYREF

  v9 = a2;
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  if ( a3 != (const void *)a4 )
  {
    std::vector<unsigned short>::vector<unsigned short>((void **)&v7, a3, a4);
    std::ctype<unsigned short>::tolower(a1[1], v7, &v7[2 * ((v8 - (__int64)v7) >> 1)]);
    (*(void (__fastcall **)(_QWORD, _BYTE *, char *, char *))(*(_QWORD *)*a1 + 32LL))(
      *a1,
      v10,
      v7,
      &v7[2 * ((v8 - (__int64)v7) >> 1)]);
    std::wstring::operator=((_OWORD *)a2, (__int64)v10);
    std::wstring::_Tidy_deallocate((__int64)v10);
    std::vector<unsigned short>::_Tidy((__int64)&v7);
  }
  return a2;
}

/*
 * XREFs of ??$transform_primary@PEAG@?$_Regex_traits@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEAG0@Z @ 0x180143A7C
 * Callers:
 *     ?_Add_equiv@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEBG0_J@Z @ 0x180146C94 (-_Add_equiv@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXPEBG0_J@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18004DC2C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??$_Construct_n@PEAGPEAG@?$vector@GV?$allocator@G@std@@@std@@AEAAX_K$$QEAPEAG1@Z @ 0x18012E7A0 (--$_Construct_n@PEAGPEAG@-$vector@GV-$allocator@G@std@@@std@@AEAAX_K$$QEAPEAG1@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801309D8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy@?$vector@GV?$allocator@G@std@@@std@@AEAAXXZ @ 0x18013A840 (-_Tidy@-$vector@GV-$allocator@G@std@@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::_Regex_traits<unsigned short>::transform_primary<unsigned short *>(
        _QWORD *a1,
        _QWORD *a2,
        _BYTE *a3,
        _BYTE *a4)
{
  __int64 v6; // rdx
  __int128 v8; // [rsp+38h] [rbp-11h] BYREF
  __int64 v9; // [rsp+48h] [rbp-1h]
  _BYTE *v10; // [rsp+50h] [rbp+7h] BYREF
  const void *v11[2]; // [rsp+58h] [rbp+Fh] BYREF
  _BYTE v12[32]; // [rsp+68h] [rbp+1Fh] BYREF

  v11[1] = a2;
  *(_OWORD *)a2 = 0LL;
  a2[2] = 0LL;
  a2[3] = 7LL;
  *(_WORD *)a2 = 0;
  if ( a3 != a4 )
  {
    v8 = 0LL;
    v9 = 0LL;
    v11[0] = a3;
    v10 = a4;
    std::vector<unsigned short>::_Construct_n<unsigned short *,unsigned short *>(
      (void **)&v8,
      (a4 - a3) >> 1,
      v11,
      &v10);
    std::ctype<unsigned short>::tolower(a1[1], v8, v8 + 2 * ((__int64)(*((_QWORD *)&v8 + 1) - v8) >> 1));
    (*(void (__fastcall **)(_QWORD, _BYTE *, _QWORD, __int64))(*(_QWORD *)*a1 + 32LL))(
      *a1,
      v12,
      v8,
      v8 + 2 * ((__int64)(*((_QWORD *)&v8 + 1) - v8) >> 1));
    std::wstring::operator=(a2, (__int64)v12);
    std::wstring::_Tidy_deallocate((__int64)v12, v6);
    std::vector<unsigned short>::_Tidy((__int64)&v8);
  }
  return a2;
}

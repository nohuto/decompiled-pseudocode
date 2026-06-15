/*
 * XREFs of ?translate@?$_Regex_traits@G@std@@QEBAGG@Z @ 0x18013AE00
 * Callers:
 *     ??$_Cmp_chrange@PEBGPEBGU?$_Cmp_collate@V?$regex_traits@G@std@@@std@@@std@@YAPEBGPEBG000U?$_Cmp_collate@V?$regex_traits@G@std@@@0@@Z @ 0x18012E5C0 (--$_Cmp_chrange@PEBGPEBGU-$_Cmp_collate@V-$regex_traits@G@std@@@std@@@std@@YAPEBGPEBG000U-$_Cmp_.c)
 *     ?_Do_class@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x1801399A8 (-_Do_class@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 *     ?_Add_char@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXG@Z @ 0x1801469CC (-_Add_char@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXG@Z.c)
 *     ?_ClassRanges@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180147E50 (-_ClassRanges@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Skip@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z @ 0x180148E6C (-_Skip@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18004DC2C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEAAPEAGXZ @ 0x1800620CC (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEAAPEAGXZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Regex_traits<unsigned short>::translate(__int64 *a1, unsigned __int16 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned __int16 v4; // bx
  unsigned __int16 v6; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v7[14]; // [rsp+32h] [rbp-46h] BYREF
  _BYTE v8[16]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v9; // [rsp+50h] [rbp-28h]

  v2 = *a1;
  v6 = a2;
  (*(void (__fastcall **)(__int64, _BYTE *, unsigned __int16 *, _BYTE *))(*(_QWORD *)v2 + 32LL))(v2, v8, &v6, v7);
  if ( v9 == 1 )
    v4 = *(_WORD *)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr((__int64)v8, v3);
  else
    v4 = v6;
  std::wstring::_Tidy_deallocate((__int64)v8, v3);
  return v4;
}

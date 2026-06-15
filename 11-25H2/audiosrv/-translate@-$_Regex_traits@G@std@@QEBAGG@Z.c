/*
 * XREFs of ?translate@?$_Regex_traits@G@std@@QEBAGG@Z @ 0x180131CEC
 * Callers:
 *     ??$_Cmp_chrange@PEBGPEBGU?$_Cmp_collate@V?$regex_traits@G@std@@@std@@@std@@YAPEBGPEBG000U?$_Cmp_collate@V?$regex_traits@G@std@@@0@@Z @ 0x1801266B4 (--$_Cmp_chrange@PEBGPEBGU-$_Cmp_collate@V-$regex_traits@G@std@@@std@@@std@@YAPEBGPEBG000U-$_Cmp_.c)
 *     ?_Do_class@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x1801308D8 (-_Do_class@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 *     ?_Add_char@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXG@Z @ 0x18013DF54 (-_Add_char@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXG@Z.c)
 *     ?_ClassRanges@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18013F3D8 (-_ClassRanges@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Skip@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z @ 0x1801403F4 (-_Skip@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180054280 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEAAPEAGXZ @ 0x180071CFC (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEAAPEAGXZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Regex_traits<unsigned short>::translate(__int64 *a1, unsigned __int16 a2)
{
  __int64 v2; // rcx
  unsigned __int16 v3; // bx
  unsigned __int16 v5; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v6[14]; // [rsp+32h] [rbp-46h] BYREF
  _BYTE v7[16]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v8; // [rsp+50h] [rbp-28h]

  v2 = *a1;
  v5 = a2;
  (*(void (__fastcall **)(__int64, _BYTE *, unsigned __int16 *, _BYTE *))(*(_QWORD *)v2 + 32LL))(v2, v7, &v5, v6);
  if ( v8 == 1 )
    v3 = *(_WORD *)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr((__int64)v7);
  else
    v3 = v5;
  std::wstring::_Tidy_deallocate((__int64)v7);
  return v3;
}

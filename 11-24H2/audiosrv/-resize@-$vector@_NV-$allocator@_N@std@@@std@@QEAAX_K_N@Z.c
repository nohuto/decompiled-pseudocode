/*
 * XREFs of ?resize@?$vector@_NV?$allocator@_N@std@@@std@@QEAAX_K_N@Z @ 0x18013AD28
 * Callers:
 *     ??$_Match@V?$allocator@V?$sub_match@PEBG@std@@@std@@@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAA_NPEAV?$match_results@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@@1@_N@Z @ 0x18012F0E8 (--$_Match@V-$allocator@V-$sub_match@PEBG@std@@@std@@@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG.c)
 *     ?_Do_capture_group@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014822C (-_Do_capture_group@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ?_Insert_n@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_KAEB_N@Z @ 0x180139F70 (-_Insert_n@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocat.c)
 *     ?end@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@XZ @ 0x18013A9C8 (-end@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I@s.c)
 *     ?erase@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@0@Z @ 0x18013AACC (-erase@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I.c)
 */

void __fastcall std::vector<bool>::resize(unsigned __int64 *a1, unsigned __int64 a2)
{
  __int128 *v2; // rax
  _QWORD *v3; // r11
  __int64 v4; // r10
  __int64 v5; // r9
  __int128 *v6; // rax
  __int64 v7; // r10
  __int64 *v8; // r11
  __int64 v9; // rdx
  __int128 v10; // xmm0
  char v11[16]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v12; // [rsp+40h] [rbp-40h] BYREF
  __int128 v13; // [rsp+50h] [rbp-30h] BYREF
  __int128 v14; // [rsp+60h] [rbp-20h] BYREF
  __int128 v15; // [rsp+70h] [rbp-10h] BYREF

  v11[0] = 0;
  if ( a1[3] >= a2 )
  {
    if ( a1[3] > a2 )
    {
      v6 = std::vector<bool>::end(a1, &v14);
      v9 = *v8;
      if ( v7 >= 0 )
        *(_QWORD *)&v12 = v9 + 4 * ((unsigned __int64)v7 >> 5);
      else
        *(_QWORD *)&v12 = v9 - (4 * ((unsigned __int64)~v7 >> 5) + 4);
      v10 = *v6;
      *((_QWORD *)&v12 + 1) = v7 & 0x1F;
      v13 = v10;
      std::vector<bool>::erase(v8, &v15, &v12);
    }
  }
  else
  {
    v2 = std::vector<bool>::end(a1, &v13);
    v5 = v4 - v3[3];
    v12 = *v2;
    std::vector<bool>::_Insert_n(v3, &v14, &v12, v5, v11);
  }
}

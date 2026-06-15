/*
 * XREFs of ?_Add_equiv@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEBG0_J@Z @ 0x18013E21C
 * Callers:
 *     ?_Do_ex_class@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z @ 0x18013F900 (-_Do_ex_class@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C1A0 (--2@YAPEAX_K@Z.c)
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x18004E910 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180054280 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??$transform_primary@PEAG@?$_Regex_traits@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEAG0@Z @ 0x18013AFA8 (--$transform_primary@PEAG@-$_Regex_traits@G@std@@QEBA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ??$transform_primary@PEBG@?$_Regex_traits@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEBG0@Z @ 0x18013B0B0 (--$transform_primary@PEBG@-$_Regex_traits@G@std@@QEBA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ?_Char_to_elts@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXPEBG0_JPEAPEAU?$_Sequence@G@2@@Z @ 0x18013EF14 (-_Char_to_elts@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXPEBG0_JPEAPEAU-$_Sequence@G@2@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_equiv(
        __int64 a1,
        const void *a2,
        __int64 a3,
        int a4)
{
  int v5; // r15d
  int v6; // r14d
  __int64 v8; // rbp
  unsigned int v9; // ebx
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned __int16 *v14; // r9
  bool v15; // di
  int v16; // ecx
  _OWORD *v17; // rdx
  _OWORD *v18; // rax
  __int16 v20; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v21[6]; // [rsp+32h] [rbp-96h] BYREF
  _OWORD *v22; // [rsp+38h] [rbp-90h]
  _BYTE v23[16]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v24; // [rsp+50h] [rbp-78h]
  _QWORD v25[4]; // [rsp+60h] [rbp-68h] BYREF

  v5 = a3;
  v6 = (int)a2;
  v8 = *(_QWORD *)(a1 + 8);
  std::_Regex_traits<unsigned short>::transform_primary<unsigned short const *>(
    *(_QWORD **)(a1 + 24),
    (__int64)v23,
    a2,
    a3);
  v9 = 0;
  v10 = 0LL;
  do
  {
    v20 = v9;
    std::_Regex_traits<unsigned short>::transform_primary<unsigned short *>(*(_QWORD **)(a1 + 24), v25, &v20, v21);
    std::wstring::c_str((__int64)v23);
    v12 = std::wstring::c_str(v11);
    v15 = v13 == v24 && !(unsigned int)std::_WChar_traits<unsigned short>::compare(v12, v14, v13);
    std::wstring::_Tidy_deallocate((__int64)v25);
    if ( v15 )
    {
      v17 = *(_OWORD **)(v8 + 40);
      if ( !v17 )
      {
        v18 = operator new(0x20uLL);
        v17 = v18;
        v22 = v18;
        if ( v18 )
        {
          *v18 = 0LL;
          v18[1] = 0LL;
        }
        else
        {
          v17 = 0LL;
        }
        *(_QWORD *)(v8 + 40) = v17;
      }
      v16 = *((unsigned __int8 *)v17 + (v10 >> 3)) | (1 << (v9 & 7));
      *((_BYTE *)v17 + (v10 >> 3)) = v16;
    }
    ++v9;
    ++v10;
  }
  while ( v9 < 0x100 );
  std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Char_to_elts(
    v16,
    v6,
    v5,
    a4,
    v8 + 72);
  return std::wstring::_Tidy_deallocate((__int64)v23);
}

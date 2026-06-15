/*
 * XREFs of ?_Add_equiv@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEBG0_J@Z @ 0x180146C94
 * Callers:
 *     ?_Do_ex_class@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z @ 0x180148378 (-_Do_ex_class@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180015ED0 (--2@YAPEAX_K@Z.c)
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x180042DA0 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18004DC2C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??$transform_primary@PEAG@?$_Regex_traits@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEAG0@Z @ 0x180143A7C (--$transform_primary@PEAG@-$_Regex_traits@G@std@@QEBA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ??$transform_primary@PEBG@?$_Regex_traits@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEBG0@Z @ 0x180143B84 (--$transform_primary@PEBG@-$_Regex_traits@G@std@@QEBA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ?_Char_to_elts@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXPEBG0_JPEAPEAU?$_Sequence@G@2@@Z @ 0x18014798C (-_Char_to_elts@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXPEBG0_JPEAPEAU-$_Sequence@G@2@@.c)
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
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int16 *v16; // r9
  bool v17; // di
  int v18; // ecx
  _OWORD *v19; // rdx
  _OWORD *v20; // rax
  __int64 v21; // rdx
  __int16 v23; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v24[6]; // [rsp+32h] [rbp-96h] BYREF
  _OWORD *v25; // [rsp+38h] [rbp-90h]
  _BYTE v26[16]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v27; // [rsp+50h] [rbp-78h]
  _QWORD v28[4]; // [rsp+60h] [rbp-68h] BYREF

  v5 = a3;
  v6 = (int)a2;
  v8 = *(_QWORD *)(a1 + 8);
  std::_Regex_traits<unsigned short>::transform_primary<unsigned short const *>(
    *(_QWORD **)(a1 + 24),
    (__int64)v26,
    a2,
    a3);
  v9 = 0;
  v10 = 0LL;
  do
  {
    v23 = v9;
    v11 = std::_Regex_traits<unsigned short>::transform_primary<unsigned short *>(*(_QWORD **)(a1 + 24), v28, &v23, v24);
    std::wstring::c_str((__int64)v26, (__int64)v11);
    v13 = std::wstring::c_str(v12, v12);
    v17 = v15 == v27 && !(unsigned int)std::_WChar_traits<unsigned short>::compare(v13, v16, v15);
    std::wstring::_Tidy_deallocate((__int64)v28, v14);
    if ( v17 )
    {
      v19 = *(_OWORD **)(v8 + 40);
      if ( !v19 )
      {
        v20 = operator new(0x20uLL);
        v19 = v20;
        v25 = v20;
        if ( v20 )
        {
          *v20 = 0LL;
          v20[1] = 0LL;
        }
        else
        {
          v19 = 0LL;
        }
        *(_QWORD *)(v8 + 40) = v19;
      }
      v18 = *((unsigned __int8 *)v19 + (v10 >> 3)) | (1 << (v9 & 7));
      *((_BYTE *)v19 + (v10 >> 3)) = v18;
    }
    ++v9;
    ++v10;
  }
  while ( v9 < 0x100 );
  std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Char_to_elts(
    v18,
    v6,
    v5,
    a4,
    v8 + 72);
  return std::wstring::_Tidy_deallocate((__int64)v26, v21);
}

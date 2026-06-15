/*
 * XREFs of ?_Add_rep@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXHH_N@Z @ 0x18013E4F4
 * Callers:
 *     ?_Quantifier@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180140298 (-_Quantifier@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C1A0 (--2@YAPEAX_K@Z.c)
 *     ?_Add_char@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXG@Z @ 0x18013DF54 (-_Add_char@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXG@Z.c)
 *     ?_Link_node@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@PEAV32@@Z @ 0x1801401C4 (-_Link_node@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAPEAV_Node_base@2@PEAV32@@Z.c)
 */

__int64 __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_rep(
        _QWORD *a1,
        int a2,
        int a3,
        unsigned __int8 a4)
{
  int v5; // r12d
  __int64 v6; // rdx
  int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rbp
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  _QWORD *v14; // rsi
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  _QWORD *v17; // r14
  _QWORD *v18; // rax
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rbx
  _DWORD *v25; // rax
  _DWORD *v26; // r9
  int v27; // r8d
  __int64 v28; // r9

  v5 = a4;
  v6 = a1[1];
  if ( *(_DWORD *)(v6 + 8) == 6 )
  {
    v9 = *(_DWORD *)(v6 + 36);
    if ( v9 != 1 )
    {
      v10 = v9 - 1;
      *(_DWORD *)(v6 + 36) = v10;
      std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char(
        (__int64)a1,
        *(_WORD *)(*(_QWORD *)(v6 + 40) + 2LL * v10));
    }
  }
  v11 = a1[1];
  if ( *(_DWORD *)(v11 + 8) == 9 || *(_DWORD *)(v11 + 8) == 14 )
    v11 = *(_QWORD *)(v11 + 32);
  if ( a2 || a3 != 1 )
  {
    v23 = operator new(0x28uLL);
    v24 = v23;
    if ( v23 )
    {
      v23[1] = 19LL;
      v23[2] = 0LL;
      v23[3] = 0LL;
      *v23 = &std::_Node_capture::`vftable';
      v23[4] = 0LL;
    }
    else
    {
      v24 = 0LL;
    }
    v25 = operator new(0x38uLL);
    v26 = v25;
    if ( v25 )
    {
      v27 = *(_DWORD *)(*a1 + 36LL);
      *(_DWORD *)(*a1 + 36LL) = v27 + 1;
      v25[2] = 18;
      v25[13] = -1;
      v25[3] = 2 * v5;
      *((_QWORD *)v25 + 2) = 0LL;
      *((_QWORD *)v25 + 3) = 0LL;
      *(_QWORD *)v25 = &std::_Node_rep::`vftable';
      v25[8] = a2;
      v25[9] = a3;
      *((_QWORD *)v25 + 5) = v24;
      v25[12] = v27;
    }
    else
    {
      v26 = 0LL;
    }
    v24[4] = v26;
    std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Link_node(a1, v24);
    *(_QWORD *)(*(_QWORD *)(v11 + 24) + 16LL) = v28;
    result = *(_QWORD *)(v11 + 24);
    *(_QWORD *)(v28 + 24) = result;
    *(_QWORD *)(v11 + 24) = v28;
    *(_QWORD *)(v28 + 16) = v11;
  }
  else
  {
    v12 = operator new(0x20uLL);
    v13 = v12;
    if ( v12 )
    {
      v12[1] = 17LL;
      v12[2] = 0LL;
      v12[3] = 0LL;
      *v12 = &std::_Node_endif::`vftable';
    }
    else
    {
      v13 = 0LL;
    }
    v14 = operator new(0x30uLL);
    if ( v14 )
    {
      v14[1] = 16LL;
      v14[2] = 0LL;
      v14[3] = 0LL;
      *v14 = &std::_Node_if::`vftable';
      v14[4] = v13;
      v14[5] = 0LL;
    }
    else
    {
      v14 = 0LL;
    }
    v15 = operator new(0x30uLL);
    v16 = v15;
    if ( v15 )
    {
      v15[1] = 16LL;
      v15[2] = 0LL;
      v15[3] = 0LL;
      *v15 = &std::_Node_if::`vftable';
      v15[4] = v13;
      v15[5] = 0LL;
    }
    else
    {
      v16 = 0LL;
    }
    v17 = operator new(0x20uLL);
    if ( v17 )
    {
      v17[1] = 8LL;
      *v17 = &std::_Node_endif::`vftable';
      v17[2] = 0LL;
      v17[3] = 0LL;
    }
    else
    {
      v17 = 0LL;
    }
    v18 = operator new(0x28uLL);
    if ( v18 )
    {
      v18[1] = 9LL;
      *v18 = &std::_Node_capture::`vftable';
      v18[2] = 0LL;
      v18[3] = 0LL;
      v18[4] = v17;
    }
    else
    {
      v18 = 0LL;
    }
    v16[2] = v17;
    v17[3] = v16;
    v17[2] = v18;
    v18[3] = v17;
    v18[2] = v13;
    v14[5] = v16;
    std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Link_node(a1, v13);
    *(_QWORD *)(*(_QWORD *)(v11 + 24) + 16LL) = v14;
    result = *(_QWORD *)(v11 + 24);
    v14[3] = result;
    *(_QWORD *)(v11 + 24) = v14;
    v14[2] = v11;
    if ( !(_BYTE)v5 )
    {
      v20 = v16[2];
      v21 = *(_QWORD *)(v11 + 24);
      *(_QWORD *)(v11 + 24) = *(_QWORD *)(v20 + 24);
      *(_QWORD *)(v20 + 24) = v21;
      result = v16[2];
      v22 = v14[2];
      v14[2] = result;
      v16[2] = v22;
    }
  }
  return result;
}

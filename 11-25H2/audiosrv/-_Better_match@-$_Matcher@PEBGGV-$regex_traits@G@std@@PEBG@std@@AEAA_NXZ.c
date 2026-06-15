/*
 * XREFs of ?_Better_match@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NXZ @ 0x180130298
 * Callers:
 *     ?_Match_pat@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x180131234 (-_Match_pat@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Better_match(
        __int64 a1)
{
  unsigned int v1; // r11d
  unsigned int v2; // r9d
  __int64 v4; // rdi
  unsigned __int64 v5; // r8
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r8
  bool v17; // sf
  bool v18; // of
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r8

  v1 = *(_DWORD *)(a1 + 196);
  v2 = 0;
  if ( !v1 )
    return 0;
  v4 = *(_QWORD *)(a1 + 72);
  while ( 1 )
  {
    v5 = (unsigned __int64)v2 >> 5;
    v6 = 1 << (v2 & 0x1F);
    if ( (v6 & *(_DWORD *)(v4 + 4 * v5)) == 0 || (v6 & *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v5)) == 0 )
      goto LABEL_7;
    v7 = *(_QWORD *)(a1 + 40);
    v8 = *(_QWORD *)(a1 + 104);
    v9 = *(_QWORD *)(v7 + 16LL * v2);
    v10 = *(_QWORD *)(v8 + 16LL * v2);
    if ( v10 != v9 )
      break;
    v11 = *(_QWORD *)(v8 + 16LL * v2 + 8);
    v12 = *(_QWORD *)(v7 + 16LL * v2 + 8);
    if ( v11 != v12 )
    {
      v14 = *(_QWORD *)(a1 + 152);
      v15 = (v11 - v14) & 0xFFFFFFFFFFFFFFFEuLL;
      v16 = (v12 - v14) & 0xFFFFFFFFFFFFFFFEuLL;
      v18 = __OFSUB__(v15, v16);
      v17 = (__int64)(v15 - v16) < 0;
      return v17 ^ v18;
    }
LABEL_7:
    if ( ++v2 >= v1 )
      return 0;
  }
  v19 = *(_QWORD *)(a1 + 152);
  v20 = (v9 - v19) & 0xFFFFFFFFFFFFFFFEuLL;
  v21 = (v10 - v19) & 0xFFFFFFFFFFFFFFFEuLL;
  v18 = __OFSUB__(v21, v20);
  v17 = (__int64)(v21 - v20) < 0;
  return v17 ^ v18;
}

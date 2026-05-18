/*
 * XREFs of ?seekoff@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@_JHH@Z @ 0x18001F8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::stringbuf::seekoff(__int64 a1, _QWORD *a2, __int64 a3, int a4, char a5)
{
  _BYTE *v5; // r10
  bool v8; // cl
  bool v9; // al
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r8
  __int64 *v12; // rax
  __int64 v13; // r10
  unsigned __int64 v14; // rcx
  int v15; // r9d
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rdi
  int v20; // ecx
  int v21; // ecx

  v5 = (_BYTE *)(a1 + 112);
  v8 = (a5 & 1) != 0 && (*v5 & 4) != 0;
  v9 = (a5 & 2) != 0 && (*v5 & 2) != 0;
  if ( v8 || v9 )
    goto LABEL_44;
  v10 = **(_QWORD **)(a1 + 56);
  if ( (*v5 & 2) != 0 )
  {
    v11 = 0LL;
  }
  else
  {
    v11 = **(_QWORD **)(a1 + 64);
    if ( v11 && *(_QWORD *)(a1 + 104) < v11 )
      *(_QWORD *)(a1 + 104) = v11;
  }
  v12 = *(__int64 **)(a1 + 24);
  v13 = *v12;
  v14 = *(_QWORD *)(a1 + 104) - *v12;
  if ( !a4 )
  {
    v16 = 0LL;
    goto LABEL_31;
  }
  v15 = a4 - 1;
  if ( !v15 )
  {
    if ( (a5 & 3) != 3 )
    {
      if ( (a5 & 1) != 0 )
      {
        if ( !v10 && v13 )
          goto LABEL_44;
        v17 = v10;
      }
      else
      {
        if ( (a5 & 2) == 0 || !v11 && v13 )
          goto LABEL_44;
        v17 = v11;
      }
      v16 = v17 - v13;
      goto LABEL_31;
    }
LABEL_44:
    *a2 = -1LL;
    goto LABEL_45;
  }
  if ( v15 != 1 )
    goto LABEL_44;
  v16 = *(_QWORD *)(a1 + 104) - *v12;
LABEL_31:
  v18 = v16 + a3;
  if ( v16 + a3 > v14 || v18 && ((a5 & 1) != 0 && !v10 || (a5 & 2) != 0 && !v11) )
    goto LABEL_44;
  v19 = v13 + v18;
  if ( (a5 & 1) != 0 && v10 )
  {
    v20 = *(_QWORD *)(a1 + 104) - v19;
    **(_QWORD **)(a1 + 24) = v13;
    **(_QWORD **)(a1 + 56) = v19;
    **(_DWORD **)(a1 + 80) = v20;
  }
  if ( (a5 & 2) != 0 && v11 )
  {
    v21 = **(_DWORD **)(a1 + 64) + **(_DWORD **)(a1 + 88) - v19;
    **(_QWORD **)(a1 + 32) = v13;
    **(_QWORD **)(a1 + 64) = v19;
    **(_DWORD **)(a1 + 88) = v21;
  }
  *a2 = v18;
LABEL_45:
  a2[1] = 0LL;
  a2[2] = 0LL;
  return a2;
}

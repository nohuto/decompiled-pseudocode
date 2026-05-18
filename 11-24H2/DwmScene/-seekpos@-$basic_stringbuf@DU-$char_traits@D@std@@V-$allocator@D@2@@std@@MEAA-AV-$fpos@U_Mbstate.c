/*
 * XREFs of ?seekpos@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@V32@H@Z @ 0x18001FBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall std::stringbuf::seekpos(__int64 a1, unsigned __int64 *a2, _QWORD *a3, char a4)
{
  _BYTE *v4; // r10
  bool v6; // cl
  bool v7; // al
  unsigned __int64 v8; // r8
  __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  __int64 *v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // r10
  int v15; // ecx

  v4 = (_BYTE *)(a1 + 112);
  v6 = (a4 & 1) != 0 && (*v4 & 4) != 0;
  v7 = (a4 & 2) != 0 && (*v4 & 2) != 0;
  if ( v6 || v7 )
    goto LABEL_29;
  v8 = *a3 + a3[1];
  v9 = **(_QWORD **)(a1 + 56);
  if ( (*v4 & 2) != 0 )
  {
    v10 = 0LL;
  }
  else
  {
    v10 = **(_QWORD **)(a1 + 64);
    if ( v10 && *(_QWORD *)(a1 + 104) < v10 )
      *(_QWORD *)(a1 + 104) = v10;
  }
  v11 = *(__int64 **)(a1 + 24);
  v12 = *(_QWORD *)(a1 + 104);
  v13 = *v11;
  if ( v8 > v12 - *v11 || v8 && ((a4 & 1) != 0 && !v9 || (a4 & 2) != 0 && !v10) )
  {
LABEL_29:
    *a2 = -1LL;
  }
  else
  {
    v14 = v13 + v8;
    if ( (a4 & 1) != 0 && v9 )
    {
      *v11 = v13;
      **(_QWORD **)(a1 + 56) = v14;
      **(_DWORD **)(a1 + 80) = v12 - v14;
    }
    if ( (a4 & 2) != 0 && v10 )
    {
      v15 = **(_DWORD **)(a1 + 64) + **(_DWORD **)(a1 + 88) - v14;
      **(_QWORD **)(a1 + 32) = v13;
      **(_QWORD **)(a1 + 64) = v14;
      **(_DWORD **)(a1 + 88) = v15;
    }
    *a2 = v8;
  }
  a2[1] = 0LL;
  a2[2] = 0LL;
  return a2;
}

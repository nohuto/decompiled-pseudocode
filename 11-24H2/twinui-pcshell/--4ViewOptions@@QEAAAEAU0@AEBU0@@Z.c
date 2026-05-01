/*
 * XREFs of ??4ViewOptions@@QEAAAEAU0@AEBU0@@Z @ 0x1801B37C8
 * Callers:
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x180080818 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 * Callees:
 *     ?_Clear_and_reserve_geometric@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1802BC628 (-_Clear_and_reserve_geometric@-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@W.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

__int64 __fastcall ViewOptions::operator=(__int64 a1, __int64 a2)
{
  void **v2; // r14
  char *v4; // r12
  char *v5; // r15
  unsigned __int64 v6; // rdi
  void *v7; // rcx
  unsigned __int64 v8; // rbp
  size_t v9; // rdi
  char *v10; // rax
  char *v12; // rbx
  char *v13; // rdx
  size_t v14; // rdi

  *(_BYTE *)a1 = *(_BYTE *)a2;
  v2 = (void **)(a1 + 32);
  *(_BYTE *)(a1 + 1) = *(_BYTE *)(a2 + 1);
  *(_BYTE *)(a1 + 2) = *(_BYTE *)(a2 + 2);
  *(_BYTE *)(a1 + 3) = *(_BYTE *)(a2 + 3);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  if ( a1 + 32 != a2 + 32 )
  {
    v4 = *(char **)(a2 + 32);
    v5 = (char *)*v2;
    v6 = (__int64)(*(_QWORD *)(a2 + 40) - (_QWORD)v4) >> 4;
    if ( v6 > (__int64)(*(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 32)) >> 4 )
    {
      std::vector<Windows::Foundation::Rect>::_Clear_and_reserve_geometric(a1 + 32);
      v12 = (char *)*v2;
      v13 = v4;
    }
    else
    {
      v7 = *v2;
      v8 = ((_BYTE *)v2[1] - v5) >> 4;
      if ( v6 <= v8 )
      {
        v9 = 16 * v6;
        memmove_0(v7, v4, v9);
        v10 = &v5[v9];
LABEL_5:
        v2[1] = v10;
        return a1;
      }
      memmove_0(v7, v4, 16 * v8);
      v13 = &v4[16 * v8];
      v6 -= v8;
      v12 = (char *)v2[1];
    }
    v14 = 16 * v6;
    memmove_0(v12, v13, v14);
    v10 = &v12[v14];
    goto LABEL_5;
  }
  return a1;
}

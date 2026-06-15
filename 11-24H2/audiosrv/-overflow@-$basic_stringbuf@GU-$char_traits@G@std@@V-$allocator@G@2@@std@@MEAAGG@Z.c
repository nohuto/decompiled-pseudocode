/*
 * XREFs of ?overflow@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAAGG@Z @ 0x180162C90
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002A5BC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180053E30 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 */

__int64 __fastcall std::basic_stringbuf<unsigned short>::overflow(__int64 a1, unsigned __int16 a2)
{
  int *v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rcx
  _WORD **v9; // rcx
  unsigned __int16 *v10; // rdx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r14
  void *v13; // r12
  SIZE_T size_of; // rax
  const struct std::nothrow_t *v15; // rdi
  char *v16; // r15
  __int64 v17; // r9
  __int64 v18; // rcx
  char *v19; // r8
  _DWORD *v20; // rax
  _WORD **v21; // rcx
  unsigned __int16 *v22; // rdx

  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    if ( a2 == 0xFFFF )
      return 0LL;
    v5 = *(int **)(a1 + 88);
    v6 = **(_QWORD **)(a1 + 64);
    v7 = *v5;
    v8 = v6 + 2 * v7;
    if ( v6 && v6 < v8 )
    {
      *v5 = v7 - 1;
      v9 = *(_WORD ***)(a1 + 64);
      v10 = (*v9)++;
      *v10 = a2;
      *(_QWORD *)(a1 + 104) = v6 + 2;
      return a2;
    }
    v11 = 0LL;
    v12 = 32LL;
    v13 = **(void ***)(a1 + 24);
    if ( !v6 || (v11 = (__int64)(v8 - (_QWORD)v13) >> 1, v11 < 0x20) )
    {
LABEL_13:
      size_of = std::_Get_size_of_n<2>(v12);
      v15 = (const struct std::nothrow_t *)(2 * v11);
      v16 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      memcpy_0(v16, v13, (size_t)v15);
      *(_QWORD *)(a1 + 104) = &v16[(_QWORD)v15 + 2];
      **(_QWORD **)(a1 + 32) = v16;
      **(_QWORD **)(a1 + 64) = &v16[(_QWORD)v15];
      **(_DWORD **)(a1 + 88) = (__int64)(2 * v12 - (_QWORD)v15) >> 1;
      if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
      {
        **(_QWORD **)(a1 + 24) = v16;
        **(_QWORD **)(a1 + 56) = v16;
        **(_DWORD **)(a1 + 80) = 0;
      }
      else
      {
        v17 = *(_QWORD *)(a1 + 104);
        v18 = (__int64)(**(_QWORD **)(a1 + 56) - (_QWORD)v13) >> 1;
        **(_QWORD **)(a1 + 24) = v16;
        v19 = &v16[2 * v18];
        **(_QWORD **)(a1 + 56) = v19;
        **(_DWORD **)(a1 + 80) = (v17 - (__int64)v19) >> 1;
      }
      if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
        std::_Deallocate<16,0>((char *)v13, v15);
      v20 = *(_DWORD **)(a1 + 88);
      *(_DWORD *)(a1 + 112) |= 1u;
      --*v20;
      v21 = *(_WORD ***)(a1 + 64);
      v22 = (*v21)++;
      *v22 = a2;
      return a2;
    }
    if ( v11 < 0x3FFFFFFF )
    {
      v12 = 2 * v11;
      goto LABEL_13;
    }
    v12 = 0x7FFFFFFFLL;
    if ( v11 < 0x7FFFFFFF )
      goto LABEL_13;
  }
  return 0xFFFFLL;
}

/*
 * XREFs of ?GetTightDirtyRects@?$CTargetDirtyBase@$07@@QEAA_NPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180097CC0
 * Callers:
 *     ?Present@CDDARenderTarget@@IEAAJXZ @ 0x180097A78 (-Present@CDDARenderTarget@@IEAAJXZ.c)
 *     ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x180099BC8 (-Present@CLegacyRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180041D70 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEAUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@AEAU2@@Z @ 0x1801E9AB8 (--$_Emplace_reallocate@AEAUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAP.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

char __fastcall CTargetDirtyBase<8>::GetTightDirtyRects(__int64 a1, const void **a2)
{
  int **v2; // rdi
  char result; // al
  int *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r14
  unsigned __int64 v10; // rbp
  SIZE_T size_of; // rax
  char *v12; // r15
  int *v13; // r14
  int v14; // eax
  __int64 v15; // r12
  _DWORD *v16; // r14
  char *v17; // r12
  int v18; // edi
  _DWORD *v19; // r13
  _DWORD *v20; // rcx
  __int64 v21; // rbp
  __int64 v22; // rax
  _DWORD *v23; // r15
  _OWORD *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int128 v27; // [rsp+20h] [rbp-58h] BYREF

  v2 = *(int ***)(a1 + 464);
  if ( !v2 )
    return 0;
  v6 = *v2;
  if ( **v2 )
  {
    v7 = (__int64)&v6[2 * **v2 + 1];
    v8 = (v7 + *(int *)(v7 + 4) - (__int64)v6[4] - (__int64)(v6 + 3)) >> 3;
    if ( (_DWORD)v8 )
    {
      v9 = ((_BYTE *)a2[1] - (_BYTE *)*a2) >> 4;
      v10 = v9 + (unsigned int)v8;
      if ( v10 > ((_BYTE *)a2[2] - (_BYTE *)*a2) >> 4 )
      {
        if ( v10 > 0xFFFFFFFFFFFFFFFLL )
          std::_Xlength_error("vector too long");
        size_of = std::_Get_size_of_n<16>(v9 + (unsigned int)v8);
        v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
        memmove_0(v12, *a2, (_BYTE *)a2[1] - (_BYTE *)*a2);
        if ( *a2 )
          std::_Deallocate<16,0>(*a2, ((_BYTE *)a2[2] - (_BYTE *)*a2) & 0xFFFFFFFFFFFFFFF0uLL);
        *a2 = v12;
        a2[1] = &v12[16 * v9];
        a2[2] = &v12[16 * v10];
      }
      v13 = *v2;
      v14 = **v2;
      if ( v14 )
      {
        v15 = v13[4];
        v16 = v13 + 3;
        v17 = (char *)v16 + v15;
        v18 = 0;
        v19 = &v16[2 * v14 - 2];
        v20 = v16 + 2;
        v21 = ((__int64)v16 + (int)v16[3] - (_QWORD)v17 + 8) >> 3;
        if ( (int)v21 <= 0 )
        {
          v18 = 1;
          do
          {
            v16 = v20;
            v22 = (int)v20[3];
            v17 = (char *)v20 + (int)v20[1];
            v20 += 2;
            LODWORD(v21) = ((__int64)v20 + v22 - (__int64)v17) >> 3;
            if ( (_DWORD)v21 )
              goto LABEL_22;
          }
          while ( v16 < v19 );
        }
      }
      else
      {
        v18 = v27;
        v19 = 0LL;
        v17 = (char *)v27;
        v16 = 0LL;
        LODWORD(v21) = v27;
      }
LABEL_17:
      while ( v16 < v19 )
      {
        v23 = v16 + 2;
        v24 = a2[1];
        DWORD1(v27) = *v16;
        HIDWORD(v27) = v16[2];
        v25 = 2 * v18;
        LODWORD(v27) = *(_DWORD *)&v17[4 * v25];
        DWORD2(v27) = *(_DWORD *)&v17[4 * v25 + 4];
        if ( v24 == a2[2] )
        {
          std::vector<tagRECT>::_Emplace_reallocate<tagRECT &>(a2, v24, &v27);
        }
        else
        {
          *v24 = v27;
          a2[1] = (char *)a2[1] + 16;
        }
        if ( ++v18 >= (int)v21 )
        {
          while ( 1 )
          {
            v16 = v23;
            v26 = (int)v23[3];
            v17 = (char *)v23 + (int)v23[1];
            v23 += 2;
            LODWORD(v21) = ((__int64)v23 + v26 - (__int64)v17) >> 3;
            if ( (_DWORD)v21 )
              break;
            if ( v16 >= v19 )
              goto LABEL_17;
          }
LABEL_22:
          v18 = 0;
        }
      }
    }
  }
  result = 1;
  ***(_DWORD ***)(a1 + 464) = 0;
  return result;
}

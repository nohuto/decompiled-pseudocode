/*
 * XREFs of ?GetDirtyRects@COverlaySwapChain@@UEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180042130
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180041D70 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEAUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@AEAU2@@Z @ 0x1801E9AB8 (--$_Emplace_reallocate@AEAUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAP.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x18024E37C (-_Xlength@-$vector@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCache@.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

__int64 __fastcall COverlaySwapChain::GetDirtyRects(__int64 a1, const void **a2)
{
  _DWORD *v2; // r8
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rbp
  unsigned __int64 v8; // rsi
  SIZE_T size_of; // rax
  char *v10; // r14
  int *v11; // rsi
  int v12; // eax
  __int64 v13; // r15
  _DWORD *v14; // rsi
  char *v15; // r15
  int v16; // r14d
  _DWORD *v17; // r13
  _DWORD *v18; // rcx
  __int64 v19; // rbp
  __int64 v20; // rax
  _DWORD *v21; // r12
  _OWORD *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int128 v26; // [rsp+20h] [rbp-58h] BYREF

  v2 = *(_DWORD **)(a1 + 160);
  if ( *v2 )
  {
    v5 = (__int64)&v2[2 * *v2 + 1];
    v6 = (v5 + *(int *)(v5 + 4) - (__int64)(int)v2[4] - (__int64)(v2 + 3)) >> 3;
    if ( (_DWORD)v6 )
    {
      v7 = ((_BYTE *)a2[1] - (_BYTE *)*a2) >> 4;
      v8 = v7 + (unsigned int)v6;
      if ( v8 > ((_BYTE *)a2[2] - (_BYTE *)*a2) >> 4 )
      {
        if ( v8 > 0xFFFFFFFFFFFFFFFLL )
          std::vector<std::unique_ptr<CBetterCheckMPOCache>>::_Xlength();
        size_of = std::_Get_size_of_n<16>(v7 + (unsigned int)v6);
        v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
        memmove_0(v10, *a2, (_BYTE *)a2[1] - (_BYTE *)*a2);
        if ( *a2 )
          std::_Deallocate<16,0>(*a2, ((_BYTE *)a2[2] - (_BYTE *)*a2) & 0xFFFFFFFFFFFFFFF0uLL);
        *a2 = v10;
        a2[1] = &v10[16 * v7];
        a2[2] = &v10[16 * v8];
      }
      v11 = *(int **)(a1 + 160);
      v12 = *v11;
      if ( *v11 )
      {
        v13 = v11[4];
        v14 = v11 + 3;
        v15 = (char *)v14 + v13;
        v16 = 0;
        v17 = &v14[2 * v12 - 2];
        v18 = v14 + 2;
        v19 = ((__int64)v14 + (int)v14[3] - (_QWORD)v15 + 8) >> 3;
        if ( (int)v19 <= 0 )
        {
          v16 = 1;
          do
          {
            v14 = v18;
            v20 = (int)v18[3];
            v15 = (char *)v18 + (int)v18[1];
            v18 += 2;
            LODWORD(v19) = ((__int64)v18 + v20 - (__int64)v15) >> 3;
            if ( (_DWORD)v19 )
              goto LABEL_20;
          }
          while ( v14 < v17 );
        }
      }
      else
      {
        LODWORD(v19) = v26;
        v17 = 0LL;
        v16 = v26;
        v14 = 0LL;
        v15 = (char *)v26;
      }
LABEL_15:
      while ( v14 < v17 )
      {
        v21 = v14 + 2;
        v22 = a2[1];
        DWORD1(v26) = *v14;
        HIDWORD(v26) = v14[2];
        v23 = 2 * v16;
        LODWORD(v26) = *(_DWORD *)&v15[4 * v23];
        DWORD2(v26) = *(_DWORD *)&v15[4 * v23 + 4];
        if ( v22 == a2[2] )
        {
          std::vector<tagRECT>::_Emplace_reallocate<tagRECT &>(a2, v22, &v26);
        }
        else
        {
          *v22 = v26;
          a2[1] = (char *)a2[1] + 16;
        }
        if ( ++v16 >= (int)v19 )
        {
          while ( 1 )
          {
            v14 = v21;
            v24 = (int)v21[3];
            v15 = (char *)v21 + (int)v21[1];
            v21 += 2;
            LODWORD(v19) = ((__int64)v21 + v24 - (__int64)v15) >> 3;
            if ( (_DWORD)v19 )
              break;
            if ( v14 >= v17 )
              goto LABEL_15;
          }
LABEL_20:
          v16 = 0;
        }
      }
    }
  }
  else
  {
    LODWORD(v6) = 0;
  }
  return (unsigned int)v6;
}

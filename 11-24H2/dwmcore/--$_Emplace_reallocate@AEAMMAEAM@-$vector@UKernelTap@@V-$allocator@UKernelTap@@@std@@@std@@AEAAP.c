/*
 * XREFs of ??$_Emplace_reallocate@AEAMMAEAM@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAPEAUKernelTap@@QEAU2@AEAM$$QEAM1@Z @ 0x1801F5550
 * Callers:
 *     ?GenerateTaps@CGaussianKernel@@SAXAEAV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@MM@Z @ 0x1801F5744 (-GenerateTaps@CGaussianKernel@@SAXAEAV-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0M@@std@@YA_K_K@Z @ 0x1801F5CA4 (--$_Get_size_of_n@$0M@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@AEAAXQEAUKernelTap@@_K1@Z @ 0x1801F5CD4 (-_Change_array@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@AEAAXQEAUKernelTap@@_K1.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x18024E37C (-_Xlength@-$vector@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCache@.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

char *__fastcall std::vector<KernelTap>::_Emplace_reallocate<float &,float,float &>(
        const void **a1,
        _BYTE *a2,
        _DWORD *a3,
        int *a4,
        int *a5)
{
  __int64 v6; // rbx
  __int64 v10; // r14
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  SIZE_T size_of; // rax
  char *v16; // rax
  int v17; // xmm0_4
  char *v18; // rsi
  char *v19; // r14
  int v20; // xmm1_4
  void *v21; // rcx
  _BYTE *v22; // r8
  _BYTE *v23; // rdx
  size_t v24; // r8

  v6 = 0x1555555555555555LL;
  v10 = (a2 - (_BYTE *)*a1) / 12;
  v11 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2);
  if ( v11 == 0x1555555555555555LL )
    std::vector<std::unique_ptr<CBetterCheckMPOCache>>::_Xlength(a1);
  v12 = v11 + 1;
  v13 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2);
  v14 = v13 >> 1;
  if ( v13 <= 0x1555555555555555LL - (v13 >> 1) )
  {
    v6 = v14 + v13;
    if ( v14 + v13 < v12 )
      v6 = v12;
  }
  size_of = std::_Get_size_of_n<12>(v6);
  v16 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v17 = *a4;
  v18 = v16;
  v19 = &v16[12 * v10];
  v20 = *a5;
  *(_DWORD *)v19 = *a3;
  v21 = v16;
  *((_DWORD *)v19 + 1) = v17;
  *((_DWORD *)v19 + 2) = v20;
  v22 = a1[1];
  v23 = *a1;
  if ( a2 == v22 )
  {
    v24 = v22 - v23;
  }
  else
  {
    memmove_0(v16, v23, a2 - (_BYTE *)*a1);
    v21 = v19 + 12;
    v24 = (_BYTE *)a1[1] - a2;
    v23 = a2;
  }
  memmove_0(v21, v23, v24);
  std::vector<KernelTap>::_Change_array(a1, v18, v12, v6);
  return v19;
}

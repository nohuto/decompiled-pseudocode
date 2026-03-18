/*
 * XREFs of ??$_Emplace_reallocate@$$V@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@AEAAPEAUVailSuperWetStroke@CSuperWetInkManager@@QEAU23@@Z @ 0x180260148
 * Callers:
 *     ?OnUpdatedVailInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801A0EE0 (-OnUpdatedVailInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0HI@@std@@YA_K_K@Z @ 0x18024D090 (--$_Get_size_of_n@$0HI@@std@@YA_K_K@Z.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?_Change_array@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@AEAAXQEAUVailSuperWetStroke@CSuperWetInkManager@@_K1@Z @ 0x180260A30 (-_Change_array@-$vector@UVailSuperWetStroke@CSuperWetInkManager@@V-$allocator@UVailSuperWetStrok.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

char *__fastcall std::vector<CSuperWetInkManager::VailSuperWetStroke>::_Emplace_reallocate<>(
        const void **a1,
        _BYTE *a2)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // rdi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  SIZE_T size_of; // rax
  char *v11; // rbp
  char *v12; // rdi
  void *v13; // rcx
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  size_t v16; // r8

  v3 = 0x222222222222222LL;
  v5 = (a2 - (_BYTE *)*a1) / 120;
  v6 = 0xEEEEEEEEEEEEEEEFuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3);
  if ( v6 == 0x222222222222222LL )
    std::_Xlength_error("vector too long");
  v7 = v6 + 1;
  v8 = 0xEEEEEEEEEEEEEEEFuLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3);
  v9 = v8 >> 1;
  if ( v8 <= 0x222222222222222LL - (v8 >> 1) )
  {
    v3 = v9 + v8;
    if ( v9 + v8 < v7 )
      v3 = v7;
  }
  size_of = std::_Get_size_of_n<120>(v3);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = &v11[120 * v5];
  memset_0(v12, 0, 0x78uLL);
  *((_QWORD *)v12 + 3) = -1LL;
  *((_QWORD *)v12 + 11) = 0LL;
  v13 = v11;
  *((_QWORD *)v12 + 12) = 0LL;
  *((_QWORD *)v12 + 13) = 0LL;
  v12[112] = 0;
  v14 = a1[1];
  v15 = *a1;
  if ( a2 == v14 )
  {
    v16 = v14 - v15;
  }
  else
  {
    memmove_0(v11, v15, a2 - (_BYTE *)*a1);
    v13 = v12 + 120;
    v16 = (_BYTE *)a1[1] - a2;
    v15 = a2;
  }
  memmove_0(v13, v15, v16);
  std::vector<CSuperWetInkManager::VailSuperWetStroke>::_Change_array(a1, v11, v7, v3);
  return v12;
}

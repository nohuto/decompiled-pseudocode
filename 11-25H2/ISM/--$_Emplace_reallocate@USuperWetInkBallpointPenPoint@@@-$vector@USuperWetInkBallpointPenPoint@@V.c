/*
 * XREFs of ??$_Emplace_reallocate@USuperWetInkBallpointPenPoint@@@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@AEAAPEAUSuperWetInkBallpointPenPoint@@QEAU2@$$QEAU2@@Z @ 0x1800AD184
 * Callers:
 *     ?OnInput@DelegatedInkCanvasProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800AD320 (-OnInput@DelegatedInkCanvasProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProces.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DI@@std@@YA_K_K@Z @ 0x18009A6EC (--$_Get_size_of_n@$0DI@@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@AEBA_K_K@Z @ 0x1800AD4C8 (-_Calculate_growth@-$vector@USuperWetInkBallpointPenPoint@@V-$allocator@USuperWetInkBallpointPen.c)
 *     ?_Change_array@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@AEAAXQEAUSuperWetInkBallpointPenPoint@@_K1@Z @ 0x1800AD510 (-_Change_array@-$vector@USuperWetInkBallpointPenPoint@@V-$allocator@USuperWetInkBallpointPenPoin.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

char *__fastcall std::vector<SuperWetInkBallpointPenPoint>::_Emplace_reallocate<SuperWetInkBallpointPenPoint>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned __int64 v9; // r14
  size_t size_of; // rax
  char *v11; // rax
  char *v12; // rbx
  char *v13; // rdi
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  char *v16; // rcx
  size_t v17; // r8
  char *result; // rax
  char *v19; // [rsp+58h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) / 56;
  v7 = 0x6DB6DB6DB6DB6DB7LL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3);
  if ( v7 == 0x492492492492492LL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = std::vector<SuperWetInkBallpointPenPoint>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<56>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11;
  v19 = v11;
  try
  {
    v13 = &v11[56 * v6];
    *(_OWORD *)v13 = *(_OWORD *)a3;
    *((_OWORD *)v13 + 1) = *(_OWORD *)(a3 + 16);
    *((_OWORD *)v13 + 2) = *(_OWORD *)(a3 + 32);
    *((_QWORD *)v13 + 6) = *(_QWORD *)(a3 + 48);
    v14 = a1[1];
    v15 = *a1;
    v16 = v11;
    if ( a2 == v14 )
    {
      v17 = v14 - v15;
    }
    else
    {
      memmove_0(v11, v15, a2 - (_BYTE *)*a1);
      v16 = v13 + 56;
      v17 = (_BYTE *)a1[1] - a2;
      v15 = a2;
    }
    memmove_0(v16, v15, v17);
    std::vector<SuperWetInkBallpointPenPoint>::_Change_array(a1, v12, v8, v9);
    result = v13;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v19, (const struct std::nothrow_t *)(56 * v9));
    throw;
  }
  return result;
}

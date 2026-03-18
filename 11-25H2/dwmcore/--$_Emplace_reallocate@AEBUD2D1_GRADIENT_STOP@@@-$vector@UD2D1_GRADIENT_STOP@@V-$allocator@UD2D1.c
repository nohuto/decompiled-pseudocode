/*
 * XREFs of ??$_Emplace_reallocate@AEBUD2D1_GRADIENT_STOP@@@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAPEAUD2D1_GRADIENT_STOP@@QEAU2@AEBU2@@Z @ 0x1802AC3BC
 * Callers:
 *     ?FlattenStops@CGradientBrush@@AEAAXXZ @ 0x180132010 (-FlattenStops@CGradientBrush@@AEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAXQEAUD2D1_GRADIENT_STOP@@_K1@Z @ 0x180211990 (-_Change_array@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAX.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180250B48 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

char *__fastcall std::vector<D2D1_GRADIENT_STOP>::_Emplace_reallocate<D2D1_GRADIENT_STOP const &>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  char *v12; // rax
  __int64 v13; // rdi
  char *v14; // rbp
  void *v15; // rcx
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  size_t v18; // r8

  v6 = (a2 - (_BYTE *)*a1) / 20;
  v7 = 0xCCCCCCCCCCCCCCCDuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2);
  if ( v7 == 0xCCCCCCCCCCCCCCCLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = 0xCCCCCCCCCCCCCCCDuLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2);
  v10 = v9 >> 1;
  if ( v9 <= 0xCCCCCCCCCCCCCCCLL - (v9 >> 1) )
  {
    v11 = v7 + 1;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    if ( v11 > 0xCCCCCCCCCCCCCCCLL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v11 = 0xCCCCCCCCCCCCCCCLL;
  }
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(20 * v11);
  v13 = (__int64)v12;
  v14 = &v12[20 * v6];
  *(_OWORD *)v14 = *(_OWORD *)a3;
  *((_DWORD *)v14 + 4) = *(_DWORD *)(a3 + 16);
  v15 = v12;
  v16 = a1[1];
  v17 = *a1;
  if ( a2 == v16 )
  {
    v18 = v16 - v17;
  }
  else
  {
    memmove_0(v12, v17, a2 - (_BYTE *)*a1);
    v15 = v14 + 20;
    v18 = (_BYTE *)a1[1] - a2;
    v17 = a2;
  }
  memmove_0(v15, v17, v18);
  std::vector<D2D1_GRADIENT_STOP>::_Change_array((__int64)a1, v13, v8, v11);
  return v14;
}

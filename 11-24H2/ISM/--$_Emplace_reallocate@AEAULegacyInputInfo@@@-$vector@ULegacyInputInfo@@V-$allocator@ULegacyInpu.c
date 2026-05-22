/*
 * XREFs of ??$_Emplace_reallocate@AEAULegacyInputInfo@@@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@AEAAPEAULegacyInputInfo@@QEAU2@AEAU2@@Z @ 0x1800CED10
 * Callers:
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z @ 0x1800CFEB0 (-QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009ADDC (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1801CF19C (memcpy_0.c)
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 */

char *__fastcall std::vector<LegacyInputInfo>::_Emplace_reallocate<LegacyInputInfo &>(
        __int64 a1,
        _BYTE *a2,
        const void *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // r14
  char *v12; // rax
  char *v13; // rdi
  char *v14; // rsi
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  void *v17; // rcx
  size_t v18; // r8
  unsigned __int64 v19; // rax
  __int64 v21; // [rsp+50h] [rbp+8h]
  char *v22; // [rsp+58h] [rbp+10h]

  v6 = (__int64)&a2[-*(_QWORD *)a1] / 3008;
  v7 = 0x51B3BEA3677D46CFLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 6);
  if ( v7 == 0x15C9882B931057LL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = 0x51B3BEA3677D46CFLL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 6);
  if ( v9 <= 0x15C9882B931057LL - (v9 >> 1) )
  {
    v19 = (v9 >> 1) + v9;
    v10 = v8;
    if ( v19 >= v8 )
      v10 = v19;
    v21 = v10;
    if ( v10 > 0x15C9882B931057LL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v10 = 0x15C9882B931057LL;
    v21 = 0x15C9882B931057LL;
  }
  v11 = 3008 * v10;
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(3008 * v10);
  v13 = v12;
  v22 = v12;
  try
  {
    v14 = &v12[3008 * v6];
    memcpy_0(v14, a3, 0xBC0uLL);
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v22, (const struct std::nothrow_t *)(3008 * v21));
    throw;
  }
  v15 = *(_BYTE **)(a1 + 8);
  v16 = *(_BYTE **)a1;
  v17 = v13;
  if ( a2 == v15 )
  {
    v18 = v15 - v16;
  }
  else
  {
    memmove_0(v13, v16, (size_t)&a2[-*(_QWORD *)a1]);
    v17 = v14 + 3008;
    v18 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
    v16 = a2;
  }
  memmove_0(v17, v16, v18);
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(
      *(char **)a1,
      (const struct std::nothrow_t *)((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 6 << 6));
  *(_QWORD *)a1 = v13;
  *(_QWORD *)(a1 + 8) = &v13[3008 * v8];
  *(_QWORD *)(a1 + 16) = &v13[v11];
  return v14;
}

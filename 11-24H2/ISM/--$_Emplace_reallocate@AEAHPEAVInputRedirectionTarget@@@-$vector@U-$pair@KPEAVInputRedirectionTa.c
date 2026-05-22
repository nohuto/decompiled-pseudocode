/*
 * XREFs of ??$_Emplace_reallocate@AEAHPEAVInputRedirectionTarget@@@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@AEAAPEAU?$pair@KPEAVInputRedirectionTarget@@@1@QEAU21@AEAH$$QEAPEAVInputRedirectionTarget@@@Z @ 0x1801AF580
 * Callers:
 *     ?EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x1801AF9C0 (-EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800383BC (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 */

char *__fastcall std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::_Emplace_reallocate<int &,InputRedirectionTarget *>(
        __int64 a1,
        char *a2,
        _DWORD *a3,
        _QWORD *a4)
{
  unsigned __int64 v7; // r15
  __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  size_t size_of; // rax
  char *v14; // rax
  char *v15; // r14
  char *v16; // r15
  char *v17; // r8
  _BYTE *v18; // rdx
  char *v19; // rcx
  size_t v20; // r8
  char *result; // rax
  char *v22; // [rsp+68h] [rbp+10h]

  v7 = (unsigned __int64)&a2[-*(_QWORD *)a1];
  v8 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  v9 = 0xFFFFFFFFFFFFFFFLL;
  if ( v8 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v10 = v8 + 1;
  v11 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4;
  v12 = v11 >> 1;
  if ( v11 <= 0xFFFFFFFFFFFFFFFLL - (v11 >> 1) )
  {
    v9 = v12 + v11;
    if ( v12 + v11 < v10 )
      v9 = v10;
  }
  size_of = std::_Get_size_of_n<16>(v9);
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v15 = v14;
  v22 = v14;
  try
  {
    v16 = &v14[v7 & 0xFFFFFFFFFFFFFFF0uLL];
    *(_DWORD *)v16 = *a3;
    *((_QWORD *)v16 + 1) = *a4;
    v17 = *(char **)(a1 + 8);
    v18 = *(_BYTE **)a1;
    v19 = v14;
    if ( a2 == v17 )
    {
      v20 = v17 - v18;
    }
    else
    {
      memmove_0(v14, v18, (size_t)&a2[-*(_QWORD *)a1]);
      v19 = v16 + 16;
      v20 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
      v18 = a2;
    }
    memmove_0(v19, v18, v20);
    if ( *(_QWORD *)a1 )
      std::_Deallocate<16,0>(
        *(char **)a1,
        (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL));
    *(_QWORD *)a1 = v15;
    *(_QWORD *)(a1 + 8) = &v15[16 * v10];
    *(_QWORD *)(a1 + 16) = &v15[16 * v9];
    result = v16;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v22, (const struct std::nothrow_t *)(16 * v9));
    throw;
  }
  return result;
}

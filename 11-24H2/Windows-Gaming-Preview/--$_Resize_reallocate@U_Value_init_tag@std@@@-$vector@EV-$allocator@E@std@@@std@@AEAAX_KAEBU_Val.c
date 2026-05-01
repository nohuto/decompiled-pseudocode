/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180013F5C
 * Callers:
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180014A98 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180002240 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180002E14 (memset_0.c)
 *     ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x180010F90 (-__scrt_throw_std_bad_array_new_length@@YAXXZ.c)
 *     ?_Xlength@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x180010FD8 (-_Xlength@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@.c)
 *     memmove_0 @ 0x18004307C (memmove_0.c)
 */

char *__fastcall std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(
        const void **a1,
        unsigned __int64 a2)
{
  size_t v4; // rbx
  signed __int64 v5; // r15
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  size_t v8; // rcx
  void *v9; // rax
  const struct std::nothrow_t *v10; // rdx
  char *v11; // rcx
  _QWORD *v12; // rdi
  __int64 v13; // rcx
  char *v14; // rcx
  char *v15; // r8
  char *result; // rax
  __int64 v17; // [rsp+50h] [rbp+18h]

  v4 = 0x7FFFFFFFFFFFFFFFLL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
LABEL_22:
    std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Xlength();
  v5 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v6 = (_BYTE *)a1[2] - (_BYTE *)*a1;
  v7 = v6 >> 1;
  if ( v6 <= 0x7FFFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v4 = v7 + v6;
    if ( v7 + v6 < a2 )
      v4 = a2;
    v17 = v4;
    if ( v4 < 0x1000 )
    {
      if ( v4 )
        v12 = operator new(v4);
      else
        v12 = 0LL;
      goto LABEL_24;
    }
    v8 = v4 + 39;
    v17 = v4;
    if ( v4 + 39 <= v4 )
      __scrt_throw_std_bad_array_new_length();
  }
  else
  {
    v17 = 0x7FFFFFFFFFFFFFFFLL;
    v8 = 0x8000000000000026uLL;
  }
  v9 = operator new(v8);
  if ( !v9 )
  {
LABEL_21:
    _o__invalid_parameter_noinfo_noreturn(v11, v10);
    __debugbreak();
    goto LABEL_22;
  }
  v12 = (_QWORD *)(((unsigned __int64)v9 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
  *(v12 - 1) = v9;
LABEL_24:
  try
  {
    memset_0((char *)v12 + v5, 0, a2 - v5);
    memmove_0(v12, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
  }
  catch ( ... )
  {
    std::allocator<unsigned char>::deallocate(v13, v12, v17);
    throw;
  }
  v14 = (char *)*a1;
  if ( *a1 )
  {
    v10 = (const struct std::nothrow_t *)((_BYTE *)a1[2] - v14);
    if ( (unsigned __int64)v10 < 0x1000 )
    {
LABEL_19:
      operator delete(v14, v10);
      goto LABEL_20;
    }
    v10 = (const struct std::nothrow_t *)((char *)v10 + 39);
    v15 = (char *)*((_QWORD *)v14 - 1);
    v11 = (char *)(v14 - v15);
    if ( (unsigned __int64)(v11 - 8) <= 0x1F )
    {
      v14 = v15;
      goto LABEL_19;
    }
    goto LABEL_21;
  }
LABEL_20:
  *a1 = v12;
  a1[1] = (char *)v12 + a2;
  result = (char *)v12 + v4;
  a1[2] = (char *)v12 + v4;
  return result;
}

/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAXAEA_K@Z @ 0x180013D48
 * Callers:
 *     ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x18001438C (-DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV-$function@$$A6AJU_GUID@.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180002240 (--2@YAPEAX_K@Z.c)
 *     ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x180010E90 (-__scrt_throw_std_bad_array_new_length@@YAXXZ.c)
 *     memmove_0 @ 0x180042ECC (memmove_0.c)
 */

void __fastcall std::vector<_GUID>::_Reallocate<0>(const void **a1, _QWORD *a2)
{
  signed __int64 v4; // rdi
  size_t v5; // rcx
  void *v6; // rax
  const struct std::nothrow_t *v7; // rdx
  char *v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r14
  char *v12; // rcx
  char *v13; // r8

  v4 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  if ( *a2 > 0xFFFFFFFFFFFFFFFuLL )
LABEL_16:
    __scrt_throw_std_bad_array_new_length();
  v5 = 16LL * *a2;
  if ( v5 < 0x1000 )
  {
    if ( v5 )
      v9 = operator new(v5);
    else
      v9 = 0LL;
  }
  else
  {
    if ( v5 + 39 < v5 )
      goto LABEL_16;
    v6 = operator new(v5 + 39);
    if ( !v6 )
      goto LABEL_15;
    v9 = (_QWORD *)(((unsigned __int64)v6 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v9 - 1) = v6;
  }
  try
  {
    memmove_0(v9, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
  }
  catch ( ... )
  {
    std::allocator<_GUID>::deallocate(v10, v9, *a2);
    throw;
  }
  v11 = *a2;
  v12 = (char *)*a1;
  if ( *a1 )
  {
    v7 = (const struct std::nothrow_t *)(((_BYTE *)a1[2] - v12) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned __int64)v7 < 0x1000 )
    {
LABEL_13:
      operator delete(v12, v7);
      goto LABEL_14;
    }
    v7 = (const struct std::nothrow_t *)((char *)v7 + 39);
    v13 = (char *)*((_QWORD *)v12 - 1);
    v8 = (char *)(v12 - v13);
    if ( (unsigned __int64)(v8 - 8) <= 0x1F )
    {
      v12 = v13;
      goto LABEL_13;
    }
LABEL_15:
    _o__invalid_parameter_noinfo_noreturn(v8, v7);
    __debugbreak();
    goto LABEL_16;
  }
LABEL_14:
  *a1 = v9;
  a1[1] = (char *)v9 + (v4 & 0xFFFFFFFFFFFFFFF0uLL);
  a1[2] = &v9[2 * v11];
}

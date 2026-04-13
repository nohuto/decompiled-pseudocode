/*
 * XREFs of ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x18003D464
 * Callers:
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x18000BBC8 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K_N@Z @ 0x18003D9AC (-_Grow@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA_N_K_N@Z.c)
 * Callees:
 *     memcpy_0 @ 0x1800227E6 (memcpy_0.c)
 *     ??$_Allocate@D@std@@YAPEAD_KPEAD@Z @ 0x1800285B4 (--$_Allocate@D@std@@YAPEAD_KPEAD@Z.c)
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x18003DE1C (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 */

const void **__fastcall std::string::_Copy(const void **Src, unsigned __int64 a2, size_t a3)
{
  size_t v3; // rsi
  const void **v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  void *v8; // r14
  const void *v9; // rdx
  __int64 v10; // rdx
  const void **result; // rax
  __int64 *v12; // rdx
  __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  void *v21; // [rsp+68h] [rbp+20h]

  v3 = a3;
  v4 = Src;
  v5 = a2 | 0xF;
  if ( (a2 | 0xF) == 0xFFFFFFFFFFFFFFFFuLL )
  {
    v5 = a2;
  }
  else
  {
    v6 = (unsigned __int64)Src[3];
    v7 = v6 >> 1;
    if ( v6 >> 1 > v5 / 3 )
    {
      v5 = v7 + v6;
      if ( v6 > -2LL - v7 )
        v5 = -2LL;
    }
  }
  try
  {
    v8 = std::_Allocate<char>(v5 + 1);
  }
  catch ( ... )
  {
    try
    {
      v21 = std::_Allocate<char>(a2 + 1);
    }
    catch ( ... )
    {
      v12 = &v13;
      LOBYTE(v12) = 1;
      std::string::_Tidy(Src, v12, 0LL);
      throw;
    }
    v4 = Src;
    v3 = a3;
    v5 = a2;
    v8 = v21;
  }
  if ( v3 )
  {
    if ( (unsigned __int64)v4[3] < 0x10 )
      v9 = v4;
    else
      v9 = *v4;
    memcpy_0(v8, v9, v3);
  }
  LOBYTE(v10) = 1;
  std::string::_Tidy(v4, v10, 0LL);
  *v4 = v8;
  v4[3] = (const void *)v5;
  result = v4;
  if ( v5 >= 0x10 )
    result = (const void **)v8;
  v4[2] = (const void *)v3;
  *((_BYTE *)result + v3) = 0;
  return result;
}

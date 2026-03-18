/*
 * XREFs of PsInitializeScpCfgPages @ 0x140C3658C
 * Callers:
 *     MmInitializeImageViewExtensionCfg @ 0x140C5428C (MmInitializeImageViewExtensionCfg.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1404F8960 (-terminate@details@gsl@@YAXXZ.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ?PspFinalizeScpCfgPage@@YAJV?$span@E$0?0@gsl@@W4_RTL_SCP_CFG_PAGE_TYPE@@PEAX2PEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC@@EK@Z @ 0x140C3612C (-PspFinalizeScpCfgPage@@YAJV-$span@E$0-0@gsl@@W4_RTL_SCP_CFG_PAGE_TYPE@@PEAX2PEAU_RTL_SCP_CFG_NT.c)
 *     ?PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC@@@Z @ 0x140C36350 (-PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_.c)
 */

__int64 __fastcall PsInitializeScpCfgPages(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 result; // rax
  _DWORD *v11; // rdx
  size_t v12; // r8
  __int64 v13; // r9
  __int64 i; // rbx
  const void *v15; // rdx
  unsigned __int32 v16; // edi
  __int64 j; // rcx
  __int64 k; // rbx
  __int64 v19; // rcx
  _QWORD v20[2]; // [rsp+40h] [rbp-E8h] BYREF
  _BYTE v21[64]; // [rsp+50h] [rbp-D8h] BYREF
  void *Src[2]; // [rsp+90h] [rbp-98h] BYREF

  Src[0] = 0LL;
  memset_0(&Src[1], 0, 0x60uLL);
  memset_0(v21, 0, sizeof(v21));
  result = PspLocateNtdllAddressesForScpCfg(
             v8,
             a6,
             v9,
             (struct _RTL_SCP_CFG_NTDLL_EXPORTS *)Src,
             (struct _RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC *)v21);
  if ( (int)result >= 0 )
  {
    for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
    {
      v15 = Src[2 * (unsigned int)i];
      v16 = _mm_srli_si128(*(__m128i *)&Src[2 * (unsigned int)i], 8).m128i_u32[0] - (_DWORD)v15;
      memmove(*(void **)(a1 + 8 * i), v15, v16);
      v12 = 4096 - v16;
      if ( v16 != 4096 )
        memset_0((void *)(v16 + *(_QWORD *)(a1 + 8 * i)), 204, v12);
    }
    for ( j = 0LL; (unsigned int)j < 4; j = (unsigned int)(j + 1) )
    {
      v11 = *(_DWORD **)(a1 + 8 * j);
      if ( v11[2] != 320 || v11[3] != 448 || *v11 != 64 || v11[1] != 192 )
        return 3221225485LL;
    }
    for ( k = 0LL; (unsigned int)k < 4; k = (unsigned int)(k + 1) )
    {
      v19 = *(_QWORD *)(a1 + 8 * k);
      if ( !v19 )
      {
        gsl::details::terminate(0LL, (__int64)v11, v12, v13);
        __debugbreak();
      }
      v20[0] = 4096LL;
      v20[1] = v19;
      result = PspFinalizeScpCfgPage((gsl::details *)v20, (unsigned int)k, a4, v13, Src);
      if ( (int)result < 0 )
        return result;
    }
    return 0LL;
  }
  return result;
}

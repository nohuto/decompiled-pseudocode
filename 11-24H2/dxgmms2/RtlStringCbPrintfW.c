/*
 * XREFs of RtlStringCbPrintfW @ 0x14003DF74
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x140093FBC (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z.c)
 *     ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x14009C6B0 (-EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?Initialize@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEBUDXGK_PHYSICALADAPTERINFO@@PEBU_DXGK_GPUMMUCAPS@@@Z @ 0x14009D134 (-Initialize@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEBUDXGK_PHYSICALADAPTERINFO@@PEBU_DXGK_GPUMMUCAPS@@@Z.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400B9FAC (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     VidSchiOpenProcessAdapterInfo @ 0x1400D42D8 (VidSchiOpenProcessAdapterInfo.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  unsigned __int64 v5; // rsi
  NTSTATUS v6; // edi
  int v7; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = cbDest >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
  {
    v5 = v3 - 1;
    v6 = 0;
    v7 = _vsnwprintf(pszDest, v3 - 1, pszFormat, Args);
    if ( v7 < 0 || v7 > v5 )
    {
      v6 = -2147483643;
    }
    else if ( v7 != v5 )
    {
      return v6;
    }
    pszDest[v5] = 0;
    return v6;
  }
  v6 = -1073741811;
  if ( v3 )
    *pszDest = 0;
  return v6;
}

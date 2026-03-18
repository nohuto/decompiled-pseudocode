/*
 * XREFs of NtGdiGetOutlineTextMetricsInternalW @ 0x140260450
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x1400BB3D8 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400BEDA0 (-GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@R.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14031D3AC (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall NtGdiGetOutlineTextMetricsInternalW(HDC a1, size_t Size, char *a3, unsigned __int64 a4)
{
  size_t v6; // r14
  void *v8; // rdi
  __int64 v9; // rbx
  __int64 SessionState; // rax
  unsigned int OutlineTextMetrics; // eax
  unsigned int v13; // esi
  __int64 v14; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v15[64]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v16[10]; // [rsp+80h] [rbp-68h] BYREF

  v6 = (unsigned int)Size;
  v8 = 0LL;
  v9 = 0LL;
  v14 = 0LL;
  if ( (_DWORD)Size && a3 )
  {
    if ( (unsigned int)Size <= 0x2710000 )
      v8 = (void *)AllocFreeTmpBuffer((unsigned int)Size);
    if ( !v8 )
      return 0LL;
    memset_0(v8, 0, v6);
  }
  else
  {
    v6 = 0LL;
  }
  SessionState = W32GetSessionState((_DWORD)a1, Size);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v15,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
  if ( !EUDCCountRegion::IsReady((EUDCCountRegion *)v15) )
  {
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v15);
    return 0LL;
  }
  UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v16, a1);
  if ( v16[0] )
  {
    OutlineTextMetrics = GrepGetOutlineTextMetrics((struct UDCOBJ *)v16, v6, (char *)v8, &v14);
    v9 = v14;
  }
  else
  {
    EngSetLastError(6u);
    OutlineTextMetrics = 0;
  }
  v13 = 0;
  if ( OutlineTextMetrics != -1 )
    v13 = OutlineTextMetrics;
  if ( v13 )
  {
    if ( a4 + 8 > MmUserProbeAddress || a4 + 8 <= a4 || (a4 & 3) != 0 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_QWORD *)a4 = v9;
    if ( (_DWORD)v6 )
    {
      if ( (unsigned __int64)&a3[v6] > MmUserProbeAddress || &a3[v6] <= a3 || ((unsigned __int8)a3 & 3) != 0 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a3, v8, (unsigned int)v6);
    }
  }
  if ( v8 )
    FreeTmpBuffer(v8);
  UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v16);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v15);
  return v13;
}

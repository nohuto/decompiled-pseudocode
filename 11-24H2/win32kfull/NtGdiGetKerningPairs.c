/*
 * XREFs of NtGdiGetKerningPairs @ 0x1402602F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x1400BB3D8 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetKerningPairs@@YAKAEAVUDCOBJ@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400C1550 (-GrepGetKerningPairs@@YAKAEAVUDCOBJ@@KPEAUtagKERNINGPAIR@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14031D3AC (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtGdiGetKerningPairs(HDC a1, __int64 a2, char *a3)
{
  unsigned int v4; // r14d
  unsigned int KerningPairs; // ebx
  HSEMAPHORE v7; // rdi
  __int64 SessionState; // rax
  unsigned int v9; // eax
  size_t v10; // r8
  _QWORD v12[10]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v13[64]; // [rsp+70h] [rbp-58h] BYREF

  v4 = a2;
  KerningPairs = 0;
  v7 = 0LL;
  if ( a3 && (unsigned int)a2 <= 0x4E2000 )
    v7 = (HSEMAPHORE)AllocFreeTmpBuffer((unsigned int)(8 * a2));
  if ( !a3 || v7 )
  {
    SessionState = W32GetSessionState((_DWORD)a1, a2);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v13,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
    if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v13) )
    {
      UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v12, a1);
      if ( v12[0] )
        KerningPairs = GrepGetKerningPairs((struct UDCOBJ *)v12, v4, v7, 0xFu);
      UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v12);
    }
    if ( a3 )
    {
      v9 = 0;
      if ( KerningPairs <= v4 )
        v9 = KerningPairs;
      KerningPairs = v9;
      if ( v9 )
      {
        v10 = 8LL * v9;
        if ( (unsigned __int64)&a3[v10] > MmUserProbeAddress || &a3[v10] <= a3 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a3, v7, v10);
      }
      FreeTmpBuffer(v7);
    }
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v13);
  }
  return KerningPairs;
}

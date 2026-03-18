/*
 * XREFs of NtGdiGetCharWidthW @ 0x14025FA10
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x1400BB3D8 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetCharWidthW@@YAHAEAVUDCOBJ@@IIPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1400BFD00 (-GrepGetCharWidthW@@YAHAEAVUDCOBJ@@IIPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z.c)
 *     PALLOCNOZ @ 0x140125A4C (PALLOCNOZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14031D3AC (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtGdiGetCharWidthW(HDC a1, __int64 a2, unsigned int a3, const void *a4, char a5, char *a6)
{
  __int64 v7; // rbx
  unsigned int CharWidthW; // edi
  float *v10; // rsi
  _WORD *v11; // r15
  int v12; // r14d
  ULONG64 v14; // rcx
  __int64 SessionState; // rax
  size_t v16; // r8
  _BYTE v17[56]; // [rsp+58h] [rbp-C0h] BYREF
  _QWORD v18[17]; // [rsp+90h] [rbp-88h] BYREF
  unsigned int v19; // [rsp+128h] [rbp+10h]

  v19 = a2;
  v7 = a3;
  CharWidthW = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  if ( !a3 )
    return 0LL;
  if ( a4 )
  {
    v12 = 1;
    if ( a3 <= 0x1388000 )
      v11 = (_WORD *)PALLOCNOZ(2 * a3, 1886221383LL);
  }
  if ( !v12 || v11 )
  {
    if ( (unsigned int)v7 <= 0x9C4000 )
      v10 = (float *)AllocFreeTmpBuffer((unsigned int)(4 * v7));
    if ( v10 )
    {
      if ( v12 )
      {
        v14 = (ULONG64)a4 + 2 * v7;
        if ( v14 < (unsigned __int64)a4 || v14 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v11, a4, 2 * v7);
      }
      SessionState = W32GetSessionState((_DWORD)a1, a2);
      EUDCCountRegion::EUDCCountRegion(
        (EUDCCountRegion *)v17,
        (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
      if ( !EUDCCountRegion::IsReady((EUDCCountRegion *)v17) )
      {
        EngSetLastError(0x15u);
LABEL_18:
        EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v17);
        return 0LL;
      }
      UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v18, a1);
      if ( !v18[0] )
      {
        EngSetLastError(6u);
        UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v18);
        goto LABEL_18;
      }
      CharWidthW = GrepGetCharWidthW((struct UDCOBJ *)v18, v19, v7, v11, a5, v10);
      UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v18);
      EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v17);
      if ( CharWidthW )
      {
        v16 = 4LL * (unsigned int)v7;
        if ( (unsigned __int64)&a6[v16] > MmUserProbeAddress || &a6[v16] <= a6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v10, v16);
      }
      FreeTmpBuffer(v10);
    }
    if ( v12 )
      Win32FreePool(v11);
  }
  return CharWidthW;
}

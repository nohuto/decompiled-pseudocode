/*
 * XREFs of NtGdiGetStringBitmapW @ 0x140259660
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x1400BB3D8 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?GrepGetStringBitmapW@@YAIAEAVUDCOBJ@@PEAGIPEAUSTRINGBITMAP@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x14026D754 (-GrepGetStringBitmapW@@YAIAEAVUDCOBJ@@PEAGIPEAUSTRINGBITMAP@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14031D3AC (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 */

__int64 __fastcall NtGdiGetStringBitmapW(HDC a1, const void *a2, int a3, unsigned int a4, void *a5)
{
  const void *v8; // rsi
  unsigned int StringBitmapW; // edi
  __int64 v11; // rdx
  int v12; // ecx
  __int64 SessionState; // rax
  __int64 v14; // r8
  _QWORD v15[10]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v16[104]; // [rsp+90h] [rbp-68h] BYREF
  __int16 v17; // [rsp+110h] [rbp+18h] BYREF
  unsigned int v18; // [rsp+118h] [rbp+20h]

  v18 = a4;
  v17 = 0;
  v8 = 0LL;
  StringBitmapW = 1;
  if ( a3 != 1 )
    return 0LL;
  if ( a4 )
  {
    if ( a4 > 0x2710000 || (v8 = (const void *)AllocFreeTmpBuffer(a4)) == 0LL )
      StringBitmapW = 0;
  }
  if ( !StringBitmapW )
    goto LABEL_18;
  GreProbeAndReadFromUntrustedVa(&v17, 2uLL, a2, 2uLL, 1uLL);
  SessionState = W32GetSessionState(v12, v11);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v16,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
  if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v16) )
  {
    UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v15, a1);
    if ( v15[0] )
    {
      StringBitmapW = GrepGetStringBitmapW(v15, &v17, v14, v8, a4);
    }
    else
    {
      EngSetLastError(6u);
      StringBitmapW = 0;
    }
    UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v15);
  }
  else
  {
    EngSetLastError(0x15u);
    StringBitmapW = 0;
  }
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v16);
  if ( !StringBitmapW || StringBitmapW > a4 )
    goto LABEL_18;
  if ( v8 )
  {
    GreProbeAndWriteToUntrustedVa(a5, StringBitmapW, v8, StringBitmapW, 1uLL);
LABEL_18:
    if ( v8 )
      FreeTmpBuffer(v8);
  }
  return StringBitmapW;
}

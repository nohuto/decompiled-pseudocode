/*
 * XREFs of NtGdiGetWidthTable @ 0x14025B180
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DB50 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x1400BB3D8 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVUDCOBJ@@@Z @ 0x1400C0090 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVUDCOBJ@@@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVUDCOBJ@@KPEAGK1@Z @ 0x14025998C (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVUDCOBJ@@KPEAGK1@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14031D3AC (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetWidthTable(
        HDC a1,
        unsigned int a2,
        const void *a3,
        unsigned int a4,
        void *a5,
        void *a6,
        void *a7)
{
  __int64 v7; // rsi
  unsigned int WidthTable; // edi
  __int64 v11; // rdx
  int v12; // ecx
  unsigned __int16 *v13; // rbx
  unsigned __int16 *v14; // r14
  __int64 SessionState; // rax
  int v16; // ecx
  int v17; // edx
  unsigned __int16 v18; // dx
  __int64 v19; // rcx
  unsigned __int16 *v20; // rdi
  _DWORD *v22; // [rsp+30h] [rbp-118h] BYREF
  int v23; // [rsp+38h] [rbp-110h] BYREF
  _DWORD v24[2]; // [rsp+40h] [rbp-108h] BYREF
  unsigned __int16 *v25; // [rsp+48h] [rbp-100h]
  void *v26; // [rsp+50h] [rbp-F8h]
  void *v27; // [rsp+58h] [rbp-F0h]
  unsigned __int16 *v28; // [rsp+60h] [rbp-E8h]
  void *v29; // [rsp+68h] [rbp-E0h]
  _QWORD v30[10]; // [rsp+70h] [rbp-D8h] BYREF
  _BYTE v31[56]; // [rsp+C0h] [rbp-88h] BYREF
  __int128 v32; // [rsp+F8h] [rbp-50h] BYREF

  v7 = a4;
  LODWORD(v22) = a2;
  v26 = a5;
  v29 = a6;
  v27 = a7;
  WidthTable = -1;
  v24[0] = -1;
  UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v30, a1);
  if ( !(_DWORD)v7 || !v30[0] )
    goto LABEL_29;
  v32 = 0LL;
  v23 = 0;
  v13 = 0LL;
  v25 = 0LL;
  v14 = 0LL;
  if ( (unsigned int)v7 <= 0x9C4000 )
  {
    v13 = (unsigned __int16 *)AllocFreeTmpBuffer((unsigned int)(4 * v7));
    v25 = v13;
  }
  if ( v13 )
  {
    v14 = &v13[v7];
    v28 = v14;
    GreProbeAndReadFromUntrustedVa(v14, 2 * v7, a3, 2 * v7, 2uLL);
  }
  else
  {
    LODWORD(v7) = 0;
  }
  if ( (_DWORD)v7 )
  {
    SessionState = W32GetSessionState(v12, v11);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v31,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
    if ( !EUDCCountRegion::IsReady((EUDCCountRegion *)v31) )
    {
LABEL_22:
      EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v31);
      goto LABEL_23;
    }
    v16 = *(unsigned __int16 *)(v30[0] + 12LL);
    v24[0] = 2;
    v24[1] = v16;
    v22 = 0LL;
    RFONTOBJ::vInit((RFONTOBJ *)&v22, (struct UDCOBJ *)v30, 0, 2u, (const struct RFONTOBJ::Tag *)v24);
    if ( v22 )
    {
      v23 = v22[181];
      if ( v22[84] < 0xFFFu )
      {
        v17 = v22[76];
        if ( v17 )
        {
          v18 = 16 * v17;
          v19 = (unsigned int)v7;
          v20 = v13;
          while ( v19 )
          {
            *v20++ = v18;
            --v19;
          }
          WidthTable = 1;
LABEL_19:
          if ( !(unsigned int)RFONTOBJ::bGetWidthData((RFONTOBJ *)&v22, (struct _WIDTHDATA *)&v32, (struct UDCOBJ *)v30) )
            WidthTable = -1;
          goto LABEL_21;
        }
        WidthTable = RFONTOBJ::bGetWidthTable((RFONTOBJ *)&v22, (struct UDCOBJ *)v30, a2, v14, v7, v13);
        if ( WidthTable != -1 )
          goto LABEL_19;
      }
    }
LABEL_21:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v22);
    goto LABEL_22;
  }
LABEL_23:
  if ( WidthTable != -1 )
  {
    GreProbeAndWriteToUntrustedVa(v26, 2LL * (unsigned int)v7, v13, 2LL * (unsigned int)v7, 2uLL);
    if ( a6 )
      GreProbeAndWriteToUntrustedVa(a6, 0x10uLL, &v32, 0x10uLL, 0x10uLL);
    GreProbeAndWriteToUntrustedVa(v27, 4uLL, &v23, 4uLL, 1uLL);
  }
  if ( v13 )
    FreeTmpBuffer(v13);
LABEL_29:
  UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v30);
  return WidthTable;
}

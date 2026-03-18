/*
 * XREFs of ?GreGetFontUnicodeRanges@@YAKPEAUHDC__@@PEAUtagGLYPHSET@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C028D43C
 * Callers:
 *     NtGdiGetFontUnicodeRanges @ 0x1C02C2A10 (NtGdiGetFontUnicodeRanges.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00C8860 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C00CA424 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C00CA528 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010D900 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetFontUnicodeRanges(HDC a1, unsigned int *a2)
{
  unsigned int v3; // edi
  int v4; // eax
  struct _FD_GLYPHSET *v5; // rax
  struct _FD_GLYPHSET *v6; // r8
  ULONG cRuns; // eax
  int v9; // eax
  __int64 v10; // r9
  __int64 *v11; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v13[40]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v14; // [rsp+98h] [rbp+28h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  if ( v12[0] )
  {
    v4 = *(unsigned __int16 *)(v12[0] + 12LL);
    v14 = 0LL;
    HIDWORD(v11) = v4;
    LODWORD(v11) = 13;
    if ( (unsigned int)RFONTOBJ::bInit(
                         (RFONTOBJ *)&v14,
                         (struct XDCOBJ *)v12,
                         0,
                         2u,
                         (const struct RFONTOBJ::Tag *)&v11) )
      GreAcquireSemaphore(*(_QWORD *)(v14 + 504));
    if ( v14 )
    {
      v11 = *(__int64 **)(v14 + 120);
      v5 = PFEOBJ::pfdg((PFEOBJ *)&v11);
      v6 = v5;
      if ( !v5 )
      {
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v14);
        DCOBJ::~DCOBJ((DCOBJ *)v12);
        return 0LL;
      }
      v3 = 4 * v5->cRuns + 16;
      if ( a2 )
      {
        if ( *a2 == v3 )
        {
          *a2 = v3;
          a2[2] = v5->cGlyphsSupported;
          cRuns = v5->cRuns;
          a2[1] = 0;
          a2[3] = cRuns;
          v9 = a2[1];
          if ( (v6->flAccel & 2) != 0 )
            v9 = 1;
          v10 = 0LL;
          for ( a2[1] = v9; (unsigned int)v10 < v6->cRuns; v10 = (unsigned int)(v10 + 1) )
          {
            LOWORD(a2[v10 + 4]) = v6->awcrun[(unsigned int)v10].wcLow;
            HIWORD(a2[v10 + 4]) = v6->awcrun[(unsigned int)v10].cGlyphs;
          }
        }
        else
        {
          v3 = 0;
        }
      }
      PFEOBJ::vFreepfdg(&v11);
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v14);
    if ( v12[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v12);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v13);
  return v3;
}

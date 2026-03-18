/*
 * XREFs of ?GreGetTextExtentExW@@YAHPEAUHDC__@@PEAGKKPEAK2PEAUtagSIZE@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x1C00C69A4
 * Callers:
 *     NtGdiGetTextExtentExW @ 0x1C00C6630 (NtGdiGetTextExtentExW.c)
 *     ?GreGetCharacterPlacementW@@YAKPEAUHDC__@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x1C02D67C0 (-GreGetCharacterPlacementW@@YAKPEAUHDC__@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0076170 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C00C4BD8 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1C00C6C8C (-bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00C8860 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C00CA24C (--1ESTROBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010D900 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C010EC40 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetTextExtentExW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        int *a6,
        struct tagSIZE *a7,
        char a8,
        int a9)
{
  unsigned int v9; // r15d
  int *v10; // rbx
  int *v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v17; // [rsp+98h] [rbp-78h]
  _DWORD v18[2]; // [rsp+A0h] [rbp-70h] BYREF
  _QWORD v19[2]; // [rsp+A8h] [rbp-68h] BYREF
  char v20[32]; // [rsp+B8h] [rbp-58h] BYREF
  _BYTE v21[24]; // [rsp+D8h] [rbp-38h] BYREF
  _BYTE v22[320]; // [rsp+F0h] [rbp-20h] BYREF
  char v23; // [rsp+230h] [rbp+120h] BYREF

  v9 = 0;
  v10 = a6;
  v17 = a4;
  if ( (a2 || !a3) && a7 )
  {
    if ( a3 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v19, a1);
      if ( v19[0] )
      {
        v18[0] = a9;
        v18[1] = *(unsigned __int16 *)(v19[0] + 12LL);
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v21, (struct XDCOBJ *)v19, 516);
        v16 = 0LL;
        if ( (unsigned int)RFONTOBJ::bInit(
                             (RFONTOBJ *)&v16,
                             (struct XDCOBJ *)v19,
                             0,
                             2 * (a8 & 1u) + 2,
                             (const struct RFONTOBJ::Tag *)v18) )
          GreAcquireSemaphore(*(_QWORD *)(v16 + 504));
        if ( v16 )
        {
          if ( (*(_DWORD *)(v16 + 84) & 4) != 0 )
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v16, a2, a3);
          v14 = 0LL;
          if ( !a6 && a5 )
          {
            if ( a3 > 0x28 )
            {
              if ( !(4 * a3) || (v14 = (int *)Win32AllocPoolZInit(4 * a3, 1954051143LL)) == 0LL )
                EngSetLastError(8u);
              v10 = v14;
            }
            else
            {
              v10 = (int *)&v23;
            }
          }
          ESTROBJ::vInit(
            (ESTROBJ *)v22,
            a2,
            a3,
            (struct XDCOBJ *)v19,
            (struct RFONTOBJ *)&v16,
            (struct EXFORMOBJ *)v21,
            0LL,
            0,
            *(_DWORD *)(v19[0] + 1756LL),
            *(_DWORD *)(*(_QWORD *)(v19[0] + 976LL) + 280LL),
            *(_DWORD *)(*(_QWORD *)(v19[0] + 976LL) + 284LL),
            *(_DWORD *)(*(_QWORD *)(v19[0] + 976LL) + 288LL),
            0,
            0,
            0,
            v10,
            0LL,
            0);
          if ( (v22[232] & 4) != 0 && (unsigned int)ESTROBJ::bTextExtent((ESTROBJ *)v22, (struct RFONTOBJ *)&v16, 0, a7) )
          {
            if ( a5 && v10 )
            {
              v15 = 0;
              do
              {
                if ( *v10 > v17 )
                  break;
                ++v15;
                ++v10;
              }
              while ( v15 < a3 );
              *a5 = v15;
            }
            v9 = 1;
          }
          if ( v14 )
            Win32FreePool(v14);
          ESTROBJ::~ESTROBJ((ESTROBJ *)v22);
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
      }
      else
      {
        EngSetLastError(6u);
      }
      if ( v19[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v19);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v20);
      return v9;
    }
    else
    {
      if ( a5 )
        *a5 = 0;
      return 1LL;
    }
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}

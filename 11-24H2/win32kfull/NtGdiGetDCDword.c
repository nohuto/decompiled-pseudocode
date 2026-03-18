/*
 * XREFs of NtGdiGetDCDword @ 0x14001A2D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVUDCOBJ@@@Z @ 0x1400BFB58 (-dwGetFontLanguageInfo@@YAKAEAVUDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiGetDCDword(HDC a1, int a2, _DWORD *a3)
{
  unsigned int v5; // esi
  int FontLanguageInfo; // ebx
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  char v15; // al
  _QWORD v16[14]; // [rsp+20h] [rbp-78h] BYREF

  v5 = 1;
  FontLanguageInfo = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v16, a1);
  if ( v16[0] )
  {
    if ( a2 )
    {
      v7 = a2 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              v11 = v10 - 1;
              if ( v11 )
              {
                v12 = v11 - 1;
                if ( v12 )
                {
                  v13 = v12 - 1;
                  if ( v13 )
                  {
                    if ( v13 == 1 )
                      FontLanguageInfo = *(_DWORD *)(*(_QWORD *)(v16[0] + 976LL) + 104LL);
                    else
                      v5 = 0;
                  }
                  else
                  {
                    LOBYTE(FontLanguageInfo) = *(_DWORD *)(v16[0] + 32LL) == 1;
                  }
                }
                else
                {
                  FontLanguageInfo = dwGetFontLanguageInfo((struct UDCOBJ *)v16);
                }
              }
              else
              {
                FontLanguageInfo = *(_DWORD *)(v16[0] + 104LL);
              }
            }
            else
            {
              v15 = *(_DWORD *)(v16[0] + 248LL) & 4;
              if ( (*(_DWORD *)(*(_QWORD *)(v16[0] + 976LL) + 108LL) & 1) != 0 )
                FontLanguageInfo = 2 - (v15 != 0);
              else
                FontLanguageInfo = (v15 != 0) + 1;
            }
          }
          else
          {
            FontLanguageInfo = *(_DWORD *)(*(_QWORD *)(v16[0] + 976LL) + 288LL);
          }
        }
        else
        {
          FontLanguageInfo = *(_DWORD *)(*(_QWORD *)(v16[0] + 976LL) + 284LL);
        }
      }
      else
      {
        FontLanguageInfo = *(_DWORD *)(*(_QWORD *)(v16[0] + 976LL) + 352LL);
      }
    }
    else
    {
      FontLanguageInfo = ((*(_DWORD *)(v16[0] + 72LL) >> 13) & 1) == 0;
    }
    if ( v5 )
    {
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_DWORD *)MmUserProbeAddress;
      *a3 = FontLanguageInfo;
    }
  }
  else
  {
    v5 = 0;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v16);
  return v5;
}

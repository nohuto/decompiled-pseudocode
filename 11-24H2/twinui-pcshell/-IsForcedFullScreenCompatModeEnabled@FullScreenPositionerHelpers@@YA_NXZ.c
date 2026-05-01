/*
 * XREFs of ?IsForcedFullScreenCompatModeEnabled@FullScreenPositionerHelpers@@YA_NXZ @ 0x1800707D4
 * Callers:
 *     ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1800704E8 (-IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FullScreenPositionerHelpers::IsForcedFullScreenCompatModeEnabled(FullScreenPositionerHelpers *this)
{
  int v1; // edx
  LSTATUS ValueW; // eax
  int v4; // ecx
  int v5; // edx
  bool v6; // sf
  bool v7; // zf
  DWORD pdwType; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF
  int pvData; // [rsp+60h] [rbp+18h] BYREF

  v1 = dword_1808CA2A0;
  if ( !dword_1808CA2A0 )
  {
    pdwType = 0;
    pcbData = 4;
    ValueW = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\FullScreen",
               L"IsForcedCompatModeEnabled",
               0x10000012u,
               &pdwType,
               &pvData,
               &pcbData);
    v4 = ValueW;
    if ( ValueW )
    {
      v5 = 1;
      if ( ValueW == 234 )
      {
LABEL_6:
        v6 = 1;
LABEL_7:
        if ( v6 )
        {
          v1 = dword_1808CA2A0;
        }
        else
        {
          v1 = v5 + 1;
          dword_1808CA2A0 = v1;
        }
        return v1 == 1;
      }
LABEL_5:
      v6 = v4 < 0;
      if ( v4 <= 0 )
        goto LABEL_7;
      goto LABEL_6;
    }
    v4 = 13;
    if ( pdwType == 4 )
    {
      if ( pvData )
      {
        v5 = 1;
        if ( pvData != 1 )
          goto LABEL_5;
      }
      v4 = 0;
      v5 = 0;
      v7 = pvData == 1;
    }
    else
    {
      v5 = 1;
      if ( pcbData != 4 )
        goto LABEL_5;
      if ( (_WORD)pvData != 48 )
      {
        v5 = 1;
        if ( (_WORD)pvData != 49 )
          goto LABEL_5;
      }
      v4 = 0;
      v5 = 0;
      v7 = (_WORD)pvData == 49;
    }
    LOBYTE(v5) = !v7;
    goto LABEL_5;
  }
  return v1 == 1;
}

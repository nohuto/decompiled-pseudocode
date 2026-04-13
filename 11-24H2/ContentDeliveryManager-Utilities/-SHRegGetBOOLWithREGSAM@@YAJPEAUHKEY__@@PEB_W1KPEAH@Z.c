/*
 * XREFs of ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEB_W1KPEAH@Z @ 0x1800A32F0
 * Callers:
 *     ?NotifyForDesktopSpotlightUpdates@SetDesktopWallpaperService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800A2F2C (-NotifyForDesktopSpotlightUpdates@SetDesktopWallpaperService@Actions@CreativeFramework@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SHRegGetBOOLWithREGSAM(HKEY a1, const wchar_t *a2, const wchar_t *a3, unsigned int a4, int *a5)
{
  LSTATUS ValueW; // eax
  unsigned int v6; // ecx
  int v7; // ecx
  bool v8; // zf
  DWORD v10; // [rsp+50h] [rbp+8h] BYREF
  int v11; // [rsp+54h] [rbp+Ch]
  DWORD v12; // [rsp+58h] [rbp+10h] BYREF
  int v13; // [rsp+5Ch] [rbp+14h]
  unsigned int v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = a4;
  v13 = HIDWORD(a2);
  v11 = HIDWORD(a1);
  v12 = 0;
  v10 = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager",
             a3,
             0x10000012u,
             &v12,
             &v14,
             &v10);
  v6 = ValueW;
  if ( ValueW )
  {
    if ( ValueW == 234 )
    {
      LOWORD(v6) = 13;
    }
    else if ( ValueW <= 0 )
    {
      return v6;
    }
    return (unsigned __int16)v6 | 0x80070000;
  }
  LOWORD(v6) = 13;
  if ( v12 != 4 )
  {
    if ( v10 == 4 && (unsigned __int16)(v14 - 48) <= 1u )
    {
      v7 = 0;
      v8 = (_WORD)v14 == 49;
      goto LABEL_5;
    }
    return (unsigned __int16)v6 | 0x80070000;
  }
  if ( v14 > 1 )
    return (unsigned __int16)v6 | 0x80070000;
  v7 = 0;
  v8 = v14 == 1;
LABEL_5:
  LOBYTE(v7) = v8;
  *a5 = v7;
  return 0;
}

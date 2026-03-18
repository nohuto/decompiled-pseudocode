/*
 * XREFs of DxgDetermineBootImageMode @ 0x1401B246C
 * Callers:
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1403F96D0 (DpiAcquirePostDisplayInfoFromBgfx.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z @ 0x1401D835C (-ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z.c)
 *     ?DxgkSetBootAnimationRelayState@@YAEW4_CDD_BOOT_ANIMATION_RELAY_STATE@@@Z @ 0x1403F5370 (-DxgkSetBootAnimationRelayState@@YAEW4_CDD_BOOT_ANIMATION_RELAY_STATE@@@Z.c)
 */

NTSTATUS __fastcall DxgDetermineBootImageMode(__int64 a1, _QWORD *a2, char a3, _BYTE *a4)
{
  __int128 v4; // xmm1
  __int128 v8; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  NTSTATUS result; // eax
  unsigned int v16; // ebx
  __int64 v17; // rax
  struct DXGGLOBAL *Global; // rax
  unsigned int v19; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v20; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING v21; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING v22; // [rsp+78h] [rbp-88h] BYREF
  _OWORD v23[2]; // [rsp+88h] [rbp-78h] BYREF
  wchar_t v24; // [rsp+A8h] [rbp-58h]
  _OWORD v25[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v26; // [rsp+D0h] [rbp-30h]
  _OWORD v27[8]; // [rsp+E0h] [rbp-20h] BYREF
  int v28; // [rsp+160h] [rbp+60h]
  WCHAR v29; // [rsp+164h] [rbp+64h]

  *(_QWORD *)&v20.Length = 8781956LL;
  v4 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v27[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v8 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v27[1] = v4;
  v19 = -1;
  v10 = *(_OWORD *)L"\\CurrentControlSet\\Control\\GraphicsDrivers";
  *(_QWORD *)&v21.Length = 2228256LL;
  v27[2] = v8;
  v11 = *(_OWORD *)L"ControlSet\\Control\\GraphicsDrivers";
  v27[3] = v10;
  v12 = *(_OWORD *)L"et\\Control\\GraphicsDrivers";
  v27[4] = v11;
  v13 = *(_OWORD *)L"ol\\GraphicsDrivers";
  v27[5] = v12;
  v27[6] = v13;
  v14 = *(_OWORD *)L"icsDrivers";
  v23[1] = *(_OWORD *)L"mageMode";
  v27[7] = v14;
  v28 = *(_DWORD *)L"rs";
  v29 = aRegistryMachin_9[66];
  v20.Buffer = (wchar_t *)v27;
  v24 = aCddbootimagemo[16];
  v21.Buffer = (wchar_t *)v23;
  v23[0] = *(_OWORD *)L"CddBootImageMode";
  result = ReadRegistryDwordKeyValue(&v20, &v21, &v19);
  if ( result >= 0 )
  {
    v16 = v19;
  }
  else
  {
    v26 = *(_DWORD *)L"e";
    v22.Buffer = (wchar_t *)v25;
    *(_QWORD *)&v22.Length = 2359330LL;
    v25[0] = *(_OWORD *)L"CddBootScreenMode";
    v25[1] = *(_OWORD *)L"creenMode";
    result = ReadRegistryDwordKeyValue(&v20, &v22, &v19);
    v16 = v19;
    if ( result < 0 )
      v16 = -1;
    v19 = v16;
  }
  if ( v16 )
  {
    if ( v16 != 1 )
    {
      switch ( v16 )
      {
        case 2u:
          result = WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 5268;
          break;
        case 3u:
          *((_DWORD *)DXGGLOBAL::GetGlobal() + 360) = 3;
          return DxgkSetBootAnimationRelayState(1LL);
        case 0xFFFFFFFF:
          break;
        default:
          result = WdLogSingleEntry1(3LL, v16);
          WdLogGlobalForLineNumber = 5334;
          return result;
      }
    }
    if ( a3 )
    {
      *((_DWORD *)DXGGLOBAL::GetGlobal() + 360) = 1;
      result = DxgkSetBootAnimationRelayState(3LL);
      if ( (_BYTE)result )
      {
LABEL_23:
        *a4 = 1;
        return result;
      }
      WdLogSingleEntry0(1LL);
      v17 = 5284LL;
    }
    else
    {
      if ( !a2 )
        return result;
      if ( ((*(_DWORD *)(a1 + 12) - 20) & 0xFFFFFFFD) != 0 )
      {
        result = WdLogSingleEntry1(3LL, *(int *)(a1 + 12));
        WdLogGlobalForLineNumber = 5297;
        return result;
      }
      Global = DXGGLOBAL::GetGlobal();
      *((_OWORD *)Global + 91) = *(_OWORD *)a1;
      *((_OWORD *)Global + 92) = *(_OWORD *)(a1 + 16);
      *((_QWORD *)DXGGLOBAL::GetGlobal() + 181) = *a2;
      *((_QWORD *)DXGGLOBAL::GetGlobal() + 195) = a2[2];
      *((_DWORD *)DXGGLOBAL::GetGlobal() + 360) = 1;
      result = DxgkSetBootAnimationRelayState(1LL);
      if ( (_BYTE)result )
        goto LABEL_23;
      WdLogSingleEntry0(1LL);
      v17 = 5317LL;
    }
    WdLogGlobalForLineNumber = v17;
    result = DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"bRet", v17, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_23;
  }
  return result;
}

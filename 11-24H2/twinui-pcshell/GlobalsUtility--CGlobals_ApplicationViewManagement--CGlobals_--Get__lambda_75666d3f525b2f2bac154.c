/*
 * XREFs of GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_75666d3f525b2f2bac154c43ea5df633___ @ 0x18002AEE0
 * Callers:
 *     ?InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z @ 0x18002A818 (-InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B030 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18002B1E4 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802A9AEC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??$CloakTypeChange@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@ApplicationViewTraceLogging@ApplicationViewManagement@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x18030F434 (--$CloakTypeChange@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@.c)
 */

void __fastcall GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_75666d3f525b2f2bac154c43ea5df633___(
        __int64 a1)
{
  __int64 v2; // rbx
  HKEY v3; // rcx
  const WCHAR **v4; // rsi
  const WCHAR *v5; // rdx
  unsigned int ValueW; // eax
  __int64 v7; // r9
  const char *v8; // r8
  __int64 v9; // rdx
  int *v10; // rdx
  unsigned int v11; // [rsp+20h] [rbp-38h]
  _DWORD pvData[2]; // [rsp+40h] [rbp-18h] BYREF
  int v13; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 pcbData; // [rsp+68h] [rbp+10h] BYREF

  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&pcbData);
  v2 = pcbData;
  if ( pcbData )
  {
    v13 = 0;
    v3 = *(HKEY *)(pcbData + 40);
    v4 = *(const WCHAR ***)a1;
    if ( !v3 )
    {
      v7 = 2150040151LL;
      v8 = "pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp";
      v9 = 113LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(retaddr, (void *)v9, (int)v8, (const char *)v7);
      goto LABEL_6;
    }
    v5 = *v4;
    LODWORD(pcbData) = 12;
    ValueW = RegGetValueW(v3, v5, L"CloakType", 8u, 0LL, pvData, (LPDWORD)&pcbData);
    if ( ValueW == 2 )
      goto LABEL_6;
    if ( ValueW )
    {
      if ( (int)wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)0x7F,
                  (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
                  (const char *)ValueW,
                  v11) < 0 )
        goto LABEL_6;
    }
    else if ( (_DWORD)pcbData != 12 )
    {
      v8 = "pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp";
      v9 = 129LL;
LABEL_16:
      v7 = 2147942413LL;
      goto LABEL_17;
    }
    if ( pvData[0] == 4 )
    {
      if ( pvData[1] == 1129590832 )
      {
        v10 = (int *)(*(_QWORD *)(a1 + 8) + 264LL);
        *v10 = v13 & 3;
        ApplicationViewManagement::ApplicationViewTraceLogging::CloakTypeChange<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,enum APPLICATION_VIEW_CLOAK_TYPE &>(
          v4,
          v10);
LABEL_6:
        if ( v2 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v2);
        return;
      }
      v9 = 62LL;
    }
    else
    {
      v9 = 61LL;
    }
    v8 = "pcshell\\twinui\\appviewmanager\\lib\\Persistence.h";
    goto LABEL_16;
  }
}

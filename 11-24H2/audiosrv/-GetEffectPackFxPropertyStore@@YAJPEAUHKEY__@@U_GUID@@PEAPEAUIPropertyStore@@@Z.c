/*
 * XREFs of ?GetEffectPackFxPropertyStore@@YAJPEAUHKEY__@@U_GUID@@PEAPEAUIPropertyStore@@@Z @ 0x18012D50C
 * Callers:
 *     ?CreateGlobalEffectPackConfiguration@EffectPackConfiguration@@SAJU_GUID@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x180144864 (-CreateGlobalEffectPackConfiguration@EffectPackConfiguration@@SAJU_GUID@@AEAV-$shared_ptr@$$CBUE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180043E20 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800A206C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800B6890 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 */

__int64 __fastcall GetEffectPackFxPropertyStore(HKEY hKey, struct _GUID *a2, struct IPropertyStore **a3)
{
  int v3; // eax
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // eax
  HKEY v9; // rcx
  int RegistryPropertyStore2; // eax
  int phkResult; // [rsp+20h] [rbp-298h]
  int Data3; // [rsp+28h] [rbp-290h]
  int v14; // [rsp+30h] [rbp-288h]
  int v15; // [rsp+38h] [rbp-280h]
  int v16; // [rsp+40h] [rbp-278h]
  int v17; // [rsp+48h] [rbp-270h]
  int v18; // [rsp+50h] [rbp-268h]
  int v19; // [rsp+58h] [rbp-260h]
  int v20; // [rsp+60h] [rbp-258h]
  int v21; // [rsp+68h] [rbp-250h]
  HKEY v22[2]; // [rsp+70h] [rbp-248h] BYREF
  WCHAR SubKey[256]; // [rsp+80h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+0h]

  v3 = a2->Data4[7];
  *a3 = 0LL;
  v21 = v3;
  v20 = a2->Data4[6];
  v19 = a2->Data4[5];
  v18 = a2->Data4[4];
  v17 = a2->Data4[3];
  v16 = a2->Data4[2];
  v15 = a2->Data4[1];
  v14 = a2->Data4[0];
  Data3 = a2->Data3;
  phkResult = a2->Data2;
  v6 = StringCchPrintfW(
         SubKey,
         256LL,
         L"EffectPackRegistration\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\FxProperties",
         a2->Data1,
         phkResult,
         Data3,
         v14,
         v15,
         v16,
         v17,
         v18,
         v19,
         v20,
         v21);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v22[0] = 0LL;
    v8 = RegOpenKeyExW(hKey, SubKey, 0, 0x20019u, v22);
    if ( v8 )
    {
      v7 = wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x46,
             (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp",
             (const char *)v8);
    }
    else
    {
      v9 = v22[0];
      v22[0] = 0LL;
      RegistryPropertyStore2 = MMDeviceCreateRegistryPropertyStore2(v9, a3);
      v7 = RegistryPropertyStore2;
      if ( RegistryPropertyStore2 >= 0 )
        v7 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x48,
          (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp",
          (const char *)(unsigned int)RegistryPropertyStore2);
    }
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(v22);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x43,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp",
      (const char *)(unsigned int)v6);
  }
  return v7;
}

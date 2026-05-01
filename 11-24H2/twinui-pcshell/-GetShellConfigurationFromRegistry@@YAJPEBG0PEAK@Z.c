/*
 * XREFs of ?GetShellConfigurationFromRegistry@@YAJPEBG0PEAK@Z @ 0x18045EBA4
 * Callers:
 *     ?IsStartMenuSuppressedByShellConfigRegistry@@YA_NXZ @ 0x18045F440 (-IsStartMenuSuppressedByShellConfigRegistry@@YA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180065888 (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$str_printf_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBGZZ @ 0x18045C9CC (--$str_printf_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-L.c)
 */

__int64 __fastcall GetShellConfigurationFromRegistry(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        unsigned int *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int ValueW; // eax
  DWORD pcbData; // [rsp+40h] [rbp-89h] BYREF
  LPCWSTR lpSubKey; // [rsp+48h] [rbp-81h] BYREF
  _DWORD v10[35]; // [rsp+50h] [rbp-79h] BYREF
  __int16 v11; // [rsp+DCh] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v10[0] = 7274579;
  v10[1] = 7602278;
  v10[2] = 6357111;
  v10[3] = 6619250;
  v10[4] = 5046364;
  v10[5] = 6488169;
  v10[6] = 7274610;
  v10[7] = 7274611;
  v10[8] = 7602278;
  v10[9] = 5701724;
  v10[10] = 7209065;
  v10[11] = 7274596;
  v10[12] = 7536759;
  v10[13] = 5111840;
  v10[14] = 6029396;
  v10[15] = 7667779;
  v10[16] = 7471218;
  v10[17] = 7209061;
  v10[18] = 5636212;
  v10[19] = 7471205;
  v10[20] = 6881395;
  v10[21] = 7209071;
  v10[22] = 5701724;
  v10[23] = 7209065;
  v10[24] = 7274604;
  v10[25] = 7274599;
  v10[26] = 6029422;
  v10[27] = 6815827;
  v10[28] = 7077989;
  v10[29] = 5242988;
  v10[30] = 7274610;
  v10[31] = 7471207;
  v10[32] = 7143521;
  v10[33] = 6029427;
  v10[34] = 7536677;
  v11 = 0;
  pcbData = 4;
  lpSubKey = 0LL;
  v4 = wil::str_printf_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
         (__int64)&lpSubKey,
         (__int64)v10,
         a1);
  v5 = v4;
  if ( v4 >= 0 )
  {
    ValueW = RegGetValueW(HKEY_LOCAL_MACHINE, lpSubKey, L"SuppressStartMenu", 0x10u, 0LL, a3, &pcbData);
    if ( ValueW )
    {
      if ( ValueW > 0 )
        ValueW = (unsigned __int16)ValueW | 0x80070000;
      v5 = ValueW;
    }
    else
    {
      v5 = 0;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE5,
      (int)"onecoreuap\\internal\\shell\\inc\\ShellProgramConfiguration.h",
      (const char *)(unsigned int)v4);
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&lpSubKey);
  return v5;
}

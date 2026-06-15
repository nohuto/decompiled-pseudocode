/*
 * XREFs of ?GetEffectPackRegistryPath@@YAJU_GUID@@_KPEAG@Z @ 0x18012D84C
 * Callers:
 *     ?DeleteRegistryEntry@EffectPackConfigurationManager@@CAXU_GUID@@@Z @ 0x1800FBC48 (-DeleteRegistryEntry@EffectPackConfigurationManager@@CAXU_GUID@@@Z.c)
 *     ?GetEffectPackDevNodeId@@YAJU_GUID@@PEAPEAG@Z @ 0x18012D2C8 (-GetEffectPackDevNodeId@@YAJU_GUID@@PEAPEAG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180043E20 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

__int64 __fastcall GetEffectPackRegistryPath(struct _GUID *a1, __int64 a2, unsigned __int16 *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int Data1; // [rsp+20h] [rbp-78h]
  int Data2; // [rsp+28h] [rbp-70h]
  int Data3; // [rsp+30h] [rbp-68h]
  int v9; // [rsp+38h] [rbp-60h]
  int v10; // [rsp+40h] [rbp-58h]
  int v11; // [rsp+48h] [rbp-50h]
  int v12; // [rsp+50h] [rbp-48h]
  int v13; // [rsp+58h] [rbp-40h]
  int v14; // [rsp+60h] [rbp-38h]
  int v15; // [rsp+68h] [rbp-30h]
  int v16; // [rsp+70h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v16 = a1->Data4[7];
  v15 = a1->Data4[6];
  v14 = a1->Data4[5];
  v13 = a1->Data4[4];
  v12 = a1->Data4[3];
  v11 = a1->Data4[2];
  v10 = a1->Data4[1];
  v9 = a1->Data4[0];
  Data3 = a1->Data3;
  Data2 = a1->Data2;
  Data1 = a1->Data1;
  v3 = StringCchPrintfW(
         a3,
         260LL,
         L"%s\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\MMDevices\\EffectsPacks",
         Data1,
         Data2,
         Data3,
         v9,
         v10,
         v11,
         v12,
         v13,
         v14,
         v15,
         v16);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD,
    (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}

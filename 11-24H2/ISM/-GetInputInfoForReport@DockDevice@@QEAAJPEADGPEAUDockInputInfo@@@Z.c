/*
 * XREFs of ?GetInputInfoForReport@DockDevice@@QEAAJPEADGPEAUDockInputInfo@@@Z @ 0x1800E0BD0
 * Callers:
 *     ?OnInputReport@DockDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800DD8C0 (-OnInputReport@DockDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009BD18 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800DF2DC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall DockDevice::GetInputInfoForReport(
        DockDevice *this,
        char *a2,
        unsigned __int16 a3,
        LARGE_INTEGER *a4)
{
  ULONG ReportLength; // edi
  char v8; // r12
  __int64 v9; // r13
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r15
  NTSTATUS UsageValueArray; // eax
  __int64 v12; // rdx
  LARGE_INTEGER v14; // rax
  bool v15; // cc
  CHAR *v16; // rcx
  signed int v17; // edx
  CHAR *v18; // rcx
  signed int v19; // edx
  signed int v20; // edx
  CHAR *v21; // rcx
  LONG v22; // eax
  CHAR *v23; // rcx
  signed int v24; // edx
  signed int v25; // eax
  ULONG v26; // eax
  const char *v27; // rax
  __int64 v28; // rdx
  const char *UsageValueByteLength; // [rsp+28h] [rbp-48h]
  ULONG UsageLength; // [rsp+50h] [rbp-20h] BYREF
  CHAR UsageValue[8]; // [rsp+58h] [rbp-18h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  USHORT UsageList; // [rsp+B0h] [rbp+40h] BYREF
  ULONG v35; // [rsp+C8h] [rbp+58h] BYREF

  a4->HighPart = *((_DWORD *)this + 10);
  a4->LowPart = 0x100000;
  a4[3].LowPart = 88;
  ReportLength = a3;
  v8 = 0;
  a4[1].LowPart = GetTickCount();
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  a4[2] = PerformanceCount;
  a4[4].LowPart = a4->HighPart;
  v9 = *((_QWORD *)this + 4);
  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 6);
  v35 = 0;
  if ( *(_BYTE *)(v9 + 1662) )
  {
    *(_QWORD *)UsageValue = 0LL;
    UsageValueArray = HidP_GetUsageValueArray(HidP_Input, 1u, 0, 0xD0u, UsageValue, 8u, PreparsedData, a2, ReportLength);
    if ( UsageValueArray < 0 )
    {
      v12 = 201LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v12,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
               (const char *)(unsigned int)UsageValueArray);
    }
    v14 = *(LARGE_INTEGER *)UsageValue;
  }
  else
  {
    UsageValueArray = HidP_GetUsageValue(HidP_Input, 1u, 0, 0xD0u, &v35, PreparsedData, a2, ReportLength);
    if ( UsageValueArray < 0 )
    {
      v12 = 215LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v12,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
               (const char *)(unsigned int)UsageValueArray);
    }
    v14.QuadPart = v35;
  }
  a4[5] = v14;
  UsageValueArray = HidP_GetUsageValue(HidP_Input, 1u, 0, 0xD1u, &v35, PreparsedData, a2, ReportLength);
  if ( UsageValueArray < 0 )
  {
    v12 = 228LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v12,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
             (const char *)(unsigned int)UsageValueArray);
  }
  LOWORD(a4[6].LowPart) = v35;
  UsageList = 0;
  UsageLength = 1;
  UsageValueArray = HidP_GetUsages(HidP_Input, 1u, 0, &UsageList, &UsageLength, PreparsedData, a2, ReportLength);
  if ( UsageValueArray < 0 )
  {
    v12 = 242LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v12,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
             (const char *)(unsigned int)UsageValueArray);
  }
  LOBYTE(a4[8].LowPart) = UsageList == 212;
  if ( *(_BYTE *)(v9 + 1663) )
  {
    UsageValueArray = HidP_GetUsageValue(
                        HidP_Input,
                        1u,
                        *(_WORD *)(v9 + 1664),
                        0x30u,
                        &v35,
                        PreparsedData,
                        a2,
                        ReportLength);
    if ( UsageValueArray < 0 )
    {
      v12 = 258LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v12,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
               (const char *)(unsigned int)UsageValueArray);
    }
    v15 = (int)v35 < *(_DWORD *)(v9 + 1668);
    v16 = UsageValue;
    *(_DWORD *)UsageValue = v35;
    if ( v15 )
      v16 = (CHAR *)(v9 + 1668);
    v17 = *(_DWORD *)(v9 + 1676);
    if ( v17 >= (int)v35 )
      v17 = *(_DWORD *)v16;
    a4[8].HighPart = v17;
    UsageValueArray = HidP_GetUsageValue(
                        HidP_Input,
                        1u,
                        *(_WORD *)(v9 + 1664),
                        0x31u,
                        &v35,
                        PreparsedData,
                        a2,
                        ReportLength);
    if ( UsageValueArray < 0 )
    {
      v12 = 273LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v12,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
               (const char *)(unsigned int)UsageValueArray);
    }
    v18 = UsageValue;
    v19 = *(_DWORD *)(v9 + 1680);
    if ( (signed int)v35 < *(_DWORD *)(v9 + 1672) )
      v18 = (CHAR *)(v9 + 1672);
    *(_DWORD *)UsageValue = v35;
    if ( v19 >= (int)v35 )
      v19 = *(_DWORD *)v18;
    a4[9].LowPart = v19;
    UsageValueArray = HidP_GetUsageValue(
                        HidP_Input,
                        0xDu,
                        *(_WORD *)(v9 + 1664),
                        0x48u,
                        &v35,
                        PreparsedData,
                        a2,
                        ReportLength);
    if ( UsageValueArray < 0 )
    {
      v12 = 288LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v12,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
               (const char *)(unsigned int)UsageValueArray);
    }
    v20 = v35 + a4[8].HighPart;
    v21 = UsageValue;
    v15 = v20 < *(_DWORD *)(v9 + 1668);
    *(_DWORD *)UsageValue = v20;
    if ( v15 )
      v21 = (CHAR *)(v9 + 1668);
    v22 = *(_DWORD *)(v9 + 1676);
    if ( v22 >= v20 )
      v22 = *(_DWORD *)v21;
    a4[9].HighPart = v22;
    UsageValueArray = HidP_GetUsageValue(
                        HidP_Input,
                        0xDu,
                        *(_WORD *)(v9 + 1664),
                        0x49u,
                        &v35,
                        PreparsedData,
                        a2,
                        ReportLength);
    if ( UsageValueArray < 0 )
    {
      v12 = 303LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v12,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
               (const char *)(unsigned int)UsageValueArray);
    }
    v23 = UsageValue;
    v24 = v35 + a4[9].LowPart;
    v25 = *(_DWORD *)(v9 + 1680);
    if ( v24 < *(_DWORD *)(v9 + 1672) )
      v23 = (CHAR *)(v9 + 1672);
    *(_DWORD *)UsageValue = v35 + a4[9].LowPart;
    if ( v25 >= v24 )
      v25 = *(_DWORD *)v23;
    a4[10].LowPart = v25;
    v8 = 0;
  }
  if ( HidP_GetUsageValue(HidP_Input, 1u, 0, 0xD6u, &v35, PreparsedData, a2, ReportLength) < 0
    || (v26 = v35, v8 = 1, a4[7].LowPart = v35, v26 == 1) )
  {
    if ( HidP_GetUsageValue(HidP_Input, 1u, 0, 0xD2u, &v35, PreparsedData, a2, ReportLength) >= 0 )
      WORD2(a4[7].QuadPart) = v35;
    if ( HidP_GetUsageValue(HidP_Input, 1u, 0, 0xD3u, &v35, PreparsedData, a2, ReportLength) >= 0 )
      HIWORD(a4[7].QuadPart) = v35;
  }
  if ( a4[7].LowPart == 1 )
  {
    if ( !WORD2(a4[7].QuadPart) )
    {
      v27 = "Invalid Dockable Device Primary Usage Page.";
      v28 = 363LL;
LABEL_48:
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)v28,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
        (const char *)0x80004005LL,
        (int)v27,
        UsageValueByteLength);
      return 2147500037LL;
    }
    if ( !HIWORD(a4[7].QuadPart) )
    {
      v27 = "Invalid Dockable Device Primary Usage ID.";
      v28 = 364LL;
      goto LABEL_48;
    }
  }
  if ( !v8 && WORD2(a4[7].QuadPart) )
  {
    if ( HIWORD(a4[7].QuadPart) )
      a4[7].LowPart = 1;
  }
  return 0LL;
}

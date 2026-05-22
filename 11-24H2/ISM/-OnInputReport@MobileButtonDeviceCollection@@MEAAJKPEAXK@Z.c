/*
 * XREFs of ?OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800DA910
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800274C8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180067F64 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180078518 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009BD18 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800D331C (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     ?CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800DA1DC (-CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::OnInputReport(
        MobileButtonDeviceCollection *this,
        int a2,
        PCHAR Report,
        ULONG a4)
{
  int v8; // edx
  RIMDeviceCollection *v9; // rcx
  int DeviceInfo; // ebx
  __int64 v11; // rdx
  PHIDP_PREPARSED_DATA *v13; // rcx
  struct RIMDevice *PreparsedData; // rdi
  struct _HIDP_CAPS *v15; // r14
  ULONG ReportLength; // eax
  NTSTATUS Usages; // eax
  __int128 v18; // xmm1
  ULONG v19; // eax
  unsigned __int16 *v20; // rdi
  DWORD TickCount; // ebx
  USHORT *i; // rdi
  DWORD v23; // ebx
  __int64 InputReportByteLength; // rax
  __int64 v25; // rdx
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-C0h] BYREF
  struct RIMDevice *v27; // [rsp+48h] [rbp-B8h] BYREF
  struct _HIDP_CAPS *v28; // [rsp+50h] [rbp-B0h] BYREF
  ULONG UsageLength; // [rsp+58h] [rbp-A8h] BYREF
  int v30; // [rsp+60h] [rbp-A0h] BYREF
  struct DeviceInfo *v31; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v32[24]; // [rsp+70h] [rbp-90h] BYREF
  int v33; // [rsp+88h] [rbp-78h]
  USHORT UsageList[8]; // [rsp+C30h] [rbp+B30h] BYREF
  __int128 v35; // [rsp+C40h] [rbp+B40h]
  __int64 v36; // [rsp+C50h] [rbp+B50h]
  USHORT BreakUsageList[8]; // [rsp+C58h] [rbp+B58h] BYREF
  __int128 v38; // [rsp+C68h] [rbp+B68h]
  __int64 v39; // [rsp+C78h] [rbp+B78h]
  USHORT MakeUsageList[8]; // [rsp+C80h] [rbp+B80h] BYREF
  __int128 v41; // [rsp+C90h] [rbp+B90h]
  __int64 v42; // [rsp+CA0h] [rbp+BA0h]
  wil::details::in1diag3 *retaddr; // [rsp+CE8h] [rbp+BE8h]

  v30 = a2;
  UsageLength = 20;
  v36 = 0LL;
  v42 = 0LL;
  v39 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  *(_OWORD *)UsageList = 0LL;
  v35 = 0LL;
  *(_OWORD *)MakeUsageList = 0LL;
  v41 = 0LL;
  *(_OWORD *)BreakUsageList = 0LL;
  v38 = 0LL;
  memset_0(v32, 0, 0xBC0uLL);
  v33 = 3008;
  PerformanceCount.QuadPart = 0LL;
  DeviceInfo = RIMDeviceCollection::GetDeviceInfo(this, a2, &v31);
  if ( DeviceInfo < 0 )
  {
    v11 = 207LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
      (const char *)(unsigned int)DeviceInfo);
    return (unsigned int)DeviceInfo;
  }
  DeviceInfo = RIMDeviceCollection::FindDevice(v9, v8, 0LL, &v27, 0LL);
  if ( DeviceInfo < 0 )
  {
    v11 = 211LL;
    goto LABEL_3;
  }
  v13 = (PHIDP_PREPARSED_DATA *)v27;
  PreparsedData = (struct RIMDevice *)*((_QWORD *)v27 + 6);
  v27 = PreparsedData;
  DeviceInfo = HIDDevice::GetHIDCapabilities(v13, &v28);
  if ( DeviceInfo < 0 )
  {
    v11 = 213LL;
    goto LABEL_3;
  }
  v15 = v28;
LABEL_9:
  ReportLength = v15->InputReportByteLength;
  if ( a4 < ReportLength )
    return 0LL;
  Usages = HidP_GetUsages(HidP_Input, 7u, 0, UsageList, &UsageLength, PreparsedData, Report, ReportLength);
  if ( Usages < 0 )
  {
    v25 = 241LL;
  }
  else
  {
    std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
      (__int64)this + 2760,
      (__int64)&v28,
      &v30);
    if ( v28 == *((struct _HIDP_CAPS **)this + 346) )
    {
      DeviceInfo = -2147467259;
      v11 = 247LL;
      goto LABEL_3;
    }
    v18 = *(_OWORD *)&v28->Reserved[7];
    v19 = *(_DWORD *)&v28->Reserved[11];
    if ( v19 > 0x14 )
    {
      DeviceInfo = -2147467259;
      v11 = 257LL;
      goto LABEL_3;
    }
    Usages = HidP_UsageListDifference((PUSAGE)v18, UsageList, BreakUsageList, MakeUsageList, v19);
    if ( Usages >= 0 )
    {
      v20 = BreakUsageList;
      *(_OWORD *)v18 = *(_OWORD *)UsageList;
      *(_OWORD *)(v18 + 16) = v35;
      *(_QWORD *)(v18 + 32) = v36;
      while ( *v20 )
      {
        TickCount = GetTickCount();
        QueryPerformanceCounter(&PerformanceCount);
        DeviceInfo = MobileButtonDeviceCollection::CreateButtonInfo(
                       (MobileButtonDeviceCollection *)*v20,
                       a2,
                       TickCount,
                       PerformanceCount,
                       *v20,
                       0,
                       (struct InputInfo *)v32);
        if ( DeviceInfo < 0 )
        {
          v11 = 293LL;
          goto LABEL_3;
        }
        DeviceInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                       *((_QWORD *)this + 2),
                       v32);
        if ( DeviceInfo < 0 )
        {
          v11 = 300LL;
          goto LABEL_3;
        }
        ++v20;
      }
      for ( i = MakeUsageList; ; ++i )
      {
        if ( !*i )
        {
          InputReportByteLength = v15->InputReportByteLength;
          PreparsedData = v27;
          a4 -= InputReportByteLength;
          Report += InputReportByteLength;
          goto LABEL_9;
        }
        v23 = GetTickCount();
        QueryPerformanceCounter(&PerformanceCount);
        DeviceInfo = MobileButtonDeviceCollection::CreateButtonInfo(
                       (MobileButtonDeviceCollection *)*i,
                       a2,
                       v23,
                       PerformanceCount,
                       *i,
                       1,
                       (struct InputInfo *)v32);
        if ( DeviceInfo < 0 )
          break;
        DeviceInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                       *((_QWORD *)this + 2),
                       v32);
        if ( DeviceInfo < 0 )
        {
          v11 = 331LL;
          goto LABEL_3;
        }
      }
      v11 = 324LL;
      goto LABEL_3;
    }
    v25 = 265LL;
  }
  return wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)v25,
           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
           (const char *)(unsigned int)Usages);
}

/*
 * XREFs of ?OnInputReport@CallControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800D8FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x180026F08 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180068174 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180078878 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009BB68 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??$OnButtonRelease@W4_Button@@@ButtonDeviceTelemetry@@SAX$$QEAW4_Button@@@Z @ 0x1800D8CDC (--$OnButtonRelease@W4_Button@@@ButtonDeviceTelemetry@@SAX$$QEAW4_Button@@@Z.c)
 *     ?SendMuteMicrophoneInputReport@CallControlDeviceCollection@@AEAAJK_N@Z @ 0x1800D92A0 (-SendMuteMicrophoneInputReport@CallControlDeviceCollection@@AEAAJK_N@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800DCC1C (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 */

__int64 __fastcall CallControlDeviceCollection::OnInputReport(
        CallControlDeviceCollection *this,
        unsigned int a2,
        CHAR *a3,
        unsigned int a4)
{
  int v8; // edx
  RIMDeviceCollection *v9; // rcx
  int DeviceInfo; // ebx
  __int64 v11; // rdx
  struct _HIDP_CAPS *v13; // rcx
  struct DeviceInfo *PreparsedData; // rdi
  struct _HIDP_CAPS *v15; // r13
  NTSTATUS Usages; // eax
  USHORT *v17; // rcx
  __int64 v18; // r8
  struct _USAGE_AND_PAGE *p_ButtonList; // rdx
  USAGE Usage; // ax
  __int64 v21; // rbx
  USHORT *v22; // rdi
  struct _USAGE_AND_PAGE *i; // rbx
  int v24; // eax
  unsigned int v25; // edi
  __int64 InputReportByteLength; // rax
  __int64 v27; // rdx
  ULONG ReportLength; // [rsp+30h] [rbp-D0h]
  struct _HIDP_CAPS *v29; // [rsp+40h] [rbp-C0h] BYREF
  ULONG UsageLength; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v31; // [rsp+50h] [rbp-B0h] BYREF
  struct DeviceInfo *v32; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A0h] BYREF
  USHORT CurrentUsageList[8]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v35; // [rsp+78h] [rbp-88h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  USHORT BreakUsageList[8]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+B0h] [rbp-50h]
  USHORT MakeUsageList[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v41; // [rsp+C8h] [rbp-38h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  struct _USAGE_AND_PAGE ButtonList; // [rsp+E0h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v31 = a2;
  DeviceInfo = RIMDeviceCollection::GetDeviceInfo(this, a2, &v32);
  if ( DeviceInfo < 0 )
  {
    v11 = 125LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\callcontroldevicecollection.cpp",
      (const char *)(unsigned int)DeviceInfo);
    return (unsigned int)DeviceInfo;
  }
  v29 = 0LL;
  DeviceInfo = RIMDeviceCollection::FindDevice(v9, v8, 0LL, (struct RIMDevice **)&v29, 0LL);
  if ( DeviceInfo < 0 )
  {
    v11 = 131LL;
    goto LABEL_3;
  }
  v13 = v29;
  v29 = 0LL;
  PreparsedData = *(struct DeviceInfo **)&v13->NumberInputValueCaps;
  v32 = PreparsedData;
  DeviceInfo = HIDDevice::GetHIDCapabilities((HIDDevice *)v13, &v29);
  if ( DeviceInfo < 0 )
  {
    v11 = 137LL;
    goto LABEL_3;
  }
  v36 = 0LL;
  *(_OWORD *)CurrentUsageList = 0LL;
  v35 = 0LL;
  memset_0(&ButtonList, 0, 0x50uLL);
  v15 = v29;
  *(_OWORD *)MakeUsageList = 0LL;
  v42 = 0LL;
  v41 = 0LL;
  v39 = 0LL;
  *(_OWORD *)BreakUsageList = 0LL;
  v38 = 0LL;
LABEL_9:
  if ( a4 < v15->InputReportByteLength )
    return 0LL;
  ReportLength = v15->InputReportByteLength;
  UsageLength = 20;
  Usages = HidP_GetUsagesEx(HidP_Input, 0, &ButtonList, &UsageLength, PreparsedData, a3, ReportLength);
  if ( Usages < 0 )
  {
    v27 = 167LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v27,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\callcontroldevicecollection.cpp",
             (const char *)(unsigned int)Usages);
  }
  if ( UsageLength )
  {
    v17 = CurrentUsageList;
    v18 = UsageLength;
    p_ButtonList = &ButtonList;
    do
    {
      Usage = p_ButtonList->Usage;
      ++p_ButtonList;
      *v17++ = Usage;
      --v18;
    }
    while ( v18 );
  }
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (__int64)this + 2760,
    (__int64)&v33,
    &v31);
  if ( v33 == *((_QWORD *)this + 346) )
  {
    DeviceInfo = -2147467259;
    v11 = 178LL;
    goto LABEL_3;
  }
  v21 = v33 + 20;
  Usages = HidP_UsageListDifference((PUSAGE)(v33 + 20), CurrentUsageList, BreakUsageList, MakeUsageList, 0x14u);
  if ( Usages < 0 )
  {
    v27 = 187LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v27,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\callcontroldevicecollection.cpp",
             (const char *)(unsigned int)Usages);
  }
  v22 = BreakUsageList;
  *(_OWORD *)v21 = *(_OWORD *)CurrentUsageList;
  *(_OWORD *)(v21 + 16) = v35;
  *(_QWORD *)(v21 + 32) = v36;
  while ( v22 != MakeUsageList )
  {
    if ( *v22 == 225 )
    {
      DeviceInfo = CallControlDeviceCollection::SendMuteMicrophoneInputReport(this, a2, 0);
      if ( DeviceInfo < 0 )
      {
        v11 = 198LL;
        goto LABEL_3;
      }
      LODWORD(v29) = 304;
      ButtonDeviceTelemetry::OnButtonRelease<enum _Button>((int *)&v29);
    }
    ++v22;
  }
  for ( i = (struct _USAGE_AND_PAGE *)MakeUsageList; ; i = (struct _USAGE_AND_PAGE *)((char *)i + 2) )
  {
    if ( i == &ButtonList )
    {
      InputReportByteLength = v15->InputReportByteLength;
      PreparsedData = v32;
      a4 -= InputReportByteLength;
      a3 += InputReportByteLength;
      goto LABEL_9;
    }
    if ( i->Usage == 225 )
    {
      v24 = CallControlDeviceCollection::SendMuteMicrophoneInputReport(this, a2, 1);
      v25 = v24;
      if ( v24 < 0 )
        break;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD4,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\callcontroldevicecollection.cpp",
    (const char *)(unsigned int)v24);
  return v25;
}

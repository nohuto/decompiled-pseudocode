/*
 * XREFs of ?OnInputReport@SystemControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x180085180
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x180026F08 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180068174 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009BB68 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?CreateButtonInfo@SystemControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800D8BF0 (-CreateButtonInfo@SystemControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800DCC1C (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall SystemControlDeviceCollection::OnInputReport(
        SystemControlDeviceCollection *this,
        unsigned int a2,
        PCHAR Report,
        unsigned int a4)
{
  unsigned int v8; // ecx
  __int64 v9; // rdx
  int Device; // ebx
  __int64 v11; // rdx
  struct RIMDevice *v12; // rcx
  struct RIMDevice *v13; // rdi
  struct _HIDP_CAPS *v14; // r15
  NTSTATUS Usages; // eax
  USHORT *v16; // rcx
  __int64 v17; // r8
  _USAGE_AND_PAGE *p_ButtonList; // rdx
  USAGE Usage; // ax
  USHORT *v20; // rbx
  unsigned __int16 *v21; // rdi
  DWORD TickCount; // ebx
  USHORT *i; // rdi
  DWORD v24; // ebx
  __int64 InputReportByteLength; // rax
  __int64 v26; // rdx
  int PreparsedData; // [rsp+20h] [rbp-E0h]
  ULONG UsageLength; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+48h] [rbp-B8h] BYREF
  struct RIMDevice *v31; // [rsp+50h] [rbp-B0h] BYREF
  struct _HIDP_CAPS *v32; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v33[4]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v34[24]; // [rsp+70h] [rbp-90h] BYREF
  int v35; // [rsp+88h] [rbp-78h]
  _USAGE_AND_PAGE ButtonList; // [rsp+C30h] [rbp+B30h] BYREF
  USHORT CurrentUsageList[8]; // [rsp+C80h] [rbp+B80h] BYREF
  __int128 v38; // [rsp+C90h] [rbp+B90h]
  __int64 v39; // [rsp+CA0h] [rbp+BA0h]
  USHORT BreakUsageList[8]; // [rsp+CA8h] [rbp+BA8h] BYREF
  __int128 v41; // [rsp+CB8h] [rbp+BB8h]
  __int64 v42; // [rsp+CC8h] [rbp+BC8h]
  USHORT MakeUsageList[8]; // [rsp+CD0h] [rbp+BD0h] BYREF
  __int128 v44; // [rsp+CE0h] [rbp+BE0h]
  __int64 v45; // [rsp+CF0h] [rbp+BF0h]
  wil::details::in1diag3 *retaddr; // [rsp+D38h] [rbp+C38h]

  v33[0] = a2;
  v31 = 0LL;
  v32 = 0LL;
  ButtonList.Usage = 0;
  v39 = 0LL;
  *(_OWORD *)CurrentUsageList = 0LL;
  v38 = 0LL;
  memset_0(&ButtonList.UsagePage, 0, 0x4EuLL);
  UsageLength = 20;
  v45 = 0LL;
  v42 = 0LL;
  *(_OWORD *)MakeUsageList = 0LL;
  v44 = 0LL;
  *(_OWORD *)BreakUsageList = 0LL;
  v41 = 0LL;
  memset_0(v34, 0, 0xBC0uLL);
  v8 = 0;
  v35 = 3008;
  PerformanceCount.QuadPart = 0LL;
  while ( 1 )
  {
    if ( v8 >= 0x100 )
    {
      Device = -2147023728;
      v11 = 169LL;
      goto LABEL_38;
    }
    v9 = *((_QWORD *)this + v8 + 78);
    if ( v9 )
    {
      if ( !*(_QWORD *)(v9 + 16) || *(_DWORD *)(v9 + 40) == a2 )
        break;
    }
    ++v8;
  }
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v31, 0LL);
  if ( Device < 0 )
  {
    v11 = 173LL;
    goto LABEL_38;
  }
  v12 = v31;
  v13 = (struct RIMDevice *)*((_QWORD *)v31 + 6);
  v31 = v13;
  Device = HIDDevice::GetHIDCapabilities(v12, &v32);
  if ( Device < 0 )
  {
    v11 = 175LL;
    goto LABEL_38;
  }
  v14 = v32;
LABEL_12:
  if ( a4 < v14->InputReportByteLength )
    return 0;
  Usages = HidP_GetUsagesEx(HidP_Input, 0, &ButtonList, &UsageLength, v13, Report, v14->InputReportByteLength);
  if ( Usages < 0 )
  {
    v26 = 199LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v26,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
             (const char *)(unsigned int)Usages,
             PreparsedData);
  }
  if ( UsageLength )
  {
    v16 = CurrentUsageList;
    v17 = UsageLength;
    p_ButtonList = &ButtonList;
    do
    {
      Usage = p_ButtonList->Usage;
      ++p_ButtonList;
      *v16++ = Usage;
      --v17;
    }
    while ( v17 );
  }
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (__int64)this + 2760,
    (__int64)&v32,
    v33);
  if ( v32 == *((struct _HIDP_CAPS **)this + 346) )
  {
    Device = -2147467259;
    v11 = 210LL;
    goto LABEL_38;
  }
  v20 = &v32->Reserved[5];
  Usages = HidP_UsageListDifference(&v32->Reserved[5], CurrentUsageList, BreakUsageList, MakeUsageList, 0x14u);
  if ( Usages < 0 )
  {
    v26 = 219LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v26,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
             (const char *)(unsigned int)Usages,
             PreparsedData);
  }
  v21 = BreakUsageList;
  *(_OWORD *)v20 = *(_OWORD *)CurrentUsageList;
  *((_OWORD *)v20 + 1) = v38;
  *((_QWORD *)v20 + 4) = v39;
  while ( *v21 )
  {
    TickCount = GetTickCount();
    QueryPerformanceCounter(&PerformanceCount);
    if ( (int)SystemControlDeviceCollection::CreateButtonInfo(
                (SystemControlDeviceCollection *)*v21,
                a2,
                TickCount,
                PerformanceCount,
                *v21,
                0,
                (struct InputInfo *)v34) >= 0 )
    {
      Device = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), v34);
      if ( Device < 0 )
      {
        v11 = 255LL;
        goto LABEL_38;
      }
    }
    ++v21;
  }
  for ( i = MakeUsageList; ; ++i )
  {
    if ( !*i )
    {
      InputReportByteLength = v14->InputReportByteLength;
      v13 = v31;
      a4 -= InputReportByteLength;
      Report += InputReportByteLength;
      goto LABEL_12;
    }
    v24 = GetTickCount();
    QueryPerformanceCounter(&PerformanceCount);
    if ( (int)SystemControlDeviceCollection::CreateButtonInfo(
                (SystemControlDeviceCollection *)*i,
                a2,
                v24,
                PerformanceCount,
                *i,
                1,
                (struct InputInfo *)v34) >= 0 )
    {
      Device = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), v34);
      if ( Device < 0 )
        break;
    }
  }
  v11 = 294LL;
LABEL_38:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
    (const char *)(unsigned int)Device,
    PreparsedData);
  return Device;
}

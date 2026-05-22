/*
 * XREFs of ?OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D95D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005F2B0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180068174 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x1800900AC (--1-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAA@XZ.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HeatDeviceCollection::OnDeviceAttach(HeatDeviceCollection *this, int a2, struct DeviceInfo **a3)
{
  char *v6; // rdi
  int Device; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v11; // rbx
  struct DeviceInfo *v13; // [rsp+30h] [rbp-40h] BYREF
  void *v14; // [rsp+38h] [rbp-38h] BYREF
  __int128 v15; // [rsp+40h] [rbp-30h] BYREF
  __int128 v16; // [rsp+50h] [rbp-20h]
  __int64 v17; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  struct RIMDevice *v19; // [rsp+A8h] [rbp+38h] BYREF

  v19 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v6 = (char *)operator new(0x60CuLL);
  memset_0(v6, 0, 0x60CuLL);
  *((_DWORD *)v6 + 2) = 1548;
  v14 = v6;
  v13 = (struct DeviceInfo *)v6;
  Device = HIDDeviceCollection::OnDeviceAttach(this, a2, &v13);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = 110LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\heatdevicecollection.cpp",
      (const char *)(unsigned int)Device);
    goto LABEL_9;
  }
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v19, 0LL);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = (unsigned int)(v10 + 115);
    goto LABEL_5;
  }
  v11 = *((_QWORD *)v19 + 2);
  NtRIMEnableMonitorMappingForDevice(*((_QWORD *)this + 10), v11);
  if ( (int)RIMGetDeviceProperties(*((_QWORD *)this + 10), v11, &v15) >= 0 )
  {
    *(_QWORD *)(v6 + 20) = v16;
    *((_DWORD *)v6 + 7) = DWORD2(v16);
  }
  *a3 = v13;
  v14 = 0LL;
  v8 = 0;
LABEL_9:
  std::unique_ptr<LegacyDeviceInfo>::~unique_ptr<LegacyDeviceInfo>(&v14);
  return v8;
}

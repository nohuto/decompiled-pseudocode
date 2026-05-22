/*
 * XREFs of ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DA4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x1800158C4 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030470 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005F2B0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180068174 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18009AC04 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace_back_internal@UGetInputReportResult@@@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@AEAAX$$QEAUGetInputReportResult@@@Z @ 0x1800D9EAC (--$_Emplace_back_internal@UGetInputReportResult@@@-$deque@UGetInputReportResult@@V-$allocator@UG.c)
 *     ??1?$unique_ptr@UDockDeviceInfo@@U?$default_delete@UDockDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x1800D9F74 (--1-$unique_ptr@UDockDeviceInfo@@U-$default_delete@UDockDeviceInfo@@@std@@@std@@QEAA@XZ.c)
 *     ?DockDeviceAttached@DeviceDock@InputTraceLogging@@SAXKAEBUDockDeviceInfo@@@Z @ 0x1800DA290 (-DockDeviceAttached@DeviceDock@InputTraceLogging@@SAXKAEBUDockDeviceInfo@@@Z.c)
 *     ?Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x1800DE14C (-Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 *     ?TryGetDockInputReport@DockDevice@@QEAAJPEAUGetInputReportResult@@@Z @ 0x1800DE4C8 (-TryGetDockInputReport@DockDevice@@QEAAJPEAUGetInputReportResult@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DockDeviceCollection::OnDeviceAttach(wil::details **this, int a2, struct DeviceInfo **a3)
{
  struct RIMDevice *v6; // rsi
  int Device; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // r8d
  int DockInputReport; // eax
  const struct std::nothrow_t *v12; // rdx
  void *v13; // rdx
  struct DeviceInfo *v15; // [rsp+30h] [rbp-30h] BYREF
  struct RIMDevice *v16; // [rsp+38h] [rbp-28h] BYREF
  __int64 v17; // [rsp+40h] [rbp-20h] BYREF
  void *v18[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct RIMDevice *v20; // [rsp+98h] [rbp+38h] BYREF

  v6 = (struct RIMDevice *)operator new(0x694uLL);
  v20 = v6;
  memset_0(v6, 0, 0x694uLL);
  memset_0(v6, 0, 0x60CuLL);
  *((_DWORD *)v6 + 2) = 1548;
  v16 = v6;
  v15 = v6;
  Device = HIDDeviceCollection::OnDeviceAttach((HIDDeviceCollection *)this, a2, &v15);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = 99LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
      (const char *)(unsigned int)Device);
    goto LABEL_12;
  }
  v20 = 0LL;
  Device = RIMDeviceCollection::FindDevice((RIMDeviceCollection *)this, a2, 0LL, &v20, 0LL);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = (unsigned int)(v10 + 105);
    goto LABEL_5;
  }
  Device = DockDevice::Initialize(v20, v6);
  v8 = Device;
  if ( Device < 0 )
  {
    v9 = 107LL;
    goto LABEL_5;
  }
  InputTraceLogging::DeviceDock::DockDeviceAttached(a2, v6);
  v17 = 0LL;
  v18[0] = 0LL;
  v18[1] = 0LL;
  DockInputReport = DockDevice::TryGetDockInputReport(v20, (struct GetInputReportResult *)&v17);
  if ( DockInputReport >= 0 )
  {
    v20 = (struct RIMDevice *)(this + 352);
    std::_Mutex_base::lock((std::_Mutex_base *)(this + 352));
    std::deque<GetInputReportResult>::_Emplace_back_internal<GetInputReportResult>(this + 347, (__int64)&v17);
    wil::details::SetEvent(this[346], v13);
    _Mtx_unlock((_Mtx_t)(this + 352));
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x71,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
      (const char *)(unsigned int)DockInputReport);
  }
  *a3 = v15;
  v16 = 0LL;
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(v18, v12);
  v8 = 0;
LABEL_12:
  std::unique_ptr<DockDeviceInfo>::~unique_ptr<DockDeviceInfo>((void **)&v16);
  return v8;
}

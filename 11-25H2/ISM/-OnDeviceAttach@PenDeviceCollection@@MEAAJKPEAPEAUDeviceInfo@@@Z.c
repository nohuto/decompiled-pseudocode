/*
 * XREFs of ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DC4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002404C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005F2B0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180068174 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VMPCManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B7FC0 (--1-$com_ptr_t@VMPCManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VHapticDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVHapticDeviceManager@@@Z @ 0x1800DC384 (--0-$com_ptr_t@VHapticDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVHapticDeviceMana.c)
 *     ??4?$com_ptr_t@VHapticDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVHapticDeviceManager@@@Z @ 0x1800DC3B4 (--4-$com_ptr_t@VHapticDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVHapticDevi.c)
 *     ??$?9VPenHapticDevice@@Uerr_exception_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@VPenHapticDevice@@Uerr_exception_policy@wil@@@0@$$T@Z @ 0x1800DC408 (--$-9VPenHapticDevice@@Uerr_exception_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@VPenHapticDevice@@Ue.c)
 *     ??0HapticDeviceManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180185DEC (--0HapticDeviceManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?AttachRIMDevice@HapticDeviceManager@@QEAAXPEAX0@Z @ 0x1801862D0 (-AttachRIMDevice@HapticDeviceManager@@QEAAXPEAX0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PenDeviceCollection::OnDeviceAttach(void **this, int a2, struct DeviceInfo **a3)
{
  int Device; // ebx
  __int64 v6; // rdx
  int v8; // r8d
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v10; // rax
  struct ISMBamos_AutoBamos::BamoConnection *v11; // rbx
  HapticDeviceManager *v12; // rax
  struct InputSystemServerConnection *v13; // rax
  HapticDeviceManager *v14; // rbx
  struct RIMDevice *v15; // [rsp+30h] [rbp-18h] BYREF
  HapticDeviceManager *v16; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HapticDeviceManager *v18; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  Device = HIDDeviceCollection::OnDeviceAttach((HIDDeviceCollection *)this, a2, a3);
  if ( Device < 0 )
  {
    v6 = 83LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\pendevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  Device = RIMDeviceCollection::FindDevice((RIMDeviceCollection *)this, a2, 0LL, &v15, 0LL);
  if ( Device < 0 )
  {
    v6 = (unsigned int)(v8 + 87);
    goto LABEL_3;
  }
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 168LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  wil::com_ptr_t<HapticDeviceManager,wil::err_returncode_policy>::com_ptr_t<HapticDeviceManager,wil::err_returncode_policy>(
    &v18,
    v10);
  if ( wil::operator!=<PenHapticDevice,wil::err_exception_policy>(&v18) )
  {
    v14 = v18;
  }
  else
  {
    v11 = ISMStatics::GetBamoServerConnection();
    v16 = (HapticDeviceManager *)operator new(0x90uLL);
    v12 = HapticDeviceManager::HapticDeviceManager(v16, v11);
    wil::com_ptr_t<HapticDeviceManager,wil::err_returncode_policy>::operator=((__int64 *)&v18, (__int64)v12);
    v13 = ISMStatics::GetBamoServerConnection();
    v14 = v18;
    (*(void (__fastcall **)(__int64, HapticDeviceManager *))(*(_QWORD *)(*((_QWORD *)v13 + 31) + 8LL) + 176LL))(
      *((_QWORD *)v13 + 31) + 8LL,
      v18);
  }
  HapticDeviceManager::AttachRIMDevice(v14, this[10], *((void **)v15 + 2));
  wil::com_ptr_t<MPCManager,wil::err_exception_policy>::~com_ptr_t<MPCManager,wil::err_exception_policy>((__int64 *)&v18);
  return 0LL;
}

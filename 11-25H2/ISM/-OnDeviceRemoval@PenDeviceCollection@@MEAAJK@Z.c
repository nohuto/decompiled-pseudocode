/*
 * XREFs of ?OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z @ 0x1800DC620
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002404C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180068174 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VMPCManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B7FC0 (--1-$com_ptr_t@VMPCManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VHapticDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVHapticDeviceManager@@@Z @ 0x1800DC384 (--0-$com_ptr_t@VHapticDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVHapticDeviceMana.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800DCAA0 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 *     ?RemoveRIMDevice@HapticDeviceManager@@QEAAXPEAX@Z @ 0x180187988 (-RemoveRIMDevice@HapticDeviceManager@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenDeviceCollection::OnDeviceRemoval(PenDeviceCollection *this, unsigned int a2)
{
  int Device; // ebx
  __int64 v5; // rdx
  int v7; // r8d
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct RIMDevice *v11; // [rsp+50h] [rbp+18h] BYREF
  HapticDeviceManager *v12; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  Device = HIDDeviceCollection::OnDeviceRemoval(this, a2);
  if ( Device < 0 )
  {
    v5 = 119LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\pendevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v11, 0LL);
  if ( Device < 0 )
  {
    v5 = (unsigned int)(v7 + 123);
    goto LABEL_3;
  }
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 168LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  wil::com_ptr_t<HapticDeviceManager,wil::err_returncode_policy>::com_ptr_t<HapticDeviceManager,wil::err_returncode_policy>(
    &v12,
    v9);
  HapticDeviceManager::RemoveRIMDevice(v12, *((void **)v11 + 2));
  wil::com_ptr_t<MPCManager,wil::err_exception_policy>::~com_ptr_t<MPCManager,wil::err_exception_policy>((__int64 *)&v12);
  return 0LL;
}

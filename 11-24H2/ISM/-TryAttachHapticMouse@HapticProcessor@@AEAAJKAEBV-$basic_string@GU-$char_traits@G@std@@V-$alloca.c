/*
 * XREFs of ?TryAttachHapticMouse@HapticProcessor@@AEAAJKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x1800CA3A8
 * Callers:
 *     ?OnHapticInterfaceArrival@HapticProcessor@@QEAAJKPEBG@Z @ 0x1800C9700 (-OnHapticInterfaceArrival@HapticProcessor@@QEAAJKPEBG@Z.c)
 *     ?OnMouseArrival@HapticProcessor@@QEAAJPEBUDeviceInfo@@@Z @ 0x1800C9904 (-OnMouseArrival@HapticProcessor@@QEAAJPEBUDeviceInfo@@@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002461C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VMPCManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B5D80 (--1-$com_ptr_t@VMPCManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VHapticDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVHapticDeviceManager@@@Z @ 0x1800C8040 (--0-$com_ptr_t@VHapticDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVHapticDeviceMana.c)
 *     ??4?$com_ptr_t@VHapticDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVHapticDeviceManager@@@Z @ 0x1800C81EC (--4-$com_ptr_t@VHapticDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVHapticDevi.c)
 *     ??0HapticDeviceManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180189AB0 (--0HapticDeviceManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?TryAttachHapticMouse@HapticDeviceManager@@QEAAJKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x18018DBD0 (-TryAttachHapticMouse@HapticDeviceManager@@QEAAJKAEBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HapticProcessor::TryAttachHapticMouse(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  struct InputSystemServerConnection *BamoServerConnection; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  HapticDeviceManager *v10; // rax
  unsigned int v11; // ebx
  HapticDeviceManager *v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = a1;
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 168LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  wil::com_ptr_t<HapticDeviceManager,wil::err_returncode_policy>::com_ptr_t<HapticDeviceManager,wil::err_returncode_policy>(
    &v14,
    v8);
  v9 = v14;
  if ( !v14 )
  {
    v13 = (HapticDeviceManager *)operator new(0xA0uLL);
    v10 = HapticDeviceManager::HapticDeviceManager(v13, BamoServerConnection);
    wil::com_ptr_t<HapticDeviceManager,wil::err_returncode_policy>::operator=(&v14, (__int64)v10);
    v9 = v14;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 176LL))(
      *((_QWORD *)BamoServerConnection + 31) + 8LL,
      v14);
  }
  v11 = HapticDeviceManager::TryAttachHapticMouse(v9, a2, a3, a4, v13);
  wil::com_ptr_t<MPCManager,wil::err_exception_policy>::~com_ptr_t<MPCManager,wil::err_exception_policy>(&v14);
  return v11;
}

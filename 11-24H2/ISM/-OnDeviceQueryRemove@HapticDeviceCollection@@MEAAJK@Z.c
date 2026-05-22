/*
 * XREFs of ?OnDeviceQueryRemove@HapticDeviceCollection@@MEAAJK@Z @ 0x1800DFCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002461C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetHapticProcessor@ISMStatics@@SAPEAVHapticProcessor@@XZ @ 0x1800A75BC (-GetHapticProcessor@ISMStatics@@SAPEAVHapticProcessor@@XZ.c)
 *     ??1?$com_ptr_t@VMPCManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B5D80 (--1-$com_ptr_t@VMPCManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VHapticDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVHapticDeviceManager@@@Z @ 0x1800C8040 (--0-$com_ptr_t@VHapticDeviceManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVHapticDeviceMana.c)
 *     ?OnDeviceQueryRemove@HIDDeviceCollection@@MEAAJK@Z @ 0x1800E0190 (-OnDeviceQueryRemove@HIDDeviceCollection@@MEAAJK@Z.c)
 *     ?OnHapticInterfaceQueryRemove@HapticDeviceManager@@QEAAJK@Z @ 0x18018BE48 (-OnHapticInterfaceQueryRemove@HapticDeviceManager@@QEAAJK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HapticDeviceCollection::OnDeviceQueryRemove(HapticDeviceCollection *this, unsigned int a2)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v5; // rax
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HapticDeviceManager *v11; // [rsp+40h] [rbp+18h] BYREF

  ISMStatics::GetHapticProcessor();
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 168LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  wil::com_ptr_t<HapticDeviceManager,wil::err_returncode_policy>::com_ptr_t<HapticDeviceManager,wil::err_returncode_policy>(
    &v11,
    v5);
  if ( v11 && (v6 = HapticDeviceManager::OnHapticInterfaceQueryRemove(v11, a2), v7 = v6, v6 < 0) )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\processor\\lib\\hapticprocessor.cpp",
      (const char *)(unsigned int)v6);
  else
    v7 = 0;
  wil::com_ptr_t<MPCManager,wil::err_exception_policy>::~com_ptr_t<MPCManager,wil::err_exception_policy>((__int64 *)&v11);
  if ( v7 < 0 )
  {
    v8 = 113LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hapticdevicecollection.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v7 = HIDDeviceCollection::OnDeviceQueryRemove(this, a2);
  if ( v7 < 0 )
  {
    v8 = 115LL;
    goto LABEL_7;
  }
  return 0LL;
}

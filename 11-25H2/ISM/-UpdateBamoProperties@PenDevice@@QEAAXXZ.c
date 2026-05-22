/*
 * XREFs of ?UpdateBamoProperties@PenDevice@@QEAAXXZ @ 0x180189B38
 * Callers:
 *     ?AttachInterface@PenDevice@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18018916C (-AttachInterface@PenDevice@@QEAAXV-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002404C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180068A6C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18006934C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ??$?8VPenHapticDevice@@Uerr_exception_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@VPenHapticDevice@@Uerr_exception_policy@wil@@@0@$$T@Z @ 0x1800AD120 (--$-8VPenHapticDevice@@Uerr_exception_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@VPenHapticDevice@@Ue.c)
 *     ??$?9VPenHapticDevice@@Uerr_exception_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@VPenHapticDevice@@Uerr_exception_policy@wil@@@0@$$T@Z @ 0x1800DC408 (--$-9VPenHapticDevice@@Uerr_exception_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@VPenHapticDevice@@Ue.c)
 *     ??1?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1801882E8 (--1-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Haptics@PenInterface@@QEAA?AV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1801891D0 (-Haptics@PenInterface@@QEAA-AV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?attach@?$com_ptr_t@VPenHapticDevice@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVPenHapticDevice@@@Z @ 0x180189E18 (-attach@-$com_ptr_t@VPenHapticDevice@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVPenHapticDevice@.c)
 *     ??0PenHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18018BC78 (--0PenHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?AttachInterface@PenHapticDevice@@QEAAXV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18018C220 (-AttachInterface@PenHapticDevice@@QEAAXV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall PenDevice::UpdateBamoProperties(PenDevice *this)
{
  __int64 *v2; // rdi
  __int64 *v3; // rbp
  __int64 *v4; // rax
  bool v5; // bl
  PenHapticDevice **v6; // r14
  struct ISMBamos_AutoBamos::BamoConnection *BamoServerConnection; // rbx
  PenHapticDevice *v8; // rax
  PenHapticDevice *v9; // rbx
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  PenHapticDevice *v13; // [rsp+78h] [rbp+20h]

  v2 = (__int64 *)*((_QWORD *)this + 10);
  v3 = (__int64 *)*((_QWORD *)this + 11);
  while ( v2 != v3 )
  {
    wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(&v10, *v2);
    v4 = PenInterface::Haptics(v10, &v11);
    v5 = wil::operator!=<PenHapticDevice,wil::err_exception_policy>(v4);
    wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::~com_ptr_t<PenHapticInterface,wil::err_exception_policy>(&v11);
    if ( v5 )
    {
      v6 = (PenHapticDevice **)((char *)this + 104);
      if ( wil::operator==<PenHapticDevice,wil::err_exception_policy>((_QWORD *)this + 13) )
      {
        BamoServerConnection = ISMStatics::GetBamoServerConnection();
        v13 = (PenHapticDevice *)operator new(0x60uLL);
        v8 = PenHapticDevice::PenHapticDevice(v13, BamoServerConnection);
        wil::com_ptr_t<PenHapticDevice,wil::err_exception_policy>::attach((char *)this + 104, v8);
      }
      v9 = *v6;
      PenInterface::Haptics(v10, &v12);
      PenHapticDevice::AttachInterface(v9);
      (*(void (__fastcall **)(char *, PenHapticDevice *))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8, *v6);
    }
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v10);
    ++v2;
  }
}

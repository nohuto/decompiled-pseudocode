/*
 * XREFs of ?OnInputReport@GazeDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800DCEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180067F64 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800D331C (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     ?GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z @ 0x1800E0330 (-GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GazeDeviceCollection::OnInputReport(GazeDeviceCollection *this, int a2, char *a3, unsigned int a4)
{
  int Device; // ebx
  __int64 v8; // rdx
  struct RIMDevice *v10; // r14
  struct RIMDevice *v11; // rdi
  _QWORD *v12; // rbx
  struct _HIDP_CAPS *v13; // r13
  unsigned int InputReportByteLength; // r8d
  int InputInfoForReport; // eax
  int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rax
  bool v19[8]; // [rsp+30h] [rbp-20h] BYREF
  struct RIMDevice *v20; // [rsp+38h] [rbp-18h] BYREF
  struct _HIDP_CAPS *v21[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v20 = 0LL;
  v21[0] = 0LL;
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v20, 0LL);
  if ( Device < 0 )
  {
    v8 = 194LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
      (const char *)(unsigned int)Device);
    return (unsigned int)Device;
  }
  v10 = v20;
  Device = HIDDevice::GetHIDCapabilities((PHIDP_PREPARSED_DATA *)v20, v21);
  if ( Device < 0 )
  {
    v8 = 195LL;
    goto LABEL_3;
  }
  v11 = (struct RIMDevice *)*((_QWORD *)v10 + 4);
  v12 = (_QWORD *)((char *)this + 16);
  v13 = v21[0];
  v20 = v11;
  while ( 1 )
  {
    InputReportByteLength = v13->InputReportByteLength;
    if ( a4 < InputReportByteLength )
      return 0LL;
    v21[0] = 0LL;
    v19[0] = 0;
    InputInfoForReport = GazeHidDevice::GetInputInfoForReport(
                           v10,
                           a3,
                           InputReportByteLength,
                           (struct InputInfo **)v21,
                           v19);
    if ( InputInfoForReport < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD1,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
        (const char *)(unsigned int)InputInfoForReport);
    if ( v19[0] )
    {
      v12 = (_QWORD *)((char *)this + 16);
      v16 = (*(__int64 (__fastcall **)(_QWORD, struct RIMDevice *))(**((_QWORD **)this + 2) + 48LL))(
              *((_QWORD *)this + 2),
              v11);
      if ( v16 < 0 )
      {
        v17 = 214LL;
        goto LABEL_18;
      }
    }
    if ( v21[0] )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 24LL))(*v12);
      if ( v16 < 0 )
      {
        v17 = 219LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
          (const char *)(unsigned int)v16);
        return (unsigned int)v16;
      }
    }
    else
    {
      v12 = (_QWORD *)((char *)this + 16);
    }
    v18 = v13->InputReportByteLength;
    v11 = v20;
    a4 -= v18;
    a3 += v18;
  }
}

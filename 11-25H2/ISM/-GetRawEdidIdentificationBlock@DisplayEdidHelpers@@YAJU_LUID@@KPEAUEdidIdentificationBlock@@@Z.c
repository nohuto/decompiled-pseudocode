/*
 * XREFs of ?GetRawEdidIdentificationBlock@DisplayEdidHelpers@@YAJU_LUID@@KPEAUEdidIdentificationBlock@@@Z @ 0x1801079D8
 * Callers:
 *     ?GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK@Z @ 0x180107718 (-GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800856B0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

__int64 __fastcall DisplayEdidHelpers::GetRawEdidIdentificationBlock(
        DisplayEdidHelpers *this,
        struct _LUID a2,
        __int64 a3,
        struct EdidIdentificationBlock *a4)
{
  DWORD LowPart; // edi
  unsigned int DeviceInfo; // eax
  __int16 v9; // ax
  DISPLAYCONFIG_DEVICE_INFO_HEADER requestPacket; // [rsp+20h] [rbp-548h] BYREF
  unsigned int v11[3]; // [rsp+34h] [rbp-534h] BYREF
  __int64 v12; // [rsp+40h] [rbp-528h]
  __int16 v13; // [rsp+48h] [rbp-520h]
  wil::details::in1diag3 *retaddr; // [rsp+568h] [rbp+0h]

  LowPart = a2.LowPart;
  memset_0(v11, 0, 0x504uLL);
  requestPacket.type = -8;
  requestPacket.size = 1304;
  requestPacket.adapterId = (LUID)this;
  requestPacket.id = LowPart;
  DeviceInfo = DisplayConfigGetDeviceInfo(&requestPacket);
  if ( DeviceInfo )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x20,
             (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
             (const char *)DeviceInfo);
  if ( v11[0] >= 0x12 )
  {
    v9 = v13;
    *(_QWORD *)a3 = v12;
    *(_WORD *)(a3 + 8) = v9;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}

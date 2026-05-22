/*
 * XREFs of ?SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z @ 0x1800EB550
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180086EF0 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     ??1HidLampArrayDevice@@UEAA@XZ @ 0x180096494 (--1HidLampArrayDevice@@UEAA@XZ.c)
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E9D1C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendLampArrayControlReport@HidLampArrayDevice@@AEAAJPEBULampArrayControlDeviceReport@@@Z @ 0x1800EB1A8 (-SendLampArrayControlReport@HidLampArrayDevice@@AEAAJPEBULampArrayControlDeviceReport@@@Z.c)
 */

__int64 __fastcall HidLampArrayDevice::SetAutonomousMode(HidLampArrayDevice *this, char a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v8; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 == *((_BYTE *)this + 644) )
    return 0LL;
  *((_BYTE *)this + 644) = a2;
  v8 = a2;
  v4 = HidLampArrayDevice::SendLampArrayControlReport(this, (const struct LampArrayControlDeviceReport *)&v8, a3, a4);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x225,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}

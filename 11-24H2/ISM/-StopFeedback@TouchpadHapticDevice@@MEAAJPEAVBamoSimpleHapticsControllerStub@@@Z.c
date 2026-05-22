/*
 * XREFs of ?StopFeedback@TouchpadHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@@Z @ 0x180187540
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TriggerHapticsForOrdinal@CompliantHapticInterface@@QEBAJW4HapticsType@@GAEBUSecondaryValues@@@Z @ 0x18019ABD0 (-TriggerHapticsForOrdinal@CompliantHapticInterface@@QEBAJW4HapticsType@@GAEBUSecondaryValues@@@Z.c)
 */

__int64 __fastcall TouchpadHapticDevice::StopFeedback(
        TouchpadHapticDevice *this,
        struct BamoSimpleHapticsControllerStub *a2)
{
  int v2; // eax
  _DWORD v4[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4[0] = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v2 = CompliantHapticInterface::TriggerHapticsForOrdinal((char *)this + 88, a2, 2LL, v4);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\touchpadhapticdevice.cpp",
      (const char *)(unsigned int)v2);
  return 0LL;
}

/*
 * XREFs of ?FindTransducerConnectedInputReport@PenInterface@@AEAAJPEAU_HIDP_PREPARSED_DATA@@PEAE@Z @ 0x180188400
 * Callers:
 *     ?Initialize@PenInterface@@QEAAJXZ @ 0x1801885DC (-Initialize@PenInterface@@QEAAJXZ.c)
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x1800976C0 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

__int64 __fastcall PenInterface::FindTransducerConnectedInputReport(
        PenInterface *this,
        struct _HIDP_PREPARSED_DATA *a2,
        unsigned __int8 *a3)
{
  NTSTATUS SpecificButtonCaps; // eax
  USHORT ButtonCapsLength[8]; // [rsp+40h] [rbp-78h] BYREF
  struct _HIDP_BUTTON_CAPS ButtonCaps; // [rsp+50h] [rbp-68h] BYREF

  memset_0(&ButtonCaps, 0, sizeof(ButtonCaps));
  ButtonCapsLength[0] = 1;
  SpecificButtonCaps = HidP_GetSpecificButtonCaps(HidP_Input, 0xDu, 0, 0xA2u, &ButtonCaps, ButtonCapsLength, a2);
  if ( SpecificButtonCaps < 0 )
    return wil::details::NtStatusToHr((wil::details *)(unsigned int)SpecificButtonCaps);
  *a3 = ButtonCaps.ReportID;
  return 0LL;
}

/*
 * XREFs of HUBMISC_SetPortAndSpeedFlagsFor30Device @ 0x140033880
 * Callers:
 *     HUBPSM30_IssuingAttachDeviceToDsm @ 0x140013FC0 (HUBPSM30_IssuingAttachDeviceToDsm.c)
 *     HUBPSM30_IssuingAttachDeviceWithResetToDsm @ 0x140013FF0 (HUBPSM30_IssuingAttachDeviceWithResetToDsm.c)
 * Callees:
 *     Feature_UISCSF__private_IsEnabledDeviceUsageNoInline @ 0x1400261BC (Feature_UISCSF__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall HUBMISC_SetPortAndSpeedFlagsFor30Device(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  if ( (unsigned int)Feature_UISCSF__private_IsEnabledDeviceUsageNoInline() )
  {
    v2 = *(_QWORD *)(a1 + 1328);
    switch ( *(_DWORD *)(a1 + 188) & 0xF )
    {
      case 5:
        *(_DWORD *)(v2 + 192) = 4;
        break;
      case 6:
        *(_DWORD *)(v2 + 192) = 5;
        break;
      case 7:
        *(_DWORD *)(v2 + 192) = 6;
        break;
      default:
        *(_DWORD *)(v2 + 192) = 3;
        break;
    }
  }
  result = *(_QWORD *)(a1 + 1328);
  *(_DWORD *)(result + 1464) |= 0x20800u;
  return result;
}

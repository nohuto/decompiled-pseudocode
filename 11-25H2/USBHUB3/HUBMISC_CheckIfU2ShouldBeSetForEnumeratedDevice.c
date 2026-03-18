/*
 * XREFs of HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice @ 0x14002E5E0
 * Callers:
 *     HUBDSM_ComputingLPMTimeoutValuesInUnconfigured @ 0x1400214A0 (HUBDSM_ComputingLPMTimeoutValuesInUnconfigured.c)
 *     HUBUCX_UpdateDeviceInfoUsingUCXIoctl @ 0x140029738 (HUBUCX_UpdateDeviceInfoUsingUCXIoctl.c)
 * Callees:
 *     Feature_UTSP__private_IsEnabledDeviceUsageNoInline @ 0x14000C908 (Feature_UTSP__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice(__int64 a1)
{
  char v2; // bl
  unsigned __int8 v3; // dl
  __int64 result; // rax

  v2 = (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 204LL) & 0x400) != 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 204LL) & 0x800) != 0 )
  {
    if ( (unsigned int)Feature_UTSP__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *(_DWORD *)(a1 + 2724) == 2 )
        v2 = 0;
    }
    else
    {
      v2 = (*(_DWORD *)(a1 + 1636) & 0x200000) != 0 ? v2 : 0;
    }
  }
  v3 = *(_BYTE *)(a1 + 2220);
  if ( (v3 & 8) == 0
    || (*(_DWORD *)(a1 + 1644) & 0x80u) != 0
    || (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 0x8000) != 0
    || v2 == 1 )
  {
    return 4061LL;
  }
  result = 4089LL;
  *(_BYTE *)(a1 + 2213) = ~(v3 >> 5) | 0xFE;
  return result;
}

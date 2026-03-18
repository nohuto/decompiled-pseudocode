/*
 * XREFs of RIMFreeQDCActivePathsData @ 0x1400C7E10
 * Callers:
 *     rimInUserCritCreatePointerDeviceInfo @ 0x1400C7140 (rimInUserCritCreatePointerDeviceInfo.c)
 *     RIMGetQDCActivePathsData @ 0x1400C7BC8 (RIMGetQDCActivePathsData.c)
 *     RIMOnDisplayStateChange @ 0x14017B684 (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1401D7170 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFindMonitorForDigitizer @ 0x1401E1800 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E4F04 (RIMIDECreatePointerDeviceInfo.c)
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1401F4428 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

void __fastcall RIMFreeQDCActivePathsData(__int64 a1)
{
  char *v2; // rcx

  if ( a1 )
  {
    v2 = *(char **)(a1 + 8);
    if ( v2 )
      GreDeleteFastMutex(v2);
    *(_OWORD *)a1 = 0LL;
  }
}

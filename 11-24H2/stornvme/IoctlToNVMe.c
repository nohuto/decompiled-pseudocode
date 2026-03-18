/*
 * XREFs of IoctlToNVMe @ 0x140003580
 * Callers:
 *     NVMeHwBuildIo @ 0x140002520 (NVMeHwBuildIo.c)
 * Callees:
 *     IoctlQueryProtocolInfoProcess @ 0x140001DD0 (IoctlQueryProtocolInfoProcess.c)
 *     CompareId @ 0x140001F10 (CompareId.c)
 *     SetPrpFromSrb @ 0x140004B50 (SetPrpFromSrb.c)
 *     IoctlFirmwareProcess @ 0x14000CFC0 (IoctlFirmwareProcess.c)
 *     DiagGeneric @ 0x14001F5EC (DiagGeneric.c)
 *     IoctlCreateReservedQueuePair @ 0x1400203C4 (IoctlCreateReservedQueuePair.c)
 *     IoctlDeleteReservedQueuePair @ 0x1400208C0 (IoctlDeleteReservedQueuePair.c)
 *     IoctlQueryEnduranceInformation @ 0x140020DA0 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryReservedQueueEntries @ 0x140020F94 (IoctlQueryReservedQueueEntries.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1400211FC (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetProtocolInfoProcess @ 0x140021394 (IoctlSetProtocolInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x140021450 (IoctlSetTemperatureThresholdProcess.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x14002158C (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x140021758 (IoctlStorageStreamsGetParameters.c)
 *     IoctlStorageStreamsReleaseId @ 0x140021B28 (IoctlStorageStreamsReleaseId.c)
 */

__int64 __fastcall IoctlToNVMe(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 result; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rsi

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 64);
  else
    v4 = *(_QWORD *)(a2 + 24);
  v5 = *(_DWORD *)(v4 + 16);
  if ( v5 > 0x2D282C )
  {
    if ( v5 == 2959408 )
    {
      result = IoctlStorageStreamsReleaseId(a1, a2);
      goto LABEL_14;
    }
    if ( v5 == 2987004 )
    {
      v8 = v4 + 4;
      if ( CompareId((__int64)"SETPROTO", 8u, v4 + 4, 8LL, 0LL) )
      {
        result = IoctlSetProtocolInfoProcess(a1, a2);
        goto LABEL_14;
      }
      if ( CompareId((__int64)"CREATEQU", 8u, v8, 8LL, 0LL) )
      {
        result = IoctlCreateReservedQueuePair(a1, a2);
        goto LABEL_14;
      }
      if ( CompareId((__int64)"DELETEQU", 8u, v8, 8LL, 0LL) )
      {
        result = IoctlDeleteReservedQueuePair(a1, a2);
        goto LABEL_14;
      }
    }
    else if ( v5 == 3002880 && CompareId((__int64)"SETTEMPT", 8u, v4 + 4, 8LL, 0LL) )
    {
      result = IoctlSetTemperatureThresholdProcess(a1, a2);
      goto LABEL_14;
    }
LABEL_13:
    *(_BYTE *)(a2 + 3) = 6;
    result = 3238002694LL;
    goto LABEL_14;
  }
  switch ( v5 )
  {
    case 0x2D282Cu:
      result = IoctlStorageStreamsGetOpenStreams(a1, a2);
      break;
    case 0x2D1400u:
      v7 = v4 + 4;
      if ( CompareId((__int64)"PROTOCOL", 8u, v4 + 4, 8LL, 0LL) )
      {
        result = IoctlQueryProtocolInfoProcess(a1, a2);
        break;
      }
      if ( CompareId((__int64)"TEMPERAT", 8u, v7, 8LL, 0LL) )
      {
        result = IoctlQueryTemperatureInfoProcess(a1, a2);
        break;
      }
      if ( CompareId((__int64)"QUEUEINF", 8u, v7, 8LL, 0LL) )
      {
        result = IoctlQueryReservedQueueEntries(a1, a2);
        break;
      }
      if ( CompareId((__int64)"ENDURINF", 8u, v7, 8LL, 0LL) )
      {
        result = IoctlQueryEnduranceInformation(a1, a2);
        break;
      }
      goto LABEL_13;
    case 0x1B0780u:
      result = IoctlFirmwareProcess(a1, a2);
      break;
    case 0x1B0900u:
      result = DiagGeneric(a1, a2);
      break;
    case 0x2D2828u:
      result = IoctlStorageStreamsGetParameters(a1, a2);
      break;
    default:
      goto LABEL_13;
  }
LABEL_14:
  if ( !*(_BYTE *)(a2 + 3) )
  {
    result = SetPrpFromSrb(a1, a2);
    if ( (_DWORD)result )
      *(_BYTE *)(a2 + 3) = 4;
  }
  return result;
}

/*
 * XREFs of RaidNtStatusToSrbStatus @ 0x1400059F0
 * Callers:
 *     RaUnitScsiIrp @ 0x140002710 (RaUnitScsiIrp.c)
 *     RaDriverScsiIrp @ 0x1400038A0 (RaDriverScsiIrp.c)
 *     RaidUnitSubmitResetRequest @ 0x140005A88 (RaidUnitSubmitResetRequest.c)
 *     RaidUnitProcessBusyRequest @ 0x140031200 (RaidUnitProcessBusyRequest.c)
 *     RaUnitStartIo @ 0x14004E6F0 (RaUnitStartIo.c)
 *     RaUnitStartResetIo @ 0x14009942C (RaUnitStartResetIo.c)
 *     NvmeNamespaceExecuteNvmeSrbComplete @ 0x1400FF930 (NvmeNamespaceExecuteNvmeSrbComplete.c)
 *     NvmeNamespaceExecuteScsiSrbComplete @ 0x140100360 (NvmeNamespaceExecuteScsiSrbComplete.c)
 *     NvmeNamespaceExecuteScsiSrbEx @ 0x140100A80 (NvmeNamespaceExecuteScsiSrbEx.c)
 *     NvmeNamespaceExecuteScsiSrbExComplete @ 0x140100E50 (NvmeNamespaceExecuteScsiSrbExComplete.c)
 *     NvmeNamespaceProcessRequest @ 0x140107538 (NvmeNamespaceProcessRequest.c)
 *     NvmeNamespaceScsiIrp @ 0x14010D8B8 (NvmeNamespaceScsiIrp.c)
 *     ScsiModeSelectRequest @ 0x140115AE8 (ScsiModeSelectRequest.c)
 *     ScsiReadWriteRequest @ 0x140115E44 (ScsiReadWriteRequest.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidNtStatusToSrbStatus(int a1)
{
  char result; // al

  if ( a1 > -1073741667 )
  {
    switch ( a1 )
    {
      case -1073741643:
        return 9;
      case -1073741632:
        return 8;
      case -1073741300:
        return 37;
      case -1073740682:
        return 24;
      default:
        result = 4;
        if ( a1 >= 0 )
          return 1;
        break;
    }
  }
  else
  {
    switch ( a1 )
    {
      case -1073741667:
        return 10;
      case -2147483643:
        return 18;
      case -2147483631:
        return 5;
      case -1073741808:
        return 34;
      case -1073741790:
        return 23;
      default:
        result = 4;
        if ( a1 == -1073741670 )
          return 48;
        break;
    }
  }
  return result;
}

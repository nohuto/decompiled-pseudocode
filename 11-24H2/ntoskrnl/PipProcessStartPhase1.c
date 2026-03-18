/*
 * XREFs of PipProcessStartPhase1 @ 0x140A0FEF0
 * Callers:
 *     PipProcessDevNodeTree @ 0x1408BA630 (PipProcessDevNodeTree.c)
 * Callees:
 *     McTemplateK0dz_EtwWriteTransfer @ 0x1404BD534 (McTemplateK0dz_EtwWriteTransfer.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x14072D5B8 (PpProfileBeginHardwareProfileTransition.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x14072D86C (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x14072D92C (PpProfileQueryHardwareProfileChange.c)
 *     PiDmaGuardProcessPreStart @ 0x140A0FFFC (PiDmaGuardProcessPreStart.c)
 *     IopUncacheInterfaceInformation @ 0x140A104B4 (IopUncacheInterfaceInformation.c)
 *     PnpStartDeviceNode @ 0x140A10740 (PnpStartDeviceNode.c)
 */

__int64 __fastcall PipProcessStartPhase1(__int64 MaxDataSize, unsigned int a2, __int64 a3)
{
  int v3; // edi
  int started; // edi
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0;
  v3 = a3;
  if ( (byte_140EEFD23 & 0x20) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      MaxDataSize,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Start,
      a3,
      1,
      *(const wchar_t **)(MaxDataSize + 48));
  if ( v3 && (*(_DWORD *)(MaxDataSize + 396) & 0x400000) != 0 )
  {
    started = -1073741267;
  }
  else
  {
    IopUncacheInterfaceInformation(*(_QWORD *)(MaxDataSize + 32), 1LL);
    if ( !*(_DWORD *)(MaxDataSize + 568)
      || (PpProfileBeginHardwareProfileTransition(0),
          PpProfileIncludeInHardwareProfileTransition(MaxDataSize, 2),
          started = PpProfileQueryHardwareProfileChange(0, 2, &v8, 0LL),
          started >= 0) )
    {
      PiDmaGuardProcessPreStart(MaxDataSize);
      started = PnpStartDeviceNode(MaxDataSize, 0LL, a2);
    }
  }
  if ( (byte_140EEFD23 & 0x20) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      MaxDataSize,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Stop,
      a3,
      1,
      *(const wchar_t **)(MaxDataSize + 48));
  return (unsigned int)started;
}

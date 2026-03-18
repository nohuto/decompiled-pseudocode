/*
 * XREFs of PipProcessRestartPhase1 @ 0x14072A30C
 * Callers:
 *     PipProcessDevNodeTree @ 0x1408355F8 (PipProcessDevNodeTree.c)
 * Callees:
 *     McTemplateK0dz_EtwWriteTransfer @ 0x140423408 (McTemplateK0dz_EtwWriteTransfer.c)
 *     PnpUnlockMountableDevice @ 0x1404C3480 (PnpUnlockMountableDevice.c)
 *     PipClearDevNodeFlags @ 0x1408350BC (PipClearDevNodeFlags.c)
 *     PnpStartDeviceNode @ 0x1409A168C (PnpStartDeviceNode.c)
 */

__int64 __fastcall PipProcessRestartPhase1(__int64 a1, unsigned int a2, __int64 a3)
{
  int v3; // esi
  unsigned int started; // esi

  v3 = a3;
  if ( (byte_140EEFA6B & 0x20) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      a1,
      (__int64)KMPnPEvt_ProcessDeviceRestart_Start,
      a3,
      1,
      *(const wchar_t **)(a1 + 48));
  if ( v3 && (*(_DWORD *)(a1 + 396) & 0x400000) != 0 )
  {
    started = -1073741267;
  }
  else
  {
    started = PnpStartDeviceNode(a1, 1LL, a2);
    if ( (*(_DWORD *)(a1 + 396) & 0x1000000) != 0 )
    {
      PnpUnlockMountableDevice(*(_QWORD *)(a1 + 32));
      PipClearDevNodeFlags(a1, 0x1000000LL);
    }
  }
  if ( (byte_140EEFA6B & 0x20) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      a1,
      (__int64)KMPnPEvt_ProcessDeviceRestart_Stop,
      a3,
      1,
      *(const wchar_t **)(a1 + 48));
  return started;
}

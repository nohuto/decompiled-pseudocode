/*
 * XREFs of PipDeviceRemovalCheckDeviceNodeState @ 0x1409BF8FC
 * Callers:
 *     PnpRequestDeviceRemovalWorker @ 0x1409BF7EC (PnpRequestDeviceRemovalWorker.c)
 * Callees:
 *     PipSetDevNodeState @ 0x14048D998 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1404DD2C0 (PipRestoreDevNodeState.c)
 */

char __fastcall PipDeviceRemovalCheckDeviceNodeState(__int64 a1, __int64 a2, char a3)
{
  char v4; // bl

  v4 = 1;
  if ( *(_DWORD *)(a1 + 300) == 784 )
    return 0;
  if ( *(_DWORD *)(a1 + 300) == 785 )
  {
    v4 = 0;
    if ( a3 )
    {
      PipRestoreDevNodeState(a1);
      PipSetDevNodeState(a1, 784);
    }
  }
  return v4;
}

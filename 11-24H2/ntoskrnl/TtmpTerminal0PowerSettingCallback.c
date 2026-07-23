/*
 * XREFs of TtmpTerminal0PowerSettingCallback @ 0x14076B210
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionLock @ 0x1406F53C8 (TtmpAcquireSessionLock.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1407701C4 (TtmiTerminalSetDisplayTimeouts.c)
 */

__int64 __fastcall TtmpTerminal0PowerSettingCallback(
        LPCGUID SettingGuid,
        int *Value,
        ULONG ValueLength,
        _DWORD *Context)
{
  __int64 v8; // rax
  int v9; // ecx

  TtmpAcquireSessionLock();
  if ( ValueLength == 4 && *((_BYTE *)Context + 240) && (Context[1] & 4) == 0 )
  {
    v8 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1;
    v9 = *Value;
    if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 )
      v8 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_VIDEO_DIM_TIMEOUT.Data4;
    if ( v8 )
      Context[67] = v9;
    else
      Context[66] = v9;
    TtmiTerminalSetDisplayTimeouts(
      Context,
      *((_QWORD *)Context + 4),
      (unsigned int)Context[66],
      (unsigned int)Context[67]);
  }
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
  return 0LL;
}

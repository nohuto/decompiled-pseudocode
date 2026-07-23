/*
 * XREFs of PopAllowAwayModeSettingCallback @ 0x14074B0C0
 * Callers:
 *     <none>
 * Callees:
 *     PopSetSystemState @ 0x1403E6898 (PopSetSystemState.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopAllowAwayModeSettingCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r9

  v6 = -1073741811;
  PopAcquirePolicyLock(a1, a2);
  v7 = *(_QWORD *)&GUID_ALLOW_AWAYMODE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_ALLOW_AWAYMODE.Data1 == *a1 )
    v7 = *(_QWORD *)GUID_ALLOW_AWAYMODE.Data4 - a1[1];
  if ( !v7 && a3 == 4 && a2 )
  {
    if ( *a2 )
    {
      byte_140F0B392 = 1;
    }
    else
    {
      byte_140F0B392 = 0;
      if ( byte_140F0B391 )
        PopSetSystemState(4LL, 7LL);
    }
    v6 = 0;
  }
  PopReleasePolicyLock();
  return v6;
}

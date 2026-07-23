/*
 * XREFs of TtmpWnfInactivityTimeoutCallback @ 0x140770950
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     TtmiLogInactivityTimoutUpdate @ 0x14076D3FC (TtmiLogInactivityTimoutUpdate.c)
 *     TtmiResetInactivityTimer @ 0x14076FCB0 (TtmiResetInactivityTimer.c)
 *     ExQueryWnfStateData @ 0x140A31340 (ExQueryWnfStateData.c)
 */

__int64 __fastcall TtmpWnfInactivityTimeoutCallback(__int64 a1)
{
  int v1; // ebx
  int v3; // [rsp+20h] [rbp-18h] BYREF
  int v4[5]; // [rsp+24h] [rbp-14h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  v4[0] = 0;
  v3 = 4;
  v1 = ExQueryWnfStateData(a1, &v5, v4, &v3);
  if ( v1 >= 0 )
  {
    if ( v3 == 4 )
    {
      ExAcquireResourceExclusiveLite(&TtmpTerminalInactivityLock, 1u);
      TtmpTerminalInactivityTimeout = -(__int64)(unsigned int)(10000 * v4[0]);
      TtmiLogInactivityTimoutUpdate(v4[0]);
      ExReleaseResourceLite(&TtmpTerminalInactivityLock);
      TtmiResetInactivityTimer(13);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v1;
}

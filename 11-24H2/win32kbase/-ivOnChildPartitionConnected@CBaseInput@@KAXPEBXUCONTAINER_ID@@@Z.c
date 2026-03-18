/*
 * XREFs of ?ivOnChildPartitionConnected@CBaseInput@@KAXPEBXUCONTAINER_ID@@@Z @ 0x140217330
 * Callers:
 *     <none>
 * Callees:
 *     ?ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z @ 0x140217214 (-ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z.c)
 */

void __fastcall CBaseInput::ivOnChildPartitionConnected(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(W32GetUserSessionState(a1) + 48LL * (int)a1 + 3144);
  if ( v3 )
    CBaseInput::ivInitialSendPnpForChildPartition(v3, a2);
}

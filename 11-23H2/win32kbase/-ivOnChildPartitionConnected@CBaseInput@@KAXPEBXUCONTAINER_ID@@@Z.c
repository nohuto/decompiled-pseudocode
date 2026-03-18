/*
 * XREFs of ?ivOnChildPartitionConnected@CBaseInput@@KAXPEBXUCONTAINER_ID@@@Z @ 0x1C01EE3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z @ 0x1C01EE290 (-ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z.c)
 */

void __fastcall CBaseInput::ivOnChildPartitionConnected(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx

  v4 = a2;
  v5 = *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 48LL * (int)a1 + 3304);
  if ( v5 )
    CBaseInput::ivInitialSendPnpForChildPartition(v5, v4);
}

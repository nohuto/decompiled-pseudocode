/*
 * XREFs of PopPowerAdapterIrpComplete @ 0x1405D5340
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PopBatteryQueueWork @ 0x14049F07C (PopBatteryQueueWork.c)
 *     PopPowerAdapterTraceFailure @ 0x14075AEC8 (PopPowerAdapterTraceFailure.c)
 */

__int64 __fastcall PopPowerAdapterIrpComplete(__int64 a1, __int64 a2, __int64 a3)
{
  bool v4; // bl
  int v5; // r8d
  int v6; // ebx

  v4 = 0;
  v5 = *(_DWORD *)(a2 + 48);
  if ( v5 != -1073741536 )
  {
    v4 = 1;
    if ( v5 >= 0 )
    {
      *(_DWORD *)(a3 + 128) = 1;
    }
    else
    {
      v6 = *(_DWORD *)(a3 + 128);
      PopPowerAdapterTraceFailure(a3, 2LL);
      v4 = v6 != 2;
    }
  }
  KeSetEvent((PRKEVENT)(a3 + 104), 0, 0);
  if ( v4 )
    PopBatteryQueueWork(1u);
  return 3221225494LL;
}

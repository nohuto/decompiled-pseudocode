/*
 * XREFs of StorPortAdapterPowerControl @ 0x140079F80
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x14001C7B0 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x140027690 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall StorPortAdapterPowerControl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v7; // rbx
  char IsAdapterControlSupported; // al
  __int64 v9; // r10
  unsigned int v10; // edx

  v7 = a1 + 376;
  IsAdapterControlSupported = RaidIsAdapterControlSupported(a1 + 376, 10);
  v9 = 0LL;
  if ( IsAdapterControlSupported )
  {
    v10 = RaCallMiniportAdapterControl(v7);
    v9 = MEMORY[0];
  }
  else
  {
    v10 = -1073741637;
  }
  *a7 = v9;
  return v10;
}

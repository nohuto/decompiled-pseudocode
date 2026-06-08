/*
 * XREFs of PctPlatformCounterState @ 0x140003460
 * Callers:
 *     ConfigureIntelEmu @ 0x14002B7E0 (ConfigureIntelEmu.c)
 *     PctDiscoverPlatformCtrs @ 0x14002B840 (PctDiscoverPlatformCtrs.c)
 *     PctEnumPlatfromCtr @ 0x140044E00 (PctEnumPlatfromCtr.c)
 *     PctGetPlatformCtr @ 0x140044E70 (PctGetPlatformCtr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PctPlatformCounterState(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // r9

  v2 = 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 1080) + 312LL);
  if ( v3 )
    return v3 + 40LL * a2;
  return v2;
}

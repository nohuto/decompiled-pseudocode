/*
 * XREFs of IvtDeleteDevice @ 0x140576070
 * Callers:
 *     HalpIvtCreateReservedDevice @ 0x1405761C4 (HalpIvtCreateReservedDevice.c)
 * Callees:
 *     ExtEnvFreeMemory @ 0x14055D8D0 (ExtEnvFreeMemory.c)
 *     IvtFreeScalableModePasidTables @ 0x14056BA90 (IvtFreeScalableModePasidTables.c)
 */

void __fastcall IvtDeleteDevice(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(a2 + 64);
  if ( v3 )
  {
    IvtFreeScalableModePasidTables(a1, v3);
    *(_QWORD *)(a2 + 64) = 0LL;
  }
  ExtEnvFreeMemory(a1, *(_QWORD *)(a2 + 56));
  ExtEnvFreeMemory(v4, a2);
}

/*
 * XREFs of IvtDeleteDevice @ 0x140578BE0
 * Callers:
 *     HalpIvtCreateReservedDevice @ 0x140578D34 (HalpIvtCreateReservedDevice.c)
 * Callees:
 *     ExtEnvFreeMemory @ 0x14055FCA0 (ExtEnvFreeMemory.c)
 *     IvtFreeScalableModePasidTables @ 0x14056E600 (IvtFreeScalableModePasidTables.c)
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

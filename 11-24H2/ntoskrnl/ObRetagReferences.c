/*
 * XREFs of ObRetagReferences @ 0x1409D69F0
 * Callers:
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 *     SepUpdateSiloInClientSecurity @ 0x140ABC0A8 (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 */

char __fastcall ObRetagReferences(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  char result; // al

  if ( ObpTraceFlags )
  {
    v4 = a1 - 48;
    ObpPushStackInfo(a1 - 48, 0, 1u, 0x746C6644u);
    return ObpPushStackInfo(v4, 1, 1u, a3);
  }
  return result;
}

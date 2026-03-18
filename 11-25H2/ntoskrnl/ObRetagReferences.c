/*
 * XREFs of ObRetagReferences @ 0x1409C0A60
 * Callers:
 *     SepUpdateSiloInClientSecurity @ 0x1409B977C (SepUpdateSiloInClientSecurity.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
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

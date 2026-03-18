/*
 * XREFs of PnprGetStackLimits @ 0x1405A7AEC
 * Callers:
 *     PnprRecopyMirrorPages @ 0x1405A7E3C (PnprRecopyMirrorPages.c)
 *     PnprQuiesceProcessorDpc @ 0x140B54710 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x140259B80 (KeQueryCurrentStackInformation.c)
 *     KeGetCurrentStackPointer @ 0x1406AA390 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall PnprGetStackLimits(_QWORD *a1, __int64 a2)
{
  char v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  *a1 = KeGetCurrentStackPointer(a1, a2);
  return KeQueryCurrentStackInformation((__int64)&v4, (__int64)&v5, a2);
}

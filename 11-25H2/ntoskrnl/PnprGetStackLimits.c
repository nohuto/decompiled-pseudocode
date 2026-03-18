/*
 * XREFs of PnprGetStackLimits @ 0x1405A42DC
 * Callers:
 *     PnprRecopyMirrorPages @ 0x1405A462C (PnprRecopyMirrorPages.c)
 *     PnprQuiesceProcessorDpc @ 0x140B44710 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x1402571A0 (KeQueryCurrentStackInformation.c)
 *     KeGetCurrentStackPointer @ 0x14069F0C0 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall PnprGetStackLimits(_QWORD *a1, __int64 a2)
{
  char v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  *a1 = KeGetCurrentStackPointer(a1, a2);
  return KeQueryCurrentStackInformation((__int64)&v4, (__int64)&v5, a2);
}

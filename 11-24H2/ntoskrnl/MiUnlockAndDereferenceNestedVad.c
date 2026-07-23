/*
 * XREFs of MiUnlockAndDereferenceNestedVad @ 0x1404C7270
 * Callers:
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiDereferenceVad @ 0x140290A60 (MiDereferenceVad.c)
 *     MiUnlockNestedVad @ 0x140A15178 (MiUnlockNestedVad.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceNestedVad(PVOID P)
{
  BOOL v2; // ebx

  v2 = MiDereferenceVad((__int64)P);
  MiUnlockNestedVad(P);
  if ( v2 )
    ExFreePoolWithTag(P, 0);
}

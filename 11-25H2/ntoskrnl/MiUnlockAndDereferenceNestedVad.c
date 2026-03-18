/*
 * XREFs of MiUnlockAndDereferenceNestedVad @ 0x1404CE0C0
 * Callers:
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1409012DC (MiReserveUserMemory.c)
 * Callees:
 *     MiDereferenceVad @ 0x1402A8080 (MiDereferenceVad.c)
 *     MiUnlockNestedVad @ 0x140A15348 (MiUnlockNestedVad.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceNestedVad(PVOID P)
{
  BOOL v2; // ebx

  v2 = MiDereferenceVad((__int64)P);
  MiUnlockNestedVad(P);
  if ( v2 )
    ExFreePoolWithTag(P, 0);
}

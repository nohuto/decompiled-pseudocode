/*
 * XREFs of MiUnlockAndDereferenceNestedVad @ 0x1404CDEA0
 * Callers:
 *     MiReserveUserMemory @ 0x1408DFE98 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiDereferenceVad @ 0x140260450 (MiDereferenceVad.c)
 *     MiUnlockNestedVad @ 0x140A20078 (MiUnlockNestedVad.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceNestedVad(PVOID P)
{
  BOOL v2; // ebx

  v2 = MiDereferenceVad((__int64)P);
  MiUnlockNestedVad(P);
  if ( v2 )
    ExFreePoolWithTag(P, 0);
}

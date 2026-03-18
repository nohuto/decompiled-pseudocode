/*
 * XREFs of MiRelocateAmount @ 0x140A7FDB4
 * Callers:
 *     MmGetSectionInformation @ 0x14093C550 (MmGetSectionInformation.c)
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiRelocateAmount(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 32);
  if ( result )
    return *(_QWORD *)(result + 40);
  return result;
}

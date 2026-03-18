/*
 * XREFs of MiRelocateAmount @ 0x140A7C77C
 * Callers:
 *     MmGetSectionInformation @ 0x1408B6660 (MmGetSectionInformation.c)
 *     MmLoadSystemImageEx @ 0x1409B0468 (MmLoadSystemImageEx.c)
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

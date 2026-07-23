/*
 * XREFs of MiRelocateAmount @ 0x140A7A814
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 *     MmGetSectionInformation @ 0x1409E9C60 (MmGetSectionInformation.c)
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

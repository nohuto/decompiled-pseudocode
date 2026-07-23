/*
 * XREFs of PsRevertToUserPagePriorityThread @ 0x14044F424
 * Callers:
 *     MiValidateSectionCreate @ 0x14093C5D8 (MiValidateSectionCreate.c)
 *     MiRelocateImage @ 0x140AEA57C (MiRelocateImage.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 */

int __fastcall PsRevertToUserPagePriorityThread(__int64 a1, int a2)
{
  _QWORD *v2; // rax

  --*(_WORD *)(a1 + 486);
  if ( a2 == -1 )
    LODWORD(v2) = *(_DWORD *)(a1 + 1448) & 0xFFFFF0FF;
  else
    LODWORD(v2) = (a2 << 9) | *(_DWORD *)(a1 + 1448) & 0xFFFFF1FF;
  *(_DWORD *)(a1 + 1448) = (_DWORD)v2;
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v2 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v2 != v2 )
      LODWORD(v2) = KiCheckForKernelApcDelivery();
  }
  return (int)v2;
}

/*
 * XREFs of PsRevertToUserPagePriorityThread @ 0x140459FD8
 * Callers:
 *     MiRelocateImage @ 0x1408F5784 (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x140957B50 (MiValidateSectionCreate.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 */

int __fastcall PsRevertToUserPagePriorityThread(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax

  --*(_WORD *)(a1 + 486);
  if ( (_DWORD)a2 == -1 )
  {
    LODWORD(v2) = *(_DWORD *)(a1 + 1448) & 0xFFFFF0FF;
  }
  else
  {
    a2 = (unsigned int)((_DWORD)a2 << 9);
    LODWORD(v2) = a2 | *(_DWORD *)(a1 + 1448) & 0xFFFFF1FF;
  }
  *(_DWORD *)(a1 + 1448) = (_DWORD)v2;
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v2 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v2 != v2 )
      LODWORD(v2) = KiCheckForKernelApcDelivery(a1, a2);
  }
  return (int)v2;
}

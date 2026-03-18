/*
 * XREFs of PsSetSystemPagePriorityThread @ 0x1404529F0
 * Callers:
 *     MiRelocateImage @ 0x1408F5784 (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x140957B50 (MiValidateSectionCreate.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall PsSetSystemPagePriorityThread(__int64 a1, int a2)
{
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  unsigned int v7; // eax
  _QWORD *v9; // rcx

  --*(_WORD *)(a1 + 486);
  v3 = (unsigned int)(a2 << 9);
  v4 = *(_DWORD *)(a1 + 1448);
  v5 = *(unsigned __int8 *)(a1 + 1449);
  if ( (v5 & 1) != 0 )
  {
    v6 = (v5 >> 1) & 7;
    v7 = v4 & 0xFFFFF1FF;
  }
  else
  {
    v6 = -1;
    v7 = v4 | 0x100;
  }
  *(_DWORD *)(a1 + 1448) = v3 | v7;
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v9 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v9 != v9 )
      KiCheckForKernelApcDelivery((__int64)v9, v3);
  }
  return v6;
}

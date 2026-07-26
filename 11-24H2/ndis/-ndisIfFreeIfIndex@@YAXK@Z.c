/*
 * XREFs of ?ndisIfFreeIfIndex@@YAXK@Z @ 0x14006C710
 * Callers:
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1400110D0 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ndisIfRegisterInterfaceEx @ 0x140087DB0 (ndisIfRegisterInterfaceEx.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisIfFreeIfIndex(unsigned int a1)
{
  int v1; // eax
  _RTL_BITMAP_EX *v2; // rdi
  ULONG64 SizeOfBitMap; // rdx
  unsigned int v4; // ecx
  unsigned int v5; // ebx

  if ( a1 < *(_DWORD *)dword_14011D538 )
  {
    v1 = dword_14011CAC0;
    v2 = (_RTL_BITMAP_EX *)&xmmword_14011CAC8;
    SizeOfBitMap = xmmword_14011CAC8;
  }
  else
  {
    v1 = dword_14011CAD8;
    v2 = &BitMapHeader;
    SizeOfBitMap = BitMapHeader.SizeOfBitMap;
  }
  v4 = a1 - v1;
  v5 = v4;
  if ( v4 < SizeOfBitMap )
  {
    if ( RtlTestBitEx(v2, v4) )
      RtlClearBitEx(v2, v5);
  }
}

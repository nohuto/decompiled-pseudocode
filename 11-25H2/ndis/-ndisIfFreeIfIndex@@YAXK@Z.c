/*
 * XREFs of ?ndisIfFreeIfIndex@@YAXK@Z @ 0x140088840
 * Callers:
 *     ndisIfRegisterInterfaceEx @ 0x1400953D0 (ndisIfRegisterInterfaceEx.c)
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

  if ( a1 < *(_DWORD *)dword_1401275E8 )
  {
    v1 = dword_140126B60;
    v2 = (_RTL_BITMAP_EX *)&xmmword_140126B68;
    SizeOfBitMap = xmmword_140126B68;
  }
  else
  {
    v1 = dword_140126B78;
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

/*
 * XREFs of HalpApic1WriteIcr @ 0x14041F310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpApic1WriteIcr(int a1, int a2)
{
  __int64 result; // rax

  while ( (*(_DWORD *)(HalpLocalApic + 768) & 0x1000) != 0 )
    ;
  result = HalpLocalApic;
  if ( (a2 & 0xC0000) == 0 )
  {
    *(_DWORD *)(HalpLocalApic + 784) = a1;
    result = HalpLocalApic;
  }
  *(_DWORD *)(result + 768) = a2;
  return result;
}

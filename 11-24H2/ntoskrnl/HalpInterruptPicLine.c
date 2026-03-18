/*
 * XREFs of HalpInterruptPicLine @ 0x1404B1DAC
 * Callers:
 *     HalpInterruptMaskAcpi @ 0x140B6C718 (HalpInterruptMaskAcpi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInterruptPicLine(_DWORD *a1, unsigned int a2)
{
  __int64 result; // rax

  *a1 = 45057 - (a2 < 8);
  result = a2 - 8;
  if ( a2 >= 8 )
    a2 -= 8;
  a1[1] = a2;
  return result;
}

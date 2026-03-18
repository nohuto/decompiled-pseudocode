/*
 * XREFs of MiColorSetChannel @ 0x14044FB5C
 * Callers:
 *     MiGetHugeRange @ 0x1406645A4 (MiGetHugeRange.c)
 * Callees:
 *     MiAssignDefaultChannel @ 0x140222A5C (MiAssignDefaultChannel.c)
 */

__int64 __fastcall MiColorSetChannel(_DWORD *a1, unsigned __int8 a2)
{
  _DWORD *v2; // r11
  __int64 result; // rax

  v2 = a1;
  if ( a2 == 2 )
    a2 = MiAssignDefaultChannel((*a1 >> 9) & 0x3F);
  result = (unsigned int)*v2;
  *v2 = result ^ ((unsigned __int16)result ^ (unsigned __int16)(a2 << 8)) & 0x100;
  return result;
}

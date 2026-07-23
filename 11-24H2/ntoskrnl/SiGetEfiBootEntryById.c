/*
 * XREFs of SiGetEfiBootEntryById @ 0x140816A68
 * Callers:
 *     SiGetEspFromFirmware @ 0x140816EE0 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall SiGetEfiBootEntryById(unsigned int *a1, int a2)
{
  unsigned int *result; // rax
  __int64 v3; // rax

  while ( 1 )
  {
    result = a1 + 1;
    if ( a1[3] == a2 )
      break;
    v3 = *a1;
    if ( !(_DWORD)v3 )
      return 0LL;
    a1 = (unsigned int *)((char *)a1 + v3);
  }
  return result;
}

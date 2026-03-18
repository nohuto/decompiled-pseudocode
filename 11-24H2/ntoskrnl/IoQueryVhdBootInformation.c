/*
 * XREFs of IoQueryVhdBootInformation @ 0x140829CBC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

__int64 __fastcall IoQueryVhdBootInformation(__int64 a1, void *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  int v6; // edi

  v5 = 0;
  *a4 = 0;
  v6 = dword_140E0F108;
  if ( a3 < (unsigned int)dword_140E0F108 )
    v5 = -1073741789;
  else
    memmove(a2, off_140E0A5E8, (unsigned int)dword_140E0F108);
  *a4 = v6;
  return v5;
}

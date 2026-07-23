/*
 * XREFs of MiBytesToMapSystemImage @ 0x140A55544
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140A5536C (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 *     MiSelectImageBase @ 0x140AEB020 (MiSelectImageBase.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiBytesToMapSystemImage(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax
  unsigned __int64 result; // rax

  v1 = (a1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v1 < a1 )
    return 0LL;
  v2 = (unsigned int)(dword_140E375EC + dword_140E375F0) + v1;
  if ( v2 < a1 )
    return 0LL;
  result = (unsigned int)(dword_140E2D878 << 12) + v2;
  if ( result < a1 )
    return 0LL;
  return result;
}

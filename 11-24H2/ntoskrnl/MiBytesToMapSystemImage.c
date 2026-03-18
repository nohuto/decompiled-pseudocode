/*
 * XREFs of MiBytesToMapSystemImage @ 0x140A5E6FC
 * Callers:
 *     MiSelectImageBase @ 0x1408F67EC (MiSelectImageBase.c)
 *     MiGetSystemAddressForImage @ 0x140A5E524 (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
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
  v2 = (unsigned int)(dword_140E374AC + dword_140E374B0) + v1;
  if ( v2 < a1 )
    return 0LL;
  result = (unsigned int)(dword_140E2D738 << 12) + v2;
  if ( result < a1 )
    return 0LL;
  return result;
}

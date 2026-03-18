/*
 * XREFs of ?pAllocateAndInitializePFT@@YAPEAVPFT@@I@Z @ 0x140229C38
 * Callers:
 *     ?bInitPrivatePFT@@YAHXZ @ 0x140264E30 (-bInitPrivatePFT@@YAHXZ.c)
 *     bInitFontTables @ 0x1403EB0E0 (bInitFontTables.c)
 * Callees:
 *     PALLOCMEM @ 0x1400FEC9C (PALLOCMEM.c)
 */

struct PFT *__fastcall pAllocateAndInitializePFT(int a1)
{
  struct PFT *result; // rax

  result = (struct PFT *)PALLOCMEM(8 * a1 + 40, 1952870471LL);
  if ( result )
  {
    *((_DWORD *)result + 7) = 0;
    *((_DWORD *)result + 8) = 0;
    *((_DWORD *)result + 6) = a1;
  }
  return result;
}

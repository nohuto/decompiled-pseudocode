/*
 * XREFs of NtGdiHT_Get8BPPMaskPalette @ 0x14033AB30
 * Callers:
 *     <none>
 * Callees:
 *     ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1400DC114 (-bSafeReadBits@@YAHPEAX0K@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1400DC5D4 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     PALLOCNOZ @ 0x140125A4C (PALLOCNOZ.c)
 *     HT_Get8BPPMaskPalette @ 0x1401267A0 (HT_Get8BPPMaskPalette.c)
 */

__int64 __fastcall NtGdiHT_Get8BPPMaskPalette(
        char *a1,
        BOOL Use8BPPMaskPal,
        BYTE CMYMask,
        USHORT a4,
        USHORT GreenGamma,
        USHORT BlueGamma)
{
  unsigned int v10; // eax
  unsigned int v11; // edi
  struct tagPALETTEENTRY *v12; // rbx
  unsigned int v13; // esi
  struct tagPALETTEENTRY *v14; // rax

  v10 = HT_Get8BPPMaskPalette(0LL, Use8BPPMaskPal, CMYMask, a4, GreenGamma, BlueGamma);
  v11 = v10;
  if ( a1 )
  {
    if ( (v12 = 0LL, v13 = 4 * v10, (int)(4 * v10) > 0)
      && v10 <= 0x9C4000
      && (v14 = (struct tagPALETTEENTRY *)PALLOCNOZ(v13, 1886221639LL), (v12 = v14) != 0LL)
      && (unsigned int)bSafeReadBits(v14, a1, v13)
      && (v11 = HT_Get8BPPMaskPalette(v12, Use8BPPMaskPal, CMYMask, a4, GreenGamma, BlueGamma)) != 0
      && (unsigned int)bSafeCopyBits(a1, v12, v13)
      || (v11 = 0, v12) )
    {
      Win32FreePool(v12);
    }
  }
  return v11;
}

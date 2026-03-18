/*
 * XREFs of NtGdiHT_Get8BPPFormatPalette @ 0x14033AA80
 * Callers:
 *     <none>
 * Callees:
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1400DC5D4 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     PALLOCNOZ @ 0x140125A4C (PALLOCNOZ.c)
 *     HT_Get8BPPFormatPalette @ 0x140213FD0 (HT_Get8BPPFormatPalette.c)
 */

__int64 __fastcall NtGdiHT_Get8BPPFormatPalette(char *a1, USHORT a2, USHORT a3, USHORT a4)
{
  unsigned int v4; // ebx
  struct tagPALETTEENTRY *v9; // rax
  struct tagPALETTEENTRY *v10; // rdi
  LONG v11; // ebx

  v4 = 0;
  if ( !a1 )
    return 216LL;
  v9 = (struct tagPALETTEENTRY *)PALLOCNOZ(0x360u, 1886221639LL);
  v10 = v9;
  if ( v9 )
  {
    v11 = HT_Get8BPPFormatPalette(v9, a2, a3, a4);
    v4 = (unsigned int)bSafeCopyBits(a1, v10, 0x360u) != 0 ? v11 : 0;
    Win32FreePool(v10);
  }
  return v4;
}

/*
 * XREFs of SymCryptScsTableLoad @ 0x140536B8C
 * Callers:
 *     SymCryptModExpWindowed @ 0x140531D78 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptScsTableLoad128Xmm @ 0x140536BB4 (SymCryptScsTableLoad128Xmm.c)
 *     SymCryptScsTableLoadC @ 0x140536D28 (SymCryptScsTableLoadC.c)
 */

__int64 __fastcall SymCryptScsTableLoad(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 12) == 128 )
    return SymCryptScsTableLoad128Xmm();
  else
    return SymCryptScsTableLoadC();
}

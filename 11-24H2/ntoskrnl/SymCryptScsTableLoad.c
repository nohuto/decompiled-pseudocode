/*
 * XREFs of SymCryptScsTableLoad @ 0x14053934C
 * Callers:
 *     SymCryptModExpWindowed @ 0x1405378D8 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptScsTableLoad128Xmm @ 0x140539374 (SymCryptScsTableLoad128Xmm.c)
 *     SymCryptScsTableLoadC @ 0x1405394E8 (SymCryptScsTableLoadC.c)
 */

__int64 __fastcall SymCryptScsTableLoad(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 12) == 128 )
    return SymCryptScsTableLoad128Xmm();
  else
    return SymCryptScsTableLoadC();
}

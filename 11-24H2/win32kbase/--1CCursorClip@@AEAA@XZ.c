/*
 * XREFs of ??1CCursorClip@@AEAA@XZ @ 0x1400D0AC0
 * Callers:
 *     ?UnInitialize@CCursorClip@@SAJXZ @ 0x1400D0A04 (-UnInitialize@CCursorClip@@SAJXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?Cleanup@DeadzoneJumping@CCursorClip@@AEAAXXZ @ 0x1400D0AF4 (-Cleanup@DeadzoneJumping@CCursorClip@@AEAAXXZ.c)
 */

void __fastcall CCursorClip::~CCursorClip(CCursorClip *this)
{
  char *v2; // rcx

  v2 = (char *)*((_QWORD *)this + 32);
  if ( v2 )
    GreDeleteFastMutex(v2);
  CCursorClip::DeadzoneJumping::Cleanup((CCursorClip *)((char *)this + 272));
}

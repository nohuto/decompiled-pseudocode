/*
 * XREFs of ?Stop@CScrollAnimation@@QEAAJXZ @ 0x1800F06A4
 * Callers:
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x1800F04A8 (--1CScrollAnimation@@UEAA@XZ.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1800F0500 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x1800F769C (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x180060420 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 */

__int64 __fastcall CScrollAnimation::Stop(CScrollAnimation *this)
{
  *((_BYTE *)this + 224) &= ~1u;
  if ( (*((_BYTE *)this + 352) & 1) != 0 )
  {
    CBaseExpression::EnsureExpressionIsUnregistered(this);
    *((_BYTE *)this + 352) &= ~1u;
    *((_DWORD *)this + 57) = 16;
  }
  return 0LL;
}

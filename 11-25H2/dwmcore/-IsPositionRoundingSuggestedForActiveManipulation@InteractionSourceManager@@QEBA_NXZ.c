/*
 * XREFs of ?IsPositionRoundingSuggestedForActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1800F4594
 * Callers:
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x1800F96F4 (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18003E984 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x1800F3D84 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

char __fastcall InteractionSourceManager::IsPositionRoundingSuggestedForActiveManipulation(
        InteractionSourceManager *this)
{
  char HasActiveManipulation; // al
  InteractionSourceManager *v2; // rcx
  char v3; // r9
  InteractionSourceManager *v4; // rcx
  InteractionSourceManager *v6; // rcx
  InteractionSourceManager *v7; // rcx

  HasActiveManipulation = InteractionSourceManager::HasActiveManipulation(this);
  v3 = 0;
  if ( HasActiveManipulation
    && COERCE_FLOAT(*((_DWORD *)InteractionSourceManager::TryGetActiveManipulation(v2) + 100) & _xmm) < 0.1
    && COERCE_FLOAT(*((_DWORD *)InteractionSourceManager::TryGetActiveManipulation(v4) + 101) & _xmm) < 0.1
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)InteractionSourceManager::TryGetActiveManipulation(v6) + 103) - 0.0) & _xmm) <= 0.0000011920929
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)InteractionSourceManager::TryGetActiveManipulation(v7) + 104) - 0.0) & _xmm) <= 0.0000011920929 )
  {
    return 1;
  }
  return v3;
}

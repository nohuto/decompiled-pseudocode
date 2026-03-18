/*
 * XREFs of ?CompleteIndependentFlipNotifyToken@CFlipToken@@UEAA_NXZ @ 0x14004CBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CFlipToken::CompleteIndependentFlipNotifyToken(CFlipToken *this)
{
  if ( !*((_BYTE *)this + 579) )
    return 0;
  *((_BYTE *)this + 583) = 1;
  return 1;
}

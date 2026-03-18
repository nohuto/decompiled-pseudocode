/*
 * XREFs of ?PostProcessInput@CHidInput@@EEAAJXZ @ 0x1400F7C30
 * Callers:
 *     <none>
 * Callees:
 *     InitiatePTPMouseProcessing @ 0x1400F7C60 (InitiatePTPMouseProcessing.c)
 */

__int64 __fastcall CHidInput::PostProcessInput(CHidInput *this)
{
  if ( *((_BYTE *)this + 1344) )
  {
    *((_BYTE *)this + 1344) = 0;
    InitiatePTPMouseProcessing();
  }
  return 0LL;
}

/*
 * XREFs of ?PostProcessInput@CHidInput@@EEAAJXZ @ 0x1C00E5690
 * Callers:
 *     <none>
 * Callees:
 *     InitiatePTPMouseProcessing @ 0x1C01E83B0 (InitiatePTPMouseProcessing.c)
 */

__int64 __fastcall CHidInput::PostProcessInput(CHidInput *this)
{
  if ( *((_BYTE *)this + 1360) )
  {
    *((_BYTE *)this + 1360) = 0;
    InitiatePTPMouseProcessing();
  }
  return 0LL;
}

/*
 * XREFs of ?IsBitSet@@YAHPEAEI@Z @ 0x1C009FCAC
 * Callers:
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C003A44C (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 *     GetGestureConfigSettings @ 0x1C0203D20 (GetGestureConfigSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsBitSet(unsigned __int8 *a1, unsigned int a2)
{
  if ( a1 )
    return a1[(unsigned __int64)a2 >> 3] & (unsigned int)(1 << (a2 & 7));
  else
    return 0LL;
}

/*
 * XREFs of PpmIdleUnlockProcessor @ 0x1405CC460
 * Callers:
 *     PpmUnlockProcessors @ 0x140371990 (PpmUnlockProcessors.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmIdleUnlockProcessor(unsigned __int32 *a1)
{
  unsigned __int32 v2; // eax
  unsigned __int32 v3; // r9d
  signed __int32 v4; // ecx

  _m_prefetchw(a1);
  v2 = *a1;
  do
  {
    v3 = v2;
    v4 = (((int)(v2 << 8) >> 8) - 1) ^ (v2 ^ (((int)(v2 << 8) >> 8) - 1)) & 0xFF000000;
    if ( (v4 & 0xFFFFFF) == 0 )
    {
      if ( HIBYTE(v2) == 5 )
      {
        v4 = v4 & 0xFFFFFF | 0x4000000;
      }
      else if ( HIBYTE(v2) == 7 )
      {
        v4 = v4 & 0xFFFFFF | 0x6000000;
      }
    }
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v4, v2);
  }
  while ( v2 != v3 );
  return HIBYTE(v4);
}

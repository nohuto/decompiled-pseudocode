/*
 * XREFs of KiSetDpcRequestFlag @ 0x1402AC800
 * Callers:
 *     KiInsertQueueDpc @ 0x140284920 (KiInsertQueueDpc.c)
 *     KiUpdateRunTime @ 0x1402AA8E0 (KiUpdateRunTime.c)
 *     KiCheckForTimerExpiration @ 0x1402AB5D0 (KiCheckForTimerExpiration.c)
 *     KiRequestTimer2Expiration @ 0x14040F090 (KiRequestTimer2Expiration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSetDpcRequestFlag(unsigned __int16 *a1, __int16 a2)
{
  unsigned int v4; // r8d
  unsigned __int16 v5; // cx
  int v6; // r9d
  unsigned __int64 v7; // rax
  unsigned int v8; // r9d
  unsigned int i; // eax
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // tt

  v4 = 0;
  _m_prefetchw(a1);
  v5 = *a1;
  if ( v5 != _InterlockedCompareExchange16((volatile signed __int16 *)a1, a2 | v5, v5) )
  {
    while ( 1 )
    {
      v6 = v4;
      if ( v4 )
        break;
      if ( (_DWORD)KeNumberProcessors_0 != 1 )
      {
        v6 = 64;
LABEL_5:
        v4 = v6;
        v7 = __rdtsc();
        v8 = 10 * (((v6 - 1) & (unsigned int)v7) + v6) / MEMORY[0xFFFFF780000002D6];
        for ( i = 0; i < v8; ++i )
          _mm_pause();
      }
      _m_prefetchw(a1);
      v10 = *a1;
      v11 = *a1;
      if ( v11 == _InterlockedCompareExchange16((volatile signed __int16 *)a1, a2 | v10, v10) )
        return v10;
    }
    if ( v4 < 0x1FFF )
      v6 = 2 * v4;
    goto LABEL_5;
  }
  return v5;
}

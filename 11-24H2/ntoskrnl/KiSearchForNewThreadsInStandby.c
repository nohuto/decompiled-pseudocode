/*
 * XREFs of KiSearchForNewThreadsInStandby @ 0x1402A3718
 * Callers:
 *     KiSearchForNewThreadsOnTarget @ 0x1403BD660 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     KiAttemptToStealStandbyThread @ 0x1402A6884 (KiAttemptToStealStandbyThread.c)
 *     KiMayStealStandbyThread @ 0x1402A6F50 (KiMayStealStandbyThread.c)
 */

PVOID __fastcall KiSearchForNewThreadsInStandby(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID result; // rax
  __int64 v9; // rbx
  char v10; // cl
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi

  result = (PVOID)KiMayStealStandbyThread(a2, 0LL, 0LL);
  if ( (_BYTE)result )
  {
    v9 = a4 & *(_QWORD *)(a3 + 8);
    while ( v9 )
    {
      v10 = *(_BYTE *)(a1 + 209);
      _BitScanForward64(&v11, __ROR8__(v9, v10));
      LODWORD(v11) = (v10 + (_BYTE)v11) & 0x3F;
      v9 &= ~(1LL << v11);
      result = qword_140F22998;
      v12 = *((unsigned int *)qword_140F22998 + 64 * *(unsigned __int16 *)(a3 + 136) + (unsigned int)v11);
      v13 = KiProcessorBlock[v12];
      if ( a2 != v13 )
      {
        result = (PVOID)KiMayStealStandbyThread(a2, KiProcessorBlock[v12], 0LL);
        if ( (_BYTE)result )
        {
          result = (PVOID)KiAttemptToStealStandbyThread(a1, a2, v13);
          if ( (_BYTE)result )
            break;
        }
      }
    }
  }
  return result;
}

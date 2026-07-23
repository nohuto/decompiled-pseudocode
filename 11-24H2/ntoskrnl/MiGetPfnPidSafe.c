/*
 * XREFs of MiGetPfnPidSafe @ 0x140313734
 * Callers:
 *     MiIdentifyPfn @ 0x1403113F0 (MiIdentifyPfn.c)
 *     MiLogMdlRangeEvent @ 0x140672F78 (MiLogMdlRangeEvent.c)
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x14042D1D0 (MiGetLeafPfnBuddy.c)
 */

__int64 __fastcall MiGetPfnPidSafe(__int64 a1, unsigned int a2)
{
  __int64 v2; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 LeafPfnBuddy; // rax

  v2 = a2;
  v4 = (a2 >> 1) & 1;
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) == 0 )
  {
    if ( (v2 & 1) != 0 )
    {
      LeafPfnBuddy = MiGetLeafPfnBuddy(a1, v4, a1, v2);
    }
    else
    {
      v5 = *(_QWORD *)a1 >> 1;
      LODWORD(v5) = v5 & 0x7FFFFFFF;
      v6 = v5 | ((unsigned __int64)(*(_DWORD *)(a1 + 36) & 0x3FF0000) << 15);
      if ( v6 )
      {
        if ( (unsigned __int64)(v6 - 0x10000000000LL) <= 1 )
        {
          if ( v6 == 0x10000000001LL )
          {
            if ( PsInitialSystemProcess )
              v6 = (__int64)PsInitialSystemProcess;
          }
        }
        else
        {
          v6 = qword_140E38BF8 + 16 * (v6 - 1);
        }
        return *(unsigned int *)(v6 + 464);
      }
      LeafPfnBuddy = 0LL;
    }
    v6 = LeafPfnBuddy;
    return *(unsigned int *)(v6 + 464);
  }
  return 0LL;
}

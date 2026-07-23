/*
 * XREFs of CmpIsKcbLockAllowed @ 0x140A0AC40
 * Callers:
 *     CmpFindSubkeyInHashByChildCell @ 0x14083F9C0 (CmpFindSubkeyInHashByChildCell.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpIsKcbLockAllowed(unsigned __int64 a1, unsigned __int64 a2, _BYTE *a3)
{
  unsigned int v3; // eax
  unsigned int v4; // r8d
  __int16 v6; // r8
  __int16 v7; // ax
  unsigned __int64 v8; // rax

  *a3 = 0;
  if ( a1 != a2 )
  {
    v3 = (*(_DWORD *)(a1 + 8) >> 21) & 0x3FF;
    v4 = (*(_DWORD *)(a2 + 8) >> 21) & 0x3FF;
    if ( v3 <= v4 )
    {
      if ( v3 >= v4 )
      {
        v6 = *(_WORD *)(a1 + 186);
        if ( (v6 & 4) != 0 && (*(_DWORD *)(a2 + 184) & 0x20000) != 0 )
          return a1 == a2;
        if ( (v6 & 2) == 0 || (*(_DWORD *)(a2 + 184) & 0x40000) == 0 )
        {
          v7 = *(_WORD *)(a1 + 66);
          if ( v7 > *(__int16 *)(a2 + 66) )
            return a1 == a2;
          if ( v7 >= *(__int16 *)(a2 + 66) )
          {
            v8 = a2;
            if ( a1 > a2 )
              v8 = a1;
            a1 = v8;
            return a1 == a2;
          }
        }
      }
      a1 = a2;
    }
    return a1 == a2;
  }
  *a3 = 1;
  return 1;
}

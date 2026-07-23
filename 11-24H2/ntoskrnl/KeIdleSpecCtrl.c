/*
 * XREFs of KeIdleSpecCtrl @ 0x1404DE260
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140371030 (PpmIdleExecuteTransition.c)
 *     PoIdle @ 0x140441770 (PoIdle.c)
 *     KiExecuteSmtIsolationThread @ 0x1405C01A0 (KiExecuteSmtIsolationThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIdleSpecCtrl(__int64 a1, int a2, _DWORD *a3, char a4)
{
  unsigned __int16 v6; // r9
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // r8
  unsigned __int16 v9; // ax
  __int64 v10; // rdx
  signed __int16 v11; // tt
  __int64 result; // rax
  __int64 v13; // rdx
  signed __int16 v14; // tt
  __int16 v15; // cx
  int v16; // [rsp+10h] [rbp+10h]

  if ( a2 )
  {
    v6 = 0;
    if ( (*(_BYTE *)(a1 + 1756) & 1) != 0 )
    {
      v7 = *(_WORD *)(a1 + 1766);
      if ( v7 )
      {
        *(_WORD *)(a1 + 1752) |= 1u;
        v6 = v7;
      }
    }
    _m_prefetchw((const void *)(a1 + 1760));
    v8 = *(_WORD *)(a1 + 1760);
    if ( (v8 & 4) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 1752) & 1) != 0 )
      {
        v9 = *(_WORD *)(a1 + 1766);
        if ( (v9 & 3) == 0 )
        {
          v6 |= 2u;
          *(_WORD *)(a1 + 1766) = v9 | 2;
          __writemsr(0x48u, v9 | 2u);
        }
      }
      _InterlockedOr16((volatile signed __int16 *)(a1 + 1760), 2u);
      v10 = *(_QWORD *)(a1 + 11696);
      _m_prefetchw((const void *)(v10 + 1760));
      do
        v11 = *(_WORD *)(v10 + 1760);
      while ( v11 != _InterlockedCompareExchange16((volatile signed __int16 *)(v10 + 1760), v11 & 0xFFE4 | 0xA, v11) );
    }
    v16 = v6;
    if ( (*(_BYTE *)(a1 + 1756) & 0x40) != 0 )
      HIWORD(v16) = *(_WORD *)(a1 + 44714);
    result = v8;
    *a3 = v16;
  }
  else
  {
    if ( (a4 & 4) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 11696);
      _m_prefetchw((const void *)(v13 + 1760));
      do
        v14 = *(_WORD *)(v13 + 1760);
      while ( v14 != _InterlockedCompareExchange16((volatile signed __int16 *)(v13 + 1760), v14 & 0xFFF5 | 2, v14) );
      if ( (*(_WORD *)(a1 + 1760) & 0x10) == 0 )
      {
        v15 = *(_WORD *)(a1 + 1766);
        if ( (v15 & 2) != 0 )
        {
          *(_WORD *)(a1 + 1766) = v15 & 0xFFFD;
          __writemsr(0x48u, v15 & 0xFFFD);
        }
      }
    }
    result = 0LL;
    *(_WORD *)(a1 + 1752) &= ~1u;
  }
  return result;
}

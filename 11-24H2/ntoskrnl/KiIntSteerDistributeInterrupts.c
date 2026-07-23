/*
 * XREFs of KiIntSteerDistributeInterrupts @ 0x1402B1520
 * Callers:
 *     KeIntSteerPeriodic @ 0x1402B1294 (KeIntSteerPeriodic.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KiIntSteerSetDestination @ 0x1402B2F28 (KiIntSteerSetDestination.c)
 */

__int64 KiIntSteerDistributeInterrupts()
{
  __int64 i; // rbx
  __int64 v1; // rax
  __int64 v2; // rdi
  __int64 j; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned int v7; // ecx
  unsigned __int64 v8; // rdx
  __int64 Prcb; // rax
  __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  unsigned int v12; // ecx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax

  for ( i = KiIntTrackRootList; (__int64 *)i != &KiIntTrackRootList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 132) )
    {
      v1 = *(_QWORD *)(i + 176);
      v2 = *(_QWORD *)(i + 160);
      if ( v1 != v2 )
      {
        LOWORD(v5) = *(_WORD *)(i + 184);
        if ( (_WORD)v5 == *(_WORD *)(i + 168) )
          v6 = v1 & ~v2;
        else
          v6 = *(_QWORD *)(i + 176);
        while ( 1 )
        {
          v7 = (unsigned __int16)v5 + 1;
          while ( !v6 )
          {
            v5 = (unsigned __int16)(v5 + 1);
            if ( (unsigned int)v5 >= v7 )
              goto LABEL_4;
            v6 = *(_QWORD *)(8 * v5 + 8);
          }
          _BitScanForward64(&v8, v6);
          v6 &= ~(1LL << v8);
          Prcb = KeGetPrcb(*((_DWORD *)qword_140F22998 + 64 * (unsigned __int16)v5 + (unsigned __int8)v8));
          if ( ++*(_DWORD *)(Prcb + 11672) == 1 )
            _interlockedbittestandreset64(
              (volatile signed __int32 *)(*(_QWORD *)(Prcb + 192) + 112LL),
              *(unsigned __int8 *)(Prcb + 209));
        }
      }
    }
LABEL_4:
    ;
  }
  for ( j = KiIntTrackRootList; (__int64 *)j != &KiIntTrackRootList; j = *(_QWORD *)j )
  {
    if ( *(_BYTE *)(j + 132) && *(_QWORD *)(j + 176) != *(_QWORD *)(j + 160) )
    {
      KiIntSteerSetDestination(j, j + 176);
      LOWORD(v10) = *(_WORD *)(j + 184);
      if ( *(_WORD *)(j + 168) == (_WORD)v10 )
        v11 = *(_QWORD *)(j + 160) & ~*(_QWORD *)(j + 176);
      else
        v11 = *(_QWORD *)(j + 160);
LABEL_18:
      v12 = (unsigned __int16)v10 + 1;
      while ( 1 )
      {
        if ( v11 )
        {
          _BitScanForward64(&v13, v11);
          v11 &= ~(1LL << v13);
          v14 = KeGetPrcb(*((_DWORD *)qword_140F22998 + 64 * (unsigned __int16)v10 + (unsigned __int8)v13));
          if ( (*(_DWORD *)(v14 + 11672))-- == 1 )
            _interlockedbittestandset64(
              (volatile signed __int32 *)(*(_QWORD *)(v14 + 192) + 112LL),
              *(unsigned __int8 *)(v14 + 209));
          goto LABEL_18;
        }
        v10 = (unsigned __int16)(v10 + 1);
        if ( (unsigned int)v10 >= v12 )
          break;
        v11 = *(_QWORD *)(8 * v10 + 8);
      }
      *(_WORD *)(j + 168) = *(_WORD *)(j + 184);
      *(_QWORD *)(j + 160) = *(_QWORD *)(j + 176);
    }
  }
  return 0LL;
}

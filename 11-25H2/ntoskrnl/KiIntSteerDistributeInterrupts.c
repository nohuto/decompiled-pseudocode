/*
 * XREFs of KiIntSteerDistributeInterrupts @ 0x1403AF390
 * Callers:
 *     KeIntSteerPeriodic @ 0x1403AF134 (KeIntSteerPeriodic.c)
 * Callees:
 *     KiIntSteerSetDestination @ 0x140200CE0 (KiIntSteerSetDestination.c)
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 */

__int64 __fastcall KiIntSteerDistributeInterrupts(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 j; // rbx
  __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned int v10; // ecx
  unsigned __int64 v11; // rdx
  __int64 Prcb; // rax
  __int64 v13; // rbp
  unsigned __int64 v14; // rsi
  unsigned int v15; // ecx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax

  for ( i = KiIntTrackRootList; (__int64 *)i != &KiIntTrackRootList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 132) )
    {
      v4 = *(_QWORD *)(i + 176);
      v5 = *(_QWORD *)(i + 160);
      if ( v4 != v5 )
      {
        LOWORD(v8) = *(_WORD *)(i + 184);
        if ( (_WORD)v8 == *(_WORD *)(i + 168) )
          v9 = v4 & ~v5;
        else
          v9 = *(_QWORD *)(i + 176);
        while ( 1 )
        {
          v10 = (unsigned __int16)v8 + 1;
          while ( !v9 )
          {
            v8 = (unsigned __int16)(v8 + 1);
            if ( (unsigned int)v8 >= v10 )
              goto LABEL_4;
            v9 = *(_QWORD *)(8 * v8 + 8);
          }
          _BitScanForward64(&v11, v9);
          v9 &= ~(1LL << v11);
          Prcb = KeGetPrcb(*((unsigned int *)qword_140F216A8 + 64 * (unsigned __int16)v8 + (unsigned __int8)v11));
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
      KiIntSteerSetDestination(j, j + 176, a3);
      LOWORD(v13) = *(_WORD *)(j + 184);
      if ( *(_WORD *)(j + 168) == (_WORD)v13 )
        v14 = *(_QWORD *)(j + 160) & ~*(_QWORD *)(j + 176);
      else
        v14 = *(_QWORD *)(j + 160);
LABEL_18:
      v15 = (unsigned __int16)v13 + 1;
      while ( 1 )
      {
        if ( v14 )
        {
          _BitScanForward64(&v16, v14);
          v14 &= ~(1LL << v16);
          v17 = KeGetPrcb(*((unsigned int *)qword_140F216A8 + 64 * (unsigned __int16)v13 + (unsigned __int8)v16));
          if ( (*(_DWORD *)(v17 + 11672))-- == 1 )
            _interlockedbittestandset64(
              (volatile signed __int32 *)(*(_QWORD *)(v17 + 192) + 112LL),
              *(unsigned __int8 *)(v17 + 209));
          goto LABEL_18;
        }
        v13 = (unsigned __int16)(v13 + 1);
        if ( (unsigned int)v13 >= v15 )
          break;
        v14 = *(_QWORD *)(8 * v13 + 8);
      }
      *(_WORD *)(j + 168) = *(_WORD *)(j + 184);
      *(_QWORD *)(j + 160) = *(_QWORD *)(j + 176);
    }
  }
  return 0LL;
}

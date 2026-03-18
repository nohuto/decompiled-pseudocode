/*
 * XREFs of KiPerformHeteroSoftParkElection @ 0x140312A14
 * Callers:
 *     KiPerformSoftParkElectionRound @ 0x1403127A4 (KiPerformSoftParkElectionRound.c)
 * Callees:
 *     KiTallyHeteroSoftParkElectionVotes @ 0x140312BF0 (KiTallyHeteroSoftParkElectionVotes.c)
 *     KiDoesHeteroSoftParkElectionHaveWinner @ 0x140312DE0 (KiDoesHeteroSoftParkElectionHaveWinner.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KiPerformHeteroSoftParkElection(__int64 a1, int a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // rsi
  int v7; // r14d
  int v9; // edi
  unsigned __int8 i; // dl
  unsigned __int64 v13; // r11
  unsigned __int64 *v14; // r9
  __int64 v15; // rax
  unsigned int v16; // ecx
  char v17; // r10
  __int64 v18; // rcx
  __int64 *v19; // r8
  __int64 v20; // r9
  unsigned __int8 j; // cl
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v25; // [rsp+50h] [rbp-B0h]
  __int64 v26[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v27[512]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = *(_QWORD *)(a1 + 128);
  v7 = *(unsigned __int16 *)(a1 + 136);
  v23 = 0LL;
  v24 = 0LL;
  v9 = a1;
  memset_0(v26, 0, sizeof(v26));
  for ( i = 0; i < 0x40u; ++i )
  {
    if ( _bittest64(&a5, i) )
    {
      v25 = 0LL;
      v18 = KiProcessorBlock[*((unsigned int *)qword_140F216A8 + 64 * v7 + (unsigned int)i)];
      WORD4(v25) = *(unsigned __int8 *)(v18 + 208);
      *(_QWORD *)&v25 = *(_QWORD *)(v18 + 36448);
      v19 = v26;
      v20 = v25 & v5;
      for ( j = 0; j < 0x40u; ++j )
      {
        if ( _bittest64(&v20, j) )
          ++*(_BYTE *)v19;
        v19 = (__int64 *)((char *)v19 + 1);
      }
    }
  }
  while ( 1 )
  {
    KiTallyHeteroSoftParkElectionVotes(v9, a2, a3, a4, (__int64)v26, v27, (__int64)&v23);
    if ( !v23 )
      return 0LL;
    if ( (unsigned __int8)KiDoesHeteroSoftParkElectionHaveWinner(v23, a3, v27, &v24) )
      break;
    v13 = -1LL;
    v14 = (unsigned __int64 *)v27;
    v15 = 0LL;
    v16 = 0;
    v17 = 0;
    do
    {
      if ( ((1LL << v16) & a3) != 0 )
      {
        if ( v13 > *v14 )
        {
          v13 = *v14;
          v15 = 1LL << v16;
        }
        else if ( v13 == *v14 )
        {
          v15 |= 1LL << v17;
        }
      }
      ++v16;
      ++v17;
      ++v14;
    }
    while ( v16 < 0x40 );
    if ( v15 == a3 )
      return a3;
    a3 &= ~v15;
  }
  return v24;
}

/*
 * XREFs of KiDoesHeteroSoftParkElectionHaveWinner @ 0x14032A1A0
 * Callers:
 *     KiPerformHeteroSoftParkElection @ 0x140329E98 (KiPerformHeteroSoftParkElection.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiDoesHeteroSoftParkElectionHaveWinner(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rbx
  unsigned int v6; // eax
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // r8

  v5 = 0LL;
  v6 = 2;
  do
  {
    v7 = v6 - 2;
    if ( _bittest64(&a2, v7) && *(_QWORD *)(a3 + 8 * v7) == a1 )
      _bittestandset64(&v5, (unsigned int)v7);
    v8 = v6 - 1;
    if ( _bittest64(&a2, v8) && *(_QWORD *)(a3 + 8 * v8) == a1 )
      _bittestandset64(&v5, (unsigned int)v8);
    if ( _bittest64(&a2, v6) && *(_QWORD *)(a3 + 8LL * v6) == a1 )
      _bittestandset64(&v5, v6);
    v9 = v6 + 1;
    if ( _bittest64(&a2, v9) && *(_QWORD *)(a3 + 8 * v9) == a1 )
      _bittestandset64(&v5, (unsigned int)v9);
    v10 = v6 + 2;
    if ( _bittest64(&a2, v10) && *(_QWORD *)(a3 + 8 * v10) == a1 )
      _bittestandset64(&v5, (unsigned int)v10);
    v11 = v6 + 3;
    if ( _bittest64(&a2, v11) && *(_QWORD *)(a3 + 8 * v11) == a1 )
      _bittestandset64(&v5, (unsigned int)v11);
    v12 = v6 + 4;
    if ( _bittest64(&a2, v12) && *(_QWORD *)(a3 + 8 * v12) == a1 )
      _bittestandset64(&v5, (unsigned int)v12);
    v13 = v6 + 5;
    if ( _bittest64(&a2, v13) && *(_QWORD *)(a3 + 8 * v13) == a1 )
      _bittestandset64(&v5, (unsigned int)v13);
    v14 = v6 + 6;
    if ( _bittest64(&a2, v14) && *(_QWORD *)(a3 + 8 * v14) == a1 )
      _bittestandset64(&v5, (unsigned int)v14);
    v15 = v6 + 7;
    if ( _bittest64(&a2, v15) && *(_QWORD *)(a3 + 8 * v15) == a1 )
      _bittestandset64(&v5, (unsigned int)v15);
    v16 = v6 + 8;
    if ( _bittest64(&a2, v16) && *(_QWORD *)(a3 + 8 * v16) == a1 )
      _bittestandset64(&v5, (unsigned int)v16);
    v17 = v6 + 9;
    if ( _bittest64(&a2, v17) && *(_QWORD *)(a3 + 8 * v17) == a1 )
      _bittestandset64(&v5, (unsigned int)v17);
    v18 = v6 + 10;
    if ( _bittest64(&a2, v18) && *(_QWORD *)(a3 + 8 * v18) == a1 )
      _bittestandset64(&v5, (unsigned int)v18);
    v19 = v6 + 11;
    if ( _bittest64(&a2, v19) && *(_QWORD *)(a3 + 8 * v19) == a1 )
      _bittestandset64(&v5, (unsigned int)v19);
    v20 = v6 + 12;
    if ( _bittest64(&a2, v20) && *(_QWORD *)(a3 + 8 * v20) == a1 )
      _bittestandset64(&v5, (unsigned int)v20);
    v21 = v6 + 13;
    if ( _bittest64(&a2, v21) && *(_QWORD *)(a3 + 8 * v21) == a1 )
      _bittestandset64(&v5, (unsigned int)v21);
    v22 = v6 + 14;
    if ( _bittest64(&a2, v22) && *(_QWORD *)(a3 + 8 * v22) == a1 )
      _bittestandset64(&v5, (unsigned int)v22);
    v23 = v6 + 15;
    if ( _bittest64(&a2, v23) && *(_QWORD *)(a3 + 8 * v23) == a1 )
      _bittestandset64(&v5, (unsigned int)v23);
    v24 = v6 + 16;
    if ( _bittest64(&a2, v24) && *(_QWORD *)(a3 + 8 * v24) == a1 )
      _bittestandset64(&v5, (unsigned int)v24);
    v25 = v6 + 17;
    if ( _bittest64(&a2, v25) && *(_QWORD *)(a3 + 8 * v25) == a1 )
      _bittestandset64(&v5, (unsigned int)v25);
    v26 = v6 + 18;
    if ( _bittest64(&a2, v26) && *(_QWORD *)(a3 + 8 * v26) == a1 )
      _bittestandset64(&v5, (unsigned int)v26);
    v27 = v6 + 19;
    if ( _bittest64(&a2, v27) && *(_QWORD *)(a3 + 8 * v27) == a1 )
      _bittestandset64(&v5, (unsigned int)v27);
    v28 = v6 + 20;
    if ( _bittest64(&a2, v28) && *(_QWORD *)(a3 + 8 * v28) == a1 )
      _bittestandset64(&v5, (unsigned int)v28);
    v29 = v6 + 21;
    if ( _bittest64(&a2, v29) && *(_QWORD *)(a3 + 8 * v29) == a1 )
      _bittestandset64(&v5, (unsigned int)v29);
    v30 = v6 + 22;
    if ( _bittest64(&a2, v30) && *(_QWORD *)(a3 + 8 * v30) == a1 )
      _bittestandset64(&v5, (unsigned int)v30);
    v31 = v6 + 23;
    if ( _bittest64(&a2, v31) && *(_QWORD *)(a3 + 8 * v31) == a1 )
      _bittestandset64(&v5, (unsigned int)v31);
    v32 = v6 + 24;
    if ( _bittest64(&a2, v32) && *(_QWORD *)(a3 + 8 * v32) == a1 )
      _bittestandset64(&v5, (unsigned int)v32);
    v33 = v6 + 25;
    if ( _bittest64(&a2, v33) && *(_QWORD *)(a3 + 8 * v33) == a1 )
      _bittestandset64(&v5, (unsigned int)v33);
    v34 = v6 + 26;
    if ( _bittest64(&a2, v34) && *(_QWORD *)(a3 + 8 * v34) == a1 )
      _bittestandset64(&v5, (unsigned int)v34);
    v35 = v6 + 27;
    if ( _bittest64(&a2, v35) && *(_QWORD *)(a3 + 8 * v35) == a1 )
      _bittestandset64(&v5, (unsigned int)v35);
    v36 = v6 + 28;
    if ( _bittest64(&a2, v36) && *(_QWORD *)(a3 + 8 * v36) == a1 )
      _bittestandset64(&v5, (unsigned int)v36);
    v37 = v6 + 29;
    if ( _bittest64(&a2, v37) && *(_QWORD *)(a3 + 8 * v37) == a1 )
      _bittestandset64(&v5, (unsigned int)v37);
    v6 += 32;
  }
  while ( v6 - 2 < 0x40 );
  *a4 = v5;
  return v5 != 0;
}

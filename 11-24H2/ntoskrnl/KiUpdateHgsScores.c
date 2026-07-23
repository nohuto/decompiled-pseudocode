/*
 * XREFs of KiUpdateHgsScores @ 0x14042C79C
 * Callers:
 *     KeConfigureHeteroProcessors @ 0x14042B440 (KeConfigureHeteroProcessors.c)
 * Callees:
 *     KiComputeHgsScore @ 0x14042C9E4 (KiComputeHgsScore.c)
 */

__int64 __fastcall KiUpdateHgsScores(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned __int16 v5; // r12
  char v6; // r15
  __int64 i; // r8
  unsigned __int8 v8; // di
  unsigned __int8 v9; // r14
  unsigned __int8 v10; // r10
  unsigned __int8 v11; // si
  unsigned int v12; // ebx
  __int64 v13; // r11
  unsigned __int8 v14; // al
  unsigned __int8 v15; // dl
  unsigned __int8 v16; // cl
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // dl
  unsigned __int16 v19; // ax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // r10
  __int64 v25; // r11
  __int16 v26; // ax
  int v27; // r8d
  __int64 v28; // r11
  unsigned int v29; // r10d
  __int64 result; // rax
  __int64 v31; // r9
  __int64 j; // rbx
  __int64 v33; // rcx
  char v34; // si
  char v35; // di
  __int16 v36; // ax
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // r11
  __int64 v40; // rcx
  __int64 v41; // r9
  __int16 v42; // ax
  int v43; // r9d
  __int64 v44; // r11
  __int64 v45; // [rsp+50h] [rbp+8h]

  v4 = KiHeteroConfig;
  v45 = KiHeteroConfig;
  v5 = 0;
  v6 = 0;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v4 + 24); word_140FC543C[v28] = v26 )
  {
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      do
      {
        v13 = *(_QWORD *)(KiProcessorBlock[v12] + 35408);
        if ( v13 )
        {
          a4 = (unsigned __int8)i;
          v14 = *(_BYTE *)(v13 + 4LL * (unsigned __int8)i + 6);
          v15 = v14;
          if ( v14 && (!v8 || v8 > v14) )
          {
            v8 = *(_BYTE *)(v13 + 4LL * (unsigned __int8)i + 6);
            v15 = v8;
          }
        }
        else
        {
          v15 = 0;
          LOBYTE(a4) = i;
        }
        v16 = v9;
        if ( v15 > v9 )
          v16 = v15;
        v9 = v16;
        if ( v13 )
        {
          v17 = *(_BYTE *)(v13 + 4LL * (unsigned __int8)a4 + 7);
          v18 = v17;
          if ( v17 && (!v10 || v10 > v17) )
          {
            v10 = *(_BYTE *)(v13 + 4LL * (unsigned __int8)a4 + 7);
            v18 = v10;
          }
        }
        else
        {
          v18 = 0;
        }
        a1 = v11;
        if ( v18 > v11 )
          a1 = v18;
        ++v12;
        v11 = a1;
      }
      while ( v12 < (unsigned int)KeNumberProcessors_0 );
      v4 = v45;
    }
    else
    {
      LOBYTE(a4) = i;
    }
    LOBYTE(a2) = v8;
    LOBYTE(a1) = v9;
    byte_140FC541C[(unsigned int)i] = v8;
    byte_140FC541C[(unsigned int)i + 8] = v10;
    v19 = KiComputeHgsScore(a1, a2, i, a4);
    word_140FC542C[v25] = v19;
    if ( v19 > v5 )
    {
      v5 = v19;
      v6 = v23;
    }
    LOBYTE(v20) = v24;
    LOBYTE(v21) = v11;
    v26 = KiComputeHgsScore(v21, v20, v22, v23);
    i = (unsigned int)(v27 + 1);
  }
  byte_140FC544C = v6;
  v29 = 0;
  for ( result = (unsigned int)KeNumberProcessors_0; v29 < (unsigned int)KeNumberProcessors_0; ++v29 )
  {
    v31 = 0LL;
    for ( j = KiProcessorBlock[v29]; (unsigned int)v31 < *(_DWORD *)(v4 + 24); *(_WORD *)(j + 2 * v44 + 34508) = v42 )
    {
      v33 = *(_QWORD *)(j + 35408);
      if ( v33 )
        v34 = *(_BYTE *)(v33 + 4LL * (unsigned __int8)v31 + 6);
      else
        v34 = 0;
      if ( v33 )
        v35 = *(_BYTE *)(v33 + 4LL * (unsigned __int8)v31 + 7);
      else
        v35 = 0;
      LOBYTE(i) = byte_140FC541C[(unsigned int)v31 + 8];
      LOBYTE(v33) = v34;
      LOBYTE(a2) = byte_140FC541C[(unsigned int)v31];
      v36 = KiComputeHgsScore(v33, a2, i, v31);
      LOBYTE(v38) = v37;
      *(_WORD *)(j + 2 * v39 + 34492) = v36;
      LOBYTE(v40) = v35;
      v42 = KiComputeHgsScore(v40, v38, v37, v41);
      v31 = (unsigned int)(v43 + 1);
    }
    result = (unsigned int)KeNumberProcessors_0;
  }
  return result;
}

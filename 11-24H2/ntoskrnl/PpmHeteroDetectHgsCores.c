/*
 * XREFs of PpmHeteroDetectHgsCores @ 0x14047F098
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140AC57E0 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 */

char __fastcall PpmHeteroDetectHgsCores(__int64 a1)
{
  struct _KAFFINITY_EX *v1; // r15
  char v3; // bl
  unsigned __int64 v5; // rsi
  unsigned __int16 v6; // r14
  unsigned __int8 v7; // r15
  unsigned __int8 v8; // r12
  unsigned __int64 v9; // rdx
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // cl
  unsigned __int16 v12; // r14
  unsigned int v13; // r13d
  unsigned __int64 v14; // rcx
  char v15; // r8
  unsigned __int8 v16; // r9
  unsigned __int16 v17; // r14
  unsigned __int8 v18; // r10
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned __int8 v21; // al
  unsigned __int8 v22; // cl
  unsigned __int8 v23; // al
  char v24; // al
  unsigned __int16 v25; // r14
  __int64 v26; // rdx
  unsigned __int8 v27; // cl
  unsigned __int8 v28; // al
  unsigned __int8 v29; // al
  unsigned __int64 v30; // r8
  unsigned __int16 v31; // r14
  unsigned int Count; // ecx
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rdx
  unsigned __int16 v38; // r14
  __int64 v39; // rsi
  __int64 Prcb; // r9
  __int64 v41; // r8
  __int64 v42; // r10
  __int64 v43; // rdx
  bool v44; // zf
  __int64 v45; // [rsp+20h] [rbp-20h]
  __int128 v46; // [rsp+28h] [rbp-18h] BYREF
  __int64 v47; // [rsp+38h] [rbp-8h]
  unsigned int v48; // [rsp+88h] [rbp+48h] BYREF
  int v49; // [rsp+90h] [rbp+50h]
  __int64 v50; // [rsp+98h] [rbp+58h]

  v47 = 0LL;
  v46 = 0LL;
  v48 = 0;
  v3 = 0;
  if ( !PpmHeteroHgsEnabled )
    return v3;
  v5 = PpmCheckRegistered.Bitmap[0];
  v6 = v47;
  v3 = 1;
  *(_QWORD *)&v46 = &PpmCheckRegistered;
  v7 = 0;
  v8 = -1;
LABEL_4:
  v49 = 0;
  while ( 1 )
  {
    if ( v5 )
    {
      _BitScanForward64(&v9, v5);
      v5 &= ~(1LL << v9);
      v48 = *((_DWORD *)qword_140F22998 + 64 * v6 + (unsigned __int8)v9);
      v10 = *(_BYTE *)(KeGetPrcb(v48) + 35405);
      v11 = v10;
      if ( v10 <= v7 )
        v11 = v7;
      v7 = v11;
      if ( v10 >= v8 )
        v10 = v8;
      v8 = v10;
      goto LABEL_4;
    }
    v12 = v6 + 1;
    LOWORD(v47) = v12;
    if ( v12 >= (unsigned int)PpmCheckRegistered.Count )
      break;
    v5 = PpmCheckRegistered.Bitmap[v12];
    v6 = v47;
  }
  if ( !PpmHeteroHgsPopulated )
  {
    if ( v7 != v8 )
    {
      *((_QWORD *)&v46 + 1) = PpmCheckRegistered.Bitmap[0];
      LOWORD(v47) = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v48, (unsigned __int16 **)&v46) )
      {
        v39 = v48;
        Prcb = KeGetPrcb(v48);
        *(_BYTE *)(v39 + *(_QWORD *)(a1 + 8)) = *(_BYTE *)(Prcb + 35405) != v8;
        v41 = 0LL;
        v42 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
        if ( *(_DWORD *)(v42 + 4) )
        {
          do
          {
            v43 = (unsigned int)(v41 + *(_DWORD *)(a1 + 4) * v39);
            v44 = *(_BYTE *)(Prcb + 35405) == v8;
            *(_BYTE *)(a1 + 4 * v43 + 25) = *(_BYTE *)(Prcb + 35405) != v8;
            *(_BYTE *)(a1 + 4 * v43 + 24) = v44;
            *(_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v41) = 257;
            v41 = (unsigned int)(v41 + 1);
          }
          while ( (unsigned int)v41 < *(_DWORD *)(v42 + 4) );
        }
      }
    }
    return v3;
  }
  v13 = 0;
  if ( !*(_DWORD *)(a1 + 4) )
    return v3;
  do
  {
    v14 = PpmCheckRegistered.Bitmap[0];
    LOBYTE(v1) = 1;
    v49 = (int)v1;
    v15 = 0;
    LOWORD(v47) = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    LOBYTE(v49) = 0;
    LOBYTE(v48) = 0;
    LOBYTE(v50) = 0;
    while ( 1 )
    {
      while ( v14 )
      {
        _BitScanForward64(&v19, v14);
        v45 = v14 & ~(1LL << v19);
        v20 = *(_QWORD *)(KeGetPrcb(*((_DWORD *)qword_140F22998 + 64 * v17 + (unsigned __int8)v19)) + 35408);
        v21 = v49;
        if ( *(_BYTE *)(v20 + 4LL * v13 + 5) > (unsigned __int8)v49 )
          v21 = *(_BYTE *)(v20 + 4LL * v13 + 5);
        v22 = *(_BYTE *)(v20 + 4LL * v13 + 4);
        LOBYTE(v49) = v21;
        v16 = v21;
        v23 = v50;
        v15 = v48;
        if ( v22 > (unsigned __int8)v50 )
          v23 = v22;
        v14 = v45;
        v18 = v23;
        LOBYTE(v50) = v23;
        if ( PpmHeteroHgsParkingHintEnabled )
        {
          v24 = *(_BYTE *)(v20 + 4LL * v13 + 6);
          if ( v24 )
          {
            LODWORD(v1) = (unsigned __int8)v1;
            if ( *(_BYTE *)(v20 + 4LL * v13 + 7) )
              LODWORD(v1) = 0;
          }
          if ( !PpmHeteroHgsEePerfHintsIndependentEnabled )
          {
            if ( !v24 )
              goto LABEL_28;
            goto LABEL_27;
          }
          v14 = v45;
          if ( !v24 )
          {
LABEL_27:
            v14 = v45;
            if ( !*(_BYTE *)(v20 + 4LL * v13 + 7) )
            {
LABEL_28:
              v14 = v45;
              v15 = 1;
              LOBYTE(v48) = 1;
            }
          }
        }
      }
      v25 = v17 + 1;
      LOWORD(v47) = v25;
      if ( v25 >= (unsigned int)PpmCheckRegistered.Count )
        break;
      v14 = PpmCheckRegistered.Bitmap[v25];
      v17 = v47;
    }
    v26 = *(_QWORD *)(a1 + 16);
    v49 = (int)v1;
    LOWORD(v47) = 0;
    v27 = (v15 != 0) + 1;
    v28 = v16;
    if ( v27 < v16 )
      v28 = (v15 != 0) + 1;
    *(_BYTE *)(v26 + 2LL * v13) = v28;
    v29 = v18;
    if ( v27 < v18 )
      v29 = (v15 != 0) + 1;
    *(_BYTE *)(v26 + 2LL * v13 + 1) = v29;
    v30 = PpmCheckRegistered.Bitmap[0];
    v1 = &PpmCheckRegistered;
    v31 = v47;
    *(_QWORD *)&v46 = &PpmCheckRegistered;
LABEL_38:
    v48 = 0;
    if ( v1 )
      Count = v1->Count;
    else
      Count = v31 + 1;
    while ( 1 )
    {
      if ( v30 )
      {
        _BitScanForward64(&v33, v30);
        v50 = v30 & ~(1LL << v33);
        v48 = *((_DWORD *)qword_140F22998 + 64 * v31 + (unsigned __int8)v33);
        v34 = KeGetPrcb(v48);
        v35 = v48;
        v36 = *(_QWORD *)(v34 + 35408);
        v37 = v13 + *(_DWORD *)(a1 + 4) * v48;
        if ( PpmHeteroHgsEePerfHintsIndependentEnabled )
        {
          if ( !(_BYTE)v49 )
          {
            if ( !*(_BYTE *)(v36 + 4LL * v13 + 7) )
              *(_BYTE *)(a1 + 4 * v37 + 26) = 1;
            if ( !*(_BYTE *)(v36 + 4LL * v13 + 6) )
              *(_BYTE *)(a1 + 4 * v37 + 27) = 1;
          }
        }
        else if ( !(_BYTE)v49 && (!*(_BYTE *)(v36 + 4LL * v13 + 6) || !*(_BYTE *)(v36 + 4LL * v13 + 7)) )
        {
          *(_WORD *)(a1 + 4 * v37 + 26) = 257;
        }
        *(_BYTE *)(a1 + 4 * v37 + 25) = *(_BYTE *)(v36 + 4LL * v13 + 4);
        *(_BYTE *)(a1 + 4 * v37 + 24) = *(_BYTE *)(v36 + 4LL * v13 + 5);
        *(_BYTE *)(v35 + *(_QWORD *)(a1 + 8)) = *(_BYTE *)(v34 + 35405) != v8;
        v30 = v50;
        goto LABEL_38;
      }
      v38 = v31 + 1;
      LOWORD(v47) = v38;
      if ( v38 >= Count )
        break;
      v30 = v1->Bitmap[v38];
      v31 = v47;
      v1 = (struct _KAFFINITY_EX *)v46;
    }
    ++v13;
  }
  while ( v13 < *(_DWORD *)(a1 + 4) );
  return v3;
}

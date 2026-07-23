/*
 * XREFs of MiGetNextAffinityWalker @ 0x140271ED0
 * Callers:
 *     MiComputeIdealDpcGang @ 0x14026F84C (MiComputeIdealDpcGang.c)
 *     MiLaunchZeroParent @ 0x140271AB0 (MiLaunchZeroParent.c)
 *     MiLaunchZeroWorkers @ 0x140271D90 (MiLaunchZeroWorkers.c)
 *     MiFindBestZeroingProcessor @ 0x1403313C8 (MiFindBestZeroingProcessor.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiGetNextAffinityWalker(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned int v2; // ebx
  ULONG_PTR v3; // rdi
  ULONG_PTR v4; // rax
  __int64 v5; // rsi
  int v6; // ecx
  int v7; // edx
  __int64 v8; // rcx
  _DWORD *v9; // rax
  unsigned int v10; // r9d
  int v11; // r8d
  int v12; // ecx
  unsigned int v13; // eax
  __m128i *v14; // rdx
  __m128i v15; // xmm0
  unsigned __int16 epi16; // dx
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // r12
  __int64 v21; // r12
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r14
  int v25; // r11d
  int v26; // r10d
  int v27; // edi
  int v28; // eax
  int v29; // r11d
  unsigned __int64 v30; // rdx
  _QWORD *v31; // rcx
  __int64 v32; // r10
  __int64 v33; // r9
  unsigned __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r10
  int v38; // edx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  unsigned __int64 v46; // rcx
  int v47; // edx
  int v48; // eax
  unsigned __int16 v49; // [rsp+30h] [rbp-D0h]
  unsigned int v50; // [rsp+40h] [rbp-C0h]
  int v51; // [rsp+44h] [rbp-BCh]
  unsigned int v52; // [rsp+48h] [rbp-B8h]
  int v53; // [rsp+4Ch] [rbp-B4h]
  __m128i *v54; // [rsp+50h] [rbp-B0h]
  __int128 v55; // [rsp+60h] [rbp-A0h]
  __int64 v56; // [rsp+78h] [rbp-88h]
  __int128 v59; // [rsp+90h] [rbp-70h]
  _BYTE v60[4]; // [rsp+A0h] [rbp-60h]
  _DWORD v61[10]; // [rsp+A4h] [rbp-5Ch]
  _DWORD v62[61]; // [rsp+CCh] [rbp-34h] BYREF

  v2 = 0;
  v3 = BugCheckParameter2;
  if ( !BugCheckParameter2 )
    return 3221226021LL;
  while ( 1 )
  {
    v4 = *(int *)(v3 + 12);
    if ( (int)v4 >= 3 )
      KeBugCheckEx(0x1Au, 0x6180uLL, v3, v4, 0LL);
    v5 = 32 * v4;
    v6 = *(_DWORD *)(32 * v4 + v3 + 280);
    if ( v6 )
      break;
    *(_DWORD *)(v3 + 12) = v4 + 1;
  }
  v7 = *(_DWORD *)(v5 + v3 + 304);
  *(_DWORD *)(v5 + v3 + 280) = v6 - 1;
  v8 = 5LL;
  v9 = v62;
  v53 = v7;
  do
  {
    *(v9 - 10) = -1;
    *v9 = -1;
    v9 += 14;
    --v8;
  }
  while ( v8 );
  v10 = *(_DWORD *)(v5 + v3 + 288);
  v11 = *(_DWORD *)(v5 + v3 + 308);
  v12 = v61[0];
  v52 = v10;
  v51 = v11;
  do
  {
    v50 = 0;
    v13 = 0;
    if ( v10 )
    {
      v14 = *(__m128i **)(v5 + v3 + 296);
      v54 = v14;
      while ( 1 )
      {
        v15 = *v14;
        epi16 = _mm_extract_epi16(*v14, 4);
        v56 = v15.m128i_i64[1];
        v17 = v15.m128i_i64[0];
        v49 = epi16;
        while ( v17 )
        {
          _BitScanForward64(&v18, v17);
          v19 = *((unsigned int *)qword_140F22998 + 64 * epi16 + (int)v18);
          v20 = KiProcessorBlock[v19];
          if ( v11 != -1 )
          {
            v47 = *(_DWORD *)(v20 + 47412);
            if ( *(_BYTE *)(v3 + 8) )
              v47 += *(_DWORD *)(*(_QWORD *)(384LL * *(unsigned int *)(v20 + 34644) + qword_140E2DC38 + 376) + 12LL);
            if ( v47 != *(_DWORD *)(v5 + v3 + 304) )
            {
              v17 &= ~*(_QWORD *)(v20 + 200);
              v13 = v50;
              goto LABEL_30;
            }
          }
          *((_QWORD *)&v59 + 1) = v15.m128i_i64[1];
          *((_QWORD *)&v55 + 1) = v15.m128i_i64[1];
          if ( *(_DWORD *)(v3 + 12) )
            v21 = *(_QWORD *)(v20 + 36448);
          else
            v21 = *(_QWORD *)(v20 + 200);
          v22 = v17 & v21;
          LODWORD(v19) = v19 - 1;
          *(_QWORD *)&v55 = v22;
          v23 = 0LL;
          v17 &= ~v22;
          v24 = 0LL;
          v25 = 0;
          v26 = 0;
          if ( v22 )
          {
            v27 = 0;
            v28 = 0;
            do
            {
              v29 = v28;
              v19 = (unsigned int)(v19 + 1);
              v30 = v23;
              v31 = (_QWORD *)KiProcessorBlock[v19];
              v32 = v31[25];
              v33 = v31[1];
              v34 = v32 | v24;
              v35 = v31[3];
              v36 = v32;
              v37 = ~v32;
              if ( v33 != v35 )
                v24 = v34;
              v23 = v30 | v36;
              if ( v33 != v35 )
              {
                ++v27;
                v23 = v30;
              }
              v28 = v29 + 1;
              if ( v33 != v35 )
                v28 = v29;
              v22 &= v37;
            }
            while ( v22 );
            v2 = 0;
            v26 = v27;
            v25 = v28;
            v3 = BugCheckParameter2;
          }
          v38 = 4;
          v39 = 4LL;
          v40 = *(_QWORD *)(v3 + 8LL * v15.m128i_u16[4] + 24);
          if ( v26 )
          {
            if ( !v25 )
              goto LABEL_29;
            v38 = 2;
            v39 = 2LL;
          }
          else
          {
            v38 = 0;
            v39 = 0LL;
          }
          v24 = v23;
          if ( (v23 & v40) != 0 )
          {
            if ( (v23 & v40) == v23 )
            {
              ++v38;
              ++v39;
            }
            else
            {
              v24 = ~v40 & v23;
              if ( v24 )
              {
                _BitScanForward64(&v46, v24);
                LODWORD(v19) = *((_DWORD *)qword_140F22998 + 64 * v15.m128i_u16[4] + (int)v46);
              }
              else
              {
                LODWORD(v19) = -1;
              }
            }
          }
LABEL_29:
          v41 = 14 * v39;
          *(_QWORD *)&v59 = v24;
          v62[v41] = *(_DWORD *)(v5 + v3 + 304);
          v13 = v50;
          *(_DWORD *)&v60[v41 * 4] = v49;
          v11 = v51;
          v62[v41 + 1] = v50;
          v61[v41] = v19;
          v61[v41 + 9] = v38;
          *(_OWORD *)&v61[v41 + 1] = v59;
          *(_OWORD *)&v61[v41 + 5] = v55;
          if ( !v38 )
            break;
LABEL_30:
          v15.m128i_i64[1] = v56;
          epi16 = v49;
        }
        v12 = v61[0];
        v10 = v52;
        if ( v61[0] == -1 )
        {
          ++v13;
          v14 = v54 + 1;
          v50 = v13;
          ++v54;
          if ( v13 < v52 )
            continue;
        }
        v7 = v53;
        break;
      }
    }
    if ( v11 == -1 )
      break;
    v48 = ++*(_DWORD *)(v5 + v3 + 304);
    if ( v48 == v11 )
    {
      *(_DWORD *)(v5 + v3 + 304) = 0;
      v48 = 0;
    }
  }
  while ( v12 == -1 && v48 != v7 );
  while ( v2 < 5 )
  {
    if ( v61[14 * v2] != -1 )
    {
      _mm_lfence();
      v42 = *(_OWORD *)&v60[56 * v2];
      v43 = *(_OWORD *)&v61[14 * v2 + 3];
      *(_QWORD *)(*(_QWORD *)(v5 + v3 + 296) + 16LL * (unsigned int)v62[14 * v2 + 1]) &= ~*(_QWORD *)&v61[14 * v2 + 5];
      *(_OWORD *)a2 = v42;
      v44 = *(_OWORD *)&v61[14 * v2 + 7];
      *(_OWORD *)(a2 + 16) = v43;
      *(_QWORD *)&v43 = *(_QWORD *)&v62[14 * v2 + 1];
      *(_OWORD *)(a2 + 32) = v44;
      *(_QWORD *)(a2 + 48) = v43;
      return 0LL;
    }
    ++v2;
  }
  return 3221226021LL;
}

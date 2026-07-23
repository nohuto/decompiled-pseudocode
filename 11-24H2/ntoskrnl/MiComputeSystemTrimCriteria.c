/*
 * XREFs of MiComputeSystemTrimCriteria @ 0x1402F3C60
 * Callers:
 *     MiProcessWorkingSets @ 0x1402F2D10 (MiProcessWorkingSets.c)
 * Callees:
 *     MiPulseLowAvailableEvent @ 0x1402F2C10 (MiPulseLowAvailableEvent.c)
 *     MiGetAvailablePagesForTrimPass @ 0x1402F51C4 (MiGetAvailablePagesForTrimPass.c)
 *     MiPruneProcessLargePageCaches @ 0x140353F9C (MiPruneProcessLargePageCaches.c)
 *     MiComputeAgeDistribution @ 0x140425950 (MiComputeAgeDistribution.c)
 */

__int64 __fastcall MiComputeSystemTrimCriteria(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v6; // r14d
  unsigned __int64 AvailablePagesForTrimPass; // rbp
  int v8; // r9d
  unsigned __int64 v9; // r11
  __int64 v10; // rcx
  _DWORD *v11; // rax
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  bool v15; // cf
  unsigned __int8 v16; // r13
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  unsigned int v19; // r10d
  unsigned __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // r8d
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  _DWORD *v27; // rax
  int v28; // r12d
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int8 v31; // cl
  __int16 v32; // ax
  unsigned __int64 v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // rcx
  unsigned __int16 v36; // ax
  unsigned __int64 v37; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rax
  int v47; // [rsp+60h] [rbp+8h]
  unsigned int v48; // [rsp+70h] [rbp+18h]
  unsigned __int64 v49; // [rsp+78h] [rbp+20h]

  v3 = a1[2200];
  v47 = 0;
  v6 = *(_DWORD *)(v3 + 40);
  AvailablePagesForTrimPass = MiGetAvailablePagesForTrimPass(a1, a2, a3, 0LL);
  v10 = (unsigned int)(v9 + 7);
  v11 = (_DWORD *)a1 + 1801;
  v12 = v9;
  do
  {
    v12 += *v11++;
    v10 -= (unsigned int)(v9 + 1);
  }
  while ( v10 );
  v13 = *(_DWORD *)(v3 + 44);
  v14 = v12 - v13;
  *(_DWORD *)(v3 + 44) = v12;
  v15 = v13 < v12;
  v16 = v9;
  v17 = *(_QWORD *)(v3 + 328);
  v18 = v9;
  v19 = v15 ? v14 : 0;
  v20 = v17 - AvailablePagesForTrimPass;
  v48 = v19;
  if ( AvailablePagesForTrimPass > v17 )
    v20 = AvailablePagesForTrimPass - v17;
  v21 = *(_DWORD *)(v3 + 120) & 7;
  *(_QWORD *)(v3 + 128) += (v20 >> 3) - (*(_QWORD *)(v3 + 8 * v21 + 136) >> 3);
  *(_QWORD *)(v3 + 8 * v21 + 136) = v20;
  if ( *(_DWORD *)(v3 + 80) != 4
    || *(_WORD *)(v3 + 276) == (_WORD)v9
    || *(_BYTE *)(v3 + 278) == (_BYTE)v9
    || *(_BYTE *)(v3 + 279) == (_BYTE)v9 )
  {
    v22 = v9;
    if ( AvailablePagesForTrimPass <= 0x120 )
      v22 = v9 + 1;
  }
  else
  {
    v22 = v9 + 1;
  }
  v23 = *(_QWORD *)(v3 + 328);
  v24 = v23;
  if ( v22 )
  {
    v25 = v9;
  }
  else
  {
    v25 = AvailablePagesForTrimPass - *(_QWORD *)(v3 + 296);
    v24 = v23 >> 2;
  }
  if ( AvailablePagesForTrimPass < v24
    || AvailablePagesForTrimPass < 4 * v23 && v25 < 0 && AvailablePagesForTrimPass < v23 - v25 )
  {
    v18 = *(_QWORD *)(v3 + 312);
    v43 = v23 - v25 - AvailablePagesForTrimPass;
    v16 = v9 + 1;
    if ( v43 <= v18 )
      v18 = v43;
  }
  v49 = v19;
  if ( v19 >= AvailablePagesForTrimPass >> 2 )
  {
    v44 = v19 - (AvailablePagesForTrimPass >> 2);
    if ( v44 > v18 && v18 < 0x2000 && !v22 )
    {
      v18 = v19 - (AvailablePagesForTrimPass >> 2);
      v16 = 3;
      if ( v44 > 0x2000 )
        v18 = 0x2000LL;
    }
  }
  v26 = 4LL;
  v27 = a1 + 902;
  v28 = v9;
  do
  {
    v28 += *v27++;
    --v26;
  }
  while ( v26 );
  if ( !v18 && !v22 )
  {
    v34 = v28 - *(_DWORD *)(v3 + 48);
    if ( v34 > 0x20000 )
    {
      v45 = a1[2336];
      if ( v45 >= 0x100000 || v45 >= a1[2314] >> 2 )
      {
        *(_DWORD *)(v3 + 48) = v28;
      }
      else
      {
        v18 = 0x8000LL;
        v16 = 2;
      }
    }
    else if ( v19 && v34 > 0x18000 )
    {
      if ( *(_QWORD *)(v3 + 336) < 0x20000uLL )
        v8 = 1;
      v47 = v8;
    }
  }
  if ( AvailablePagesForTrimPass <= 0x120 )
  {
    v46 = *(_QWORD *)(v3 + 312) >> 1;
    if ( v46 >= 0x1000 )
    {
      if ( v18 < 0x1000 )
      {
        v18 = 4096LL;
        goto LABEL_18;
      }
    }
    else
    {
      if ( v18 >= v46 )
        v46 = v18;
      v18 = v46;
    }
  }
  if ( v18 && v18 < 0x1000 && !v22 )
    v18 = 4096LL;
LABEL_18:
  v29 = *(_QWORD *)(v3 + 328);
  if ( AvailablePagesForTrimPass < 4 * v29 )
  {
    v39 = *(_QWORD *)(v3 + 128);
    v40 = 4 * v39;
    if ( 4 * v39 < v29 )
    {
      v42 = *(_QWORD *)(v3 + 304);
      *(_QWORD *)(v3 + 328) = v40;
      if ( v40 >= v42 )
        goto LABEL_21;
    }
    else
    {
      v41 = 2 * v39;
      if ( 2 * v39 <= v29 )
        goto LABEL_21;
      v42 = *(_QWORD *)(v3 + 312);
      *(_QWORD *)(v3 + 328) = v41;
      if ( v41 <= v42 )
        goto LABEL_21;
    }
    *(_QWORD *)(v3 + 328) = v42;
    goto LABEL_21;
  }
  if ( AvailablePagesForTrimPass > 16 * v29 )
    *(_QWORD *)(v3 + 328) = *(_QWORD *)(v3 + 320);
LABEL_21:
  *(_QWORD *)(v3 + 296) = AvailablePagesForTrimPass;
  if ( !v18 )
  {
    v30 = *(_QWORD *)(v3 + 288);
    v31 = v9;
    if ( v30 )
    {
      if ( v30 > *(_QWORD *)(v3 + 336) )
      {
        v33 = v19;
        v31 = 10;
        if ( *(_WORD *)(v3 + 274) < 0xFAu )
          *(_WORD *)(v3 + 274) = 250;
        goto LABEL_43;
      }
      *(_QWORD *)(v3 + 288) = v9;
    }
    if ( *(_QWORD *)(v3 + 336) < (unsigned __int64)(4LL * *(_QWORD *)(v3 + 312)) )
    {
      if ( *(_WORD *)(v3 + 274) == (_WORD)v9 )
        goto LABEL_27;
      v32 = MiComputeAgeDistribution(a1, 1LL);
      v9 = 0LL;
      *(_WORD *)(v3 + 274) = v32;
      if ( !v32 )
      {
        v8 = v47;
        v31 = 0;
LABEL_27:
        v33 = v49;
        if ( v49 >= AvailablePagesForTrimPass >> 4 )
        {
          v31 = 9;
        }
        else if ( v8 )
        {
          v31 = 8;
        }
        goto LABEL_43;
      }
      v31 = 11;
    }
    v33 = v49;
LABEL_43:
    v36 = *(_WORD *)(v3 + 276);
    if ( v36 )
    {
      if ( *(_WORD *)(v3 + 274) < v36 )
        *(_WORD *)(v3 + 274) = v36;
      if ( !v31 )
      {
        v31 = 12;
        *(_WORD *)(v3 + 274) = v36;
      }
    }
    *(_BYTE *)a2 = v9;
    *(_QWORD *)(a2 + 96) = v9;
    *(_QWORD *)(a2 + 80) = v9;
    *(_QWORD *)(a2 + 72) = a1[2336];
    *(_QWORD *)(a2 + 104) = v9;
    *(_BYTE *)(a2 + 2) = v31;
    *(_OWORD *)(a2 + 8) = 0LL;
    *(_OWORD *)(a2 + 24) = 0LL;
    *(_OWORD *)(a2 + 40) = 0LL;
    *(_OWORD *)(a2 + 56) = 0LL;
    if ( v31 )
    {
      ++*(_DWORD *)(v3 + 4LL * v31 + 416);
      v6 |= 2u;
    }
    else if ( *(_BYTE *)(v3 + 55) == (_BYTE)v9 )
    {
      if ( !v6 )
        v6 = 32;
    }
    else
    {
      v6 |= 0x40u;
      *(_WORD *)(v3 + 274) = 10;
    }
    goto LABEL_50;
  }
  MiPulseLowAvailableEvent((__int64)a1);
  if ( (unsigned __int8)(v16 - 2) <= 1u )
    *(_QWORD *)(v3 + 288) = v18;
  v33 = v49;
  *(_BYTE *)a2 = 0;
  *(_QWORD *)(a2 + 96) = 0LL;
  v6 |= 1u;
  *(_QWORD *)(a2 + 80) = v18;
  v35 = a1[2336];
  *(_QWORD *)(a2 + 104) = 0LL;
  *(_QWORD *)(a2 + 72) = v18 + v35;
  *(_BYTE *)(a2 + 2) = v16;
  *(_OWORD *)(a2 + 8) = 0LL;
  *(_OWORD *)(a2 + 24) = 0LL;
  *(_OWORD *)(a2 + 40) = 0LL;
  *(_OWORD *)(a2 + 56) = 0LL;
  *(_DWORD *)(v3 + 48) = v28;
  ++*(_DWORD *)(v3 + 4LL * v16 + 416);
LABEL_50:
  if ( AvailablePagesForTrimPass && v33 < AvailablePagesForTrimPass )
    v37 = 100 * v48 / AvailablePagesForTrimPass;
  else
    LOBYTE(v37) = 100;
  *(_BYTE *)(a2 + 3) = v37;
  if ( (v6 & 1) == 0 && *(_BYTE *)(a2 + 4) == 2 )
    *(_BYTE *)(a2 + 4) = 1;
  if ( v16 )
    MiPruneProcessLargePageCaches(a1, 0LL);
  return v6;
}

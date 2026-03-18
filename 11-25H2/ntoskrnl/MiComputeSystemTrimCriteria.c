/*
 * XREFs of MiComputeSystemTrimCriteria @ 0x1403C15C4
 * Callers:
 *     MiProcessWorkingSets @ 0x1403C24F0 (MiProcessWorkingSets.c)
 * Callees:
 *     MiGetAvailablePagesForTrimPass @ 0x1403C2270 (MiGetAvailablePagesForTrimPass.c)
 *     MiComputeAgeDistribution @ 0x14043CDD8 (MiComputeAgeDistribution.c)
 *     MiPruneProcessLargePageCaches @ 0x14047FD48 (MiPruneProcessLargePageCaches.c)
 *     MiPulseLowAvailableEvent @ 0x1404B2FA0 (MiPulseLowAvailableEvent.c)
 */

__int64 __fastcall MiComputeSystemTrimCriteria(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v5; // r14d
  unsigned __int64 AvailablePagesForTrimPass; // rbp
  int v7; // r9d
  unsigned __int64 v8; // r11
  __int64 v9; // rcx
  _DWORD *v10; // rax
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  bool v14; // cf
  unsigned __int8 v15; // r13
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  unsigned int v18; // r10d
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // r8d
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  _DWORD *v26; // rax
  int v27; // r12d
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int8 v30; // cl
  unsigned __int64 v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // rcx
  unsigned __int16 v34; // ax
  unsigned __int64 v35; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rcx
  __int16 v41; // ax
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  int v46; // [rsp+60h] [rbp+8h]
  unsigned int v47; // [rsp+70h] [rbp+18h]
  unsigned __int64 v48; // [rsp+78h] [rbp+20h]

  v2 = a1[2200];
  v46 = 0;
  v5 = *(_DWORD *)(v2 + 40);
  AvailablePagesForTrimPass = MiGetAvailablePagesForTrimPass(a1);
  v9 = (unsigned int)(v8 + 7);
  v10 = (_DWORD *)a1 + 1801;
  v11 = v8;
  do
  {
    v11 += *v10++;
    v9 -= (unsigned int)(v8 + 1);
  }
  while ( v9 );
  v12 = *(_DWORD *)(v2 + 44);
  v13 = v11 - v12;
  *(_DWORD *)(v2 + 44) = v11;
  v14 = v12 < v11;
  v15 = v8;
  v16 = *(_QWORD *)(v2 + 328);
  v17 = v8;
  v18 = v14 ? v13 : 0;
  v19 = v16 - AvailablePagesForTrimPass;
  v47 = v18;
  if ( AvailablePagesForTrimPass > v16 )
    v19 = AvailablePagesForTrimPass - v16;
  v20 = *(_DWORD *)(v2 + 120) & 7;
  *(_QWORD *)(v2 + 128) += (v19 >> 3) - (*(_QWORD *)(v2 + 8 * v20 + 136) >> 3);
  *(_QWORD *)(v2 + 8 * v20 + 136) = v19;
  if ( *(_DWORD *)(v2 + 80) != 4
    || *(_WORD *)(v2 + 276) == (_WORD)v8
    || *(_BYTE *)(v2 + 278) == (_BYTE)v8
    || *(_BYTE *)(v2 + 279) == (_BYTE)v8 )
  {
    v21 = v8;
    if ( AvailablePagesForTrimPass <= 0x120 )
      v21 = v8 + 1;
  }
  else
  {
    v21 = v8 + 1;
  }
  v22 = *(_QWORD *)(v2 + 328);
  v23 = v22;
  if ( v21 )
  {
    v24 = v8;
  }
  else
  {
    v24 = AvailablePagesForTrimPass - *(_QWORD *)(v2 + 296);
    v23 = v22 >> 2;
  }
  if ( AvailablePagesForTrimPass < v23
    || AvailablePagesForTrimPass < 4 * v22 && v24 < 0 && AvailablePagesForTrimPass < v22 - v24 )
  {
    v17 = *(_QWORD *)(v2 + 312);
    v42 = v22 - v24 - AvailablePagesForTrimPass;
    v15 = v8 + 1;
    if ( v42 <= v17 )
      v17 = v42;
  }
  v48 = v18;
  if ( v18 >= AvailablePagesForTrimPass >> 2 )
  {
    v43 = v18 - (AvailablePagesForTrimPass >> 2);
    if ( v43 > v17 && v17 < 0x2000 && !v21 )
    {
      v17 = v18 - (AvailablePagesForTrimPass >> 2);
      v15 = 3;
      if ( v43 > 0x2000 )
        v17 = 0x2000LL;
    }
  }
  v25 = 4LL;
  v26 = a1 + 902;
  v27 = v8;
  do
  {
    v27 += *v26++;
    --v25;
  }
  while ( v25 );
  if ( !v17 && !v21 )
  {
    v32 = v27 - *(_DWORD *)(v2 + 48);
    if ( v32 > 0x20000 )
    {
      v44 = a1[2336];
      if ( v44 >= 0x100000 || v44 >= a1[2314] >> 2 )
      {
        *(_DWORD *)(v2 + 48) = v27;
      }
      else
      {
        v17 = 0x8000LL;
        v15 = 2;
      }
    }
    else if ( v18 && v32 > 0x18000 )
    {
      if ( *(_QWORD *)(v2 + 336) < 0x20000uLL )
        v7 = 1;
      v46 = v7;
    }
  }
  if ( AvailablePagesForTrimPass <= 0x120 )
  {
    v45 = *(_QWORD *)(v2 + 312) >> 1;
    if ( v45 >= 0x1000 )
    {
      if ( v17 < 0x1000 )
      {
        v17 = 4096LL;
        goto LABEL_18;
      }
    }
    else
    {
      if ( v17 >= v45 )
        v45 = v17;
      v17 = v45;
    }
  }
  if ( v17 && v17 < 0x1000 && !v21 )
    v17 = 4096LL;
LABEL_18:
  v28 = *(_QWORD *)(v2 + 328);
  if ( AvailablePagesForTrimPass < 4 * v28 )
  {
    v37 = *(_QWORD *)(v2 + 128);
    v38 = 4 * v37;
    if ( 4 * v37 < v28 )
    {
      v40 = *(_QWORD *)(v2 + 304);
      *(_QWORD *)(v2 + 328) = v38;
      if ( v38 >= v40 )
        goto LABEL_21;
    }
    else
    {
      v39 = 2 * v37;
      if ( 2 * v37 <= v28 )
        goto LABEL_21;
      v40 = *(_QWORD *)(v2 + 312);
      *(_QWORD *)(v2 + 328) = v39;
      if ( v39 <= v40 )
        goto LABEL_21;
    }
    *(_QWORD *)(v2 + 328) = v40;
    goto LABEL_21;
  }
  if ( AvailablePagesForTrimPass > 16 * v28 )
    *(_QWORD *)(v2 + 328) = *(_QWORD *)(v2 + 320);
LABEL_21:
  *(_QWORD *)(v2 + 296) = AvailablePagesForTrimPass;
  if ( !v17 )
  {
    v29 = *(_QWORD *)(v2 + 288);
    v30 = v8;
    if ( v29 )
    {
      if ( v29 > *(_QWORD *)(v2 + 336) )
      {
        v31 = v18;
        v30 = 10;
        if ( *(_WORD *)(v2 + 274) < 0xFAu )
          *(_WORD *)(v2 + 274) = 250;
        goto LABEL_42;
      }
      *(_QWORD *)(v2 + 288) = v8;
    }
    if ( *(_QWORD *)(v2 + 336) < (unsigned __int64)(4LL * *(_QWORD *)(v2 + 312)) )
    {
      if ( *(_WORD *)(v2 + 274) == (_WORD)v8 )
        goto LABEL_25;
      v41 = MiComputeAgeDistribution(a1, 1LL);
      v8 = 0LL;
      *(_WORD *)(v2 + 274) = v41;
      if ( !v41 )
      {
        v7 = v46;
        v30 = 0;
LABEL_25:
        v31 = v48;
        if ( v48 >= AvailablePagesForTrimPass >> 4 )
        {
          v30 = 9;
        }
        else if ( v7 )
        {
          v30 = 8;
        }
        goto LABEL_42;
      }
      v30 = 11;
    }
    v31 = v48;
LABEL_42:
    v34 = *(_WORD *)(v2 + 276);
    if ( v34 )
    {
      if ( *(_WORD *)(v2 + 274) < v34 )
        *(_WORD *)(v2 + 274) = v34;
      if ( !v30 )
      {
        v30 = 12;
        *(_WORD *)(v2 + 274) = v34;
      }
    }
    *(_BYTE *)a2 = v8;
    *(_QWORD *)(a2 + 96) = v8;
    *(_QWORD *)(a2 + 80) = v8;
    *(_QWORD *)(a2 + 72) = a1[2336];
    *(_QWORD *)(a2 + 104) = v8;
    *(_BYTE *)(a2 + 2) = v30;
    *(_OWORD *)(a2 + 8) = 0LL;
    *(_OWORD *)(a2 + 24) = 0LL;
    *(_OWORD *)(a2 + 40) = 0LL;
    *(_OWORD *)(a2 + 56) = 0LL;
    if ( v30 )
    {
      ++*(_DWORD *)(v2 + 4LL * v30 + 416);
      v5 |= 2u;
    }
    else if ( *(_BYTE *)(v2 + 55) == (_BYTE)v8 )
    {
      if ( !v5 )
        v5 = 32;
    }
    else
    {
      v5 |= 0x40u;
      *(_WORD *)(v2 + 274) = 10;
    }
    goto LABEL_49;
  }
  MiPulseLowAvailableEvent(a1, 1LL);
  if ( (unsigned __int8)(v15 - 2) <= 1u )
    *(_QWORD *)(v2 + 288) = v17;
  v31 = v48;
  *(_BYTE *)a2 = 0;
  *(_QWORD *)(a2 + 96) = 0LL;
  v5 |= 1u;
  *(_QWORD *)(a2 + 80) = v17;
  v33 = a1[2336];
  *(_QWORD *)(a2 + 104) = 0LL;
  *(_QWORD *)(a2 + 72) = v17 + v33;
  *(_BYTE *)(a2 + 2) = v15;
  *(_OWORD *)(a2 + 8) = 0LL;
  *(_OWORD *)(a2 + 24) = 0LL;
  *(_OWORD *)(a2 + 40) = 0LL;
  *(_OWORD *)(a2 + 56) = 0LL;
  *(_DWORD *)(v2 + 48) = v27;
  ++*(_DWORD *)(v2 + 4LL * v15 + 416);
LABEL_49:
  if ( AvailablePagesForTrimPass && v31 < AvailablePagesForTrimPass )
    v35 = 100 * v47 / AvailablePagesForTrimPass;
  else
    LOBYTE(v35) = 100;
  *(_BYTE *)(a2 + 3) = v35;
  if ( (v5 & 1) == 0 && *(_BYTE *)(a2 + 4) == 2 )
    *(_BYTE *)(a2 + 4) = 1;
  if ( v15 )
    MiPruneProcessLargePageCaches(a1, 0LL);
  return v5;
}

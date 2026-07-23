/*
 * XREFs of MiAddZeroingThreads @ 0x140413008
 * Callers:
 *     MiReassessZeroThreads @ 0x1404125C0 (MiReassessZeroThreads.c)
 *     MiWakeZeroingThreads @ 0x140412F50 (MiWakeZeroingThreads.c)
 * Callees:
 *     MiAssignBackgroundZeroThreadToProcessor @ 0x1403312CC (MiAssignBackgroundZeroThreadToProcessor.c)
 *     MiFindBestZeroingProcessor @ 0x1403313C8 (MiFindBestZeroingProcessor.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetEngineBackgroundQualifications @ 0x14041354C (MiGetEngineBackgroundQualifications.c)
 *     MiIncrementZeroEngineThread @ 0x1404137CC (MiIncrementZeroEngineThread.c)
 *     MiRestartZeroingPass @ 0x140413810 (MiRestartZeroingPass.c)
 *     MiUnlinkZeroThreadFromActiveDomain @ 0x14041399C (MiUnlinkZeroThreadFromActiveDomain.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiAddZeroingThreads(__int64 a1, int a2, int *a3)
{
  __int64 v6; // rax
  int v7; // r15d
  __int64 v8; // rax
  int v9; // edi
  int v10; // r12d
  __int64 v11; // rsi
  __int64 v12; // rbx
  volatile LONG *v13; // r13
  __int64 v14; // r9
  int *v15; // r10
  __int64 v16; // rbx
  unsigned int *v17; // r8
  bool v18; // zf
  int v19; // r12d
  int v20; // ebx
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r13
  int *v25; // r10
  unsigned int v26; // eax
  int v27; // ecx
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rbx
  _BOOL8 v32; // rdx
  int v33; // ecx
  int v34; // edx
  __int64 v35; // r8
  int v36; // r10d
  __int64 v37; // r11
  int v38; // r9d
  int v39; // edi
  __int64 v40; // r8
  unsigned int v41; // r9d
  int v42; // eax
  _DWORD *v43; // rdx
  __int64 i; // rcx
  __int64 v46; // rsi
  __int64 v47; // rdi
  _QWORD *j; // rcx
  __int64 v49; // rbx
  int v50; // r11d
  _DWORD *v51; // rax
  __int64 v52; // r8
  int v53; // r10d
  _WORD v54[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v55; // [rsp+24h] [rbp-DCh]
  __int64 v56; // [rsp+28h] [rbp-D8h]
  __int64 v57; // [rsp+30h] [rbp-D0h]
  __int128 v58; // [rsp+38h] [rbp-C8h] BYREF
  volatile LONG *v59; // [rsp+48h] [rbp-B8h]
  int *v60; // [rsp+50h] [rbp-B0h]
  _QWORD v61[5]; // [rsp+60h] [rbp-A0h] BYREF
  int v62[34]; // [rsp+88h] [rbp-78h] BYREF

  v60 = a3;
  memset_0(v61, 0, 0xA8uLL);
  v6 = *(_QWORD *)(a1 + 48);
  v54[0] = 0;
  v58 = 0LL;
  v7 = *(_DWORD *)(v6 + 16980);
  v8 = 2LL;
  if ( v7 == 1 )
  {
    v9 = 0;
    if ( a2 != 3 )
      v9 = a2;
  }
  else
  {
    v9 = 2;
  }
  *a3 = v9;
  v10 = 0;
  v11 = 0LL;
  v55 = v9;
  if ( v7 != 1 )
    v8 = 0LL;
  v56 = v8;
  v57 = v9;
  v12 = *(_QWORD *)(384LL * *(unsigned int *)(a1 + 56) + qword_140E2DC38 + 376);
  v13 = (volatile LONG *)(v12 + 64);
  v59 = (volatile LONG *)(v12 + 64);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v12 + 64));
  v14 = 0LL;
  v15 = v62;
  v16 = v12 + 135;
  v17 = (unsigned int *)(a1 + 148);
  do
  {
    v18 = *(v17 - 1) == 0;
    *v15 = 5;
    if ( !v18 )
    {
      v10 += *(_DWORD *)(304LL * v9 + a1 + 148);
      v11 = v16 - 7;
      v32 = v14 != 0;
      *((_QWORD *)&v58 + v32) += *(_QWORD *)(v16 + 9) * *v17;
      if ( *(_BYTE *)v16 )
        *((_BYTE *)v54 + v32) = 1;
    }
    ++v14;
    v15 += 14;
    v17 += 76;
    v16 += 168LL;
  }
  while ( v14 < 3 );
  if ( !v11 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(v13);
    return 4LL;
  }
  v19 = *(_DWORD *)(a1 + 148) + v10;
  MiGetEngineBackgroundQualifications(a1 + 136, v54, &v58, v61);
  v20 = v62[0];
  if ( !v62[0] )
    goto LABEL_28;
  v21 = v57;
  v22 = *((_QWORD *)&v58 + 1);
  v23 = v56;
  while ( 1 )
  {
    v24 = v21;
    if ( !v21 )
      goto LABEL_21;
    v25 = (int *)(a1 + 304 * v21 + 136);
    v26 = v25[3];
    v27 = v25[1];
    v19 += v26;
    LODWORD(v61[7 * v21 + 5]) = 5;
    if ( v27 )
    {
      if ( v27 == v26 )
      {
        ++MiZeroThreadStats;
      }
      else if ( v26 < v25[2] )
      {
        v28 = *v25;
        v29 = *(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)v25 + 22) + 56LL) + qword_140E2DC38 + 376);
        v30 = *(_QWORD *)(168 * v28 + v29 + 144);
        if ( LOBYTE(v54[0]) && (unsigned __int64)(v30 + v58) > *(_QWORD *)(v29 + 576) )
        {
          ++dword_140EF4E4C;
        }
        else if ( HIBYTE(v54[0]) && (unsigned __int64)(v22 + v30) > *(_QWORD *)(v29 + 584) && (_DWORD)v28 )
        {
          ++dword_140EF4E48;
        }
        else
        {
          MiFindBestZeroingProcessor((__int64)&v61[7 * v21], (int *)(a1 + 304 * v21 + 136), 0, 0);
        }
      }
    }
    if ( !v62[14 * v21] )
      break;
    v23 = v56;
LABEL_21:
    if ( v21 == v23 )
      break;
    v31 = 1LL;
    if ( v7 != 1 )
      v31 = -1LL;
    v21 = v24 + v31;
  }
  v20 = v62[0];
  v9 = v55;
  v13 = v59;
LABEL_28:
  ExReleaseSpinLockSharedFromDpcLevel(v13);
  v33 = 0;
  if ( v20 )
  {
    v34 = 5;
    v33 = 3;
    v35 = v57;
    if ( v7 != 1 )
      v33 = 0;
    while ( 1 )
    {
      v36 = v9;
      v37 = v35;
      if ( v9 )
      {
        v38 = v62[14 * v35];
        if ( v38 != 5 && v38 < v34 )
        {
          v34 = v62[14 * v35];
          v33 = v9;
        }
      }
      if ( v35 == v56 )
        break;
      v39 = 1;
      if ( v7 != 1 )
        v39 = -1;
      v9 = v36 + v39;
      v40 = 1LL;
      if ( v7 != 1 )
        v40 = -1LL;
      v35 = v37 + v40;
    }
    if ( v62[0] != 5 && v62[0] <= v34 )
    {
      v34 = v62[0];
      v33 = 0;
    }
    v41 = 0;
    if ( v34 == 5 )
    {
LABEL_41:
      v33 = 3;
      v41 = 2;
    }
    else if ( v34 == 4 )
    {
      if ( v19 )
      {
        v34 = 5;
        goto LABEL_41;
      }
      v41 = 3;
      v50 = 2;
      if ( v7 != 1 )
      {
        v51 = (_DWORD *)(a1 + 756);
        v52 = 2LL;
        do
        {
          v53 = *(v51 - 2);
          if ( v53 )
          {
            if ( v53 == *v51 )
            {
              ++MiZeroThreadStats;
            }
            else if ( *v51 < *(v51 - 1) )
            {
              v33 = v50;
              v41 = 0;
            }
            if ( v52 == v57 )
              break;
            --v50;
            --v52;
            v51 -= 76;
          }
        }
        while ( v52 != v56 );
      }
    }
  }
  else
  {
    v34 = 0;
    v41 = 0;
  }
  ++dword_140EF4E90[v34];
  if ( v33 == 3 )
  {
    v42 = 0;
    v43 = (_DWORD *)(a1 + 148);
    for ( i = 0LL; i < 3; ++i )
    {
      if ( *v43 )
        break;
      ++v42;
      v43 += 76;
    }
    if ( v42 == 3 )
      *(_BYTE *)(57216LL * *(unsigned int *)(a1 + 56) + *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 15296) = 0;
LABEL_48:
    ++dword_140EF4E44;
    return v41;
  }
  else
  {
    v46 = v33;
    *v60 = v33;
    v47 = a1 + 304LL * v33;
    for ( j = *(_QWORD **)(v47 + 328); ; j = (_QWORD *)*j )
    {
      if ( j == (_QWORD *)(v47 + 328) )
      {
        v41 = 2;
        goto LABEL_48;
      }
      v49 = (__int64)(j - 52);
      if ( (*(_DWORD *)(j - 4) & 6) == 2 )
        break;
    }
    ++*(_DWORD *)(v47 + 416);
    MiIncrementZeroEngineThread(j - 52);
    if ( *(_QWORD *)(v49 + 432) )
      MiUnlinkZeroThreadFromActiveDomain(v49);
    MiAssignBackgroundZeroThreadToProcessor(v49, v47 + 136, (__int64)&v61[7 * v46]);
    MiRestartZeroingPass(v47 + 136);
    return 0LL;
  }
}

/*
 * XREFs of MiProcessLargeCoalesceCandidates @ 0x140314284
 * Callers:
 *     MiPerformOnDemandLargePageCoalesce @ 0x1402640DC (MiPerformOnDemandLargePageCoalesce.c)
 *     MiRebuildLargePagesThread @ 0x140314BA0 (MiRebuildLargePagesThread.c)
 * Callees:
 *     MiAccumulateTimeBoundTime @ 0x140265384 (MiAccumulateTimeBoundTime.c)
 *     MiProcessLargeCoalesceBitmapCandidates @ 0x140313370 (MiProcessLargeCoalesceBitmapCandidates.c)
 *     MiCheckLargePagesExist @ 0x1403137D8 (MiCheckLargePagesExist.c)
 *     MiDereferencePageRuns @ 0x1403F89A4 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x1403F8A50 (MiReferencePageRuns.c)
 */

__int64 __fastcall MiProcessLargeCoalesceCandidates(_QWORD *a1, unsigned int a2, unsigned int *a3)
{
  __int64 v3; // rsi
  __int64 v4; // r12
  __int64 v6; // r14
  __int64 v7; // r9
  unsigned int *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r10
  __int64 v11; // r15
  __int64 v12; // rbp
  __int64 v13; // rbp
  unsigned int v14; // ebx
  int v15; // ebp
  __int64 v17; // rdx
  __int64 v18; // r11
  __int64 v19; // r10
  __int64 v20; // rax
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r11
  __int64 v23; // rcx
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r10
  unsigned __int64 *v30; // r9
  unsigned __int64 v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rcx
  unsigned __int64 v34; // rbp
  __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  unsigned __int64 v38; // r8
  _WORD *v39; // r12
  unsigned __int64 v40; // r10
  unsigned __int64 v41; // r9
  volatile signed __int32 *v42; // r8
  unsigned int v43; // eax
  __int64 v44; // rcx
  _WORD *v45; // r9
  ULONG_PTR v46; // r10
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // r11
  unsigned int v51; // eax
  int v52; // eax
  unsigned __int64 v53; // rdx
  ULONG_PTR v54; // rax
  unsigned __int64 v55; // r9
  unsigned int v56; // eax
  int v57; // eax
  unsigned int *v58; // [rsp+40h] [rbp-D8h]
  unsigned __int64 v59; // [rsp+48h] [rbp-D0h]
  __int64 v60; // [rsp+50h] [rbp-C8h]
  unsigned int *v61; // [rsp+58h] [rbp-C0h]
  __int64 v62; // [rsp+60h] [rbp-B8h]
  __int64 v63; // [rsp+68h] [rbp-B0h]
  __int64 v64; // [rsp+70h] [rbp-A8h]
  __int64 v65; // [rsp+78h] [rbp-A0h]
  int v66; // [rsp+80h] [rbp-98h]
  __int64 v67; // [rsp+88h] [rbp-90h]
  unsigned __int8 CurrentIrql; // [rsp+90h] [rbp-88h]
  ULONG_PTR v69; // [rsp+98h] [rbp-80h]
  unsigned __int64 v70; // [rsp+A8h] [rbp-70h]
  unsigned __int64 v71; // [rsp+B0h] [rbp-68h]
  unsigned __int64 v72; // [rsp+B8h] [rbp-60h]
  unsigned __int64 v73; // [rsp+C0h] [rbp-58h]
  int v74; // [rsp+120h] [rbp+8h]
  __int64 v76; // [rsp+138h] [rbp+20h]

  v3 = (__int64)a3;
  v4 = a2;
  v67 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v74 = 0;
  v6 = a2;
  v63 = 6LL * a2;
  if ( a3 )
  {
    v67 = *(_QWORD *)(*((_QWORD *)a3 + 3) + 8LL * a2 + 57136);
    a3 = (unsigned int *)MiReferencePageRuns(a1, 1LL);
    v61 = a3;
    v7 = *a3;
    v8 = &a3[4 * v7 + 4];
  }
  else
  {
    v61 = 0LL;
    v8 = 0LL;
    LODWORD(v7) = 1;
  }
  v58 = v8;
  v9 = MiPageSizes[v4];
  v10 = 1LL << (LOBYTE(MiLargePageCoalesceCandidateBitmapShifts[v4]) - (unsigned __int8)MiLargePageShifts[v4]);
  v59 = v9;
  v76 = v10;
  v64 = 2 * v6;
  if ( (_DWORD)v4 )
  {
    v11 = 2LL;
    if ( (_DWORD)v4 == 1 )
      v12 = a1[2048];
    else
      v12 = qword_140E3CD38;
  }
  else
  {
    v12 = a1[2055];
    v11 = 4LL;
  }
  v65 = 0LL;
  v60 = v12;
  v13 = a1[2 * v6 + 2050];
  v62 = v13;
  while ( (_DWORD)v7 )
  {
    v7 = (unsigned int)(v7 - 1);
    v66 = v7;
    if ( !v3 )
    {
      v17 = 0LL;
      v18 = a1[2313] + 1LL;
      goto LABEL_17;
    }
    if ( v8[2 * v7] == *(_DWORD *)(v3 + 12) )
    {
      v17 = *(_QWORD *)&a3[4 * (unsigned int)v7 + 4];
      v18 = v17 + *(_QWORD *)&a3[4 * (unsigned int)v7 + 6];
LABEL_17:
      v19 = v17 - 1;
      v8 = v58;
      v20 = ~(v9 - 1);
      v21 = v20 & (v9 + v19);
      v22 = v20 & v18;
      v69 = v21;
      if ( v21 < v22 )
      {
        v23 = MiLargePageCoalesceCandidateBitmapShifts[v6];
        v24 = v22 - 1;
        v70 = v24;
        v25 = v21 >> v23;
        v26 = a1[v64 + 2049] - 1LL;
        if ( v24 >> v23 < v26 )
          v26 = v24 >> v23;
        v73 = v26;
        v27 = v26 + 1;
        v72 = v26 + 1;
LABEL_21:
        v8 = v58;
        a3 = v61;
        LODWORD(v7) = v66;
        if ( v27 > v25 )
        {
          v28 = 0LL;
          v29 = v13 + 8 * (v26 >> 6);
          v30 = (unsigned __int64 *)(v13 + 8 * (v25 >> 6));
          v31 = ~((1LL << (v25 & 0x3F)) - 1) & *v30;
          v32 = v30 + 1;
          while ( !v31 )
          {
            if ( (unsigned __int64)v32 > v29 )
              goto LABEL_66;
            ++v30;
            ++v32;
            v31 = *v30;
          }
          _BitScanForward64((unsigned __int64 *)&v33, v31);
          v34 = (unsigned int)v33 + (((__int64)v30 - v62) >> 3 << 6);
          if ( v34 > v27 )
          {
LABEL_66:
            v34 = v27;
            goto LABEL_37;
          }
          v35 = ((1LL << v33) - 1) | v31;
          while ( 1 )
          {
            v36 = ~v35;
            if ( v36 )
              break;
            if ( (unsigned __int64)(v30 + 1) > v29 )
            {
              v37 = 64LL;
              goto LABEL_34;
            }
            v35 = v30[1];
            ++v30;
          }
          _BitScanForward64((unsigned __int64 *)&v37, v36);
LABEL_34:
          v38 = v37 + (((__int64)v30 - v62) >> 3 << 6);
          if ( v38 > v27 )
            v38 = v27;
          v28 = v38 - v34;
LABEL_37:
          if ( v28 )
          {
            v25 = v28 + v34;
            v71 = v28 + v34;
            v39 = (_WORD *)(v60 + v11 * v76 * v34);
            while ( 1 )
            {
              if ( v34 >= v25 )
              {
                v27 = v72;
                v26 = v73;
                v13 = v62;
                goto LABEL_21;
              }
              if ( !v3 )
              {
                v40 = v34 & 0x1F;
                LOBYTE(v41) = 1;
                a1[v63 + 2063] = v34;
                v42 = (volatile signed __int32 *)(a1[v64 + 2050] + 4 * (v34 >> 5));
                if ( v40 + 1 <= 0x20 )
                {
                  v43 = ~(1 << v40);
LABEL_43:
                  _InterlockedAnd(v42, v43);
                  goto LABEL_44;
                }
                if ( (v34 & 0x1F) == 0 )
                  goto LABEL_61;
                _InterlockedAnd(v42++, ~(((1 << (32 - (v34 & 0x1F))) - 1) << v40));
                v41 = 1LL - (32 - (unsigned int)(v34 & 0x1F));
                if ( v41 >= 0x20 )
                {
                  v53 = v41 >> 5;
                  v41 += -32LL * (v41 >> 5);
                  do
                  {
                    *v42++ = 0;
                    --v53;
                  }
                  while ( v53 );
                }
                if ( v41 )
                {
LABEL_61:
                  v43 = -1 << v41;
                  goto LABEL_43;
                }
              }
LABEL_44:
              v44 = MiLargePageCoalesceCandidateBitmapShifts[v6];
              v45 = v39;
              v46 = v34++ << v44;
              v47 = (v34 << v44) - 1;
              v48 = (unsigned __int64)v39 + v11 * (v76 - 1);
              if ( v47 <= v24 )
              {
                v50 = v59;
              }
              else
              {
                v49 = v47 - v24;
                v50 = v59;
                v48 -= v11 * (v49 / v59);
              }
              if ( v46 < v69 )
              {
                v54 = v69 - v46;
                v46 = v69;
                v45 = (_WORD *)((char *)v39 + v11 * (v54 / v50));
              }
              v51 = MiProcessLargeCoalesceBitmapCandidates((__int64)a1, v46, a2, v45, v48, v11, CurrentIrql, v3);
              v14 = v51;
              if ( v3 )
              {
                if ( v51 == -1073741267 )
                {
                  v74 = 1;
                }
                else if ( v51 != 261 )
                {
                  goto LABEL_12;
                }
                if ( (++v65 & 0x1F) == 0 )
                {
                  LOBYTE(v52) = MiAccumulateTimeBoundTime((ULONG64 *)(*(_QWORD *)(v3 + 32) + 40LL), 0);
                  if ( v52 )
                    goto LABEL_53;
                }
              }
              else
              {
                a1[v63 + 2063] = -2LL;
              }
              v39 = (_WORD *)((char *)v39 + v11 * v76);
              v24 = v70;
              v25 = v71;
            }
          }
          v8 = v58;
          a3 = v61;
          LODWORD(v7) = v66;
          v13 = v62;
        }
        v9 = v59;
      }
      v10 = v76;
    }
  }
  v14 = 261;
  if ( v3 )
  {
    *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v6 + 16) = v67;
    *(_DWORD *)(*(_QWORD *)(v3 + 32) + 4 * v6) = *(_DWORD *)(v3 + 12);
    v55 = a1[v63 + 2063];
    if ( v55 > 0xFFFFFFFFFFFFFFFDuLL )
    {
      v15 = v74;
    }
    else
    {
      v56 = MiProcessLargeCoalesceBitmapCandidates(
              (__int64)a1,
              v55 << MiLargePageCoalesceCandidateBitmapShifts[v6],
              a2,
              (_WORD *)(v60 + v11 * v10 * v55),
              v60 + v11 * v10 * v55 + v11 * (v10 - 1),
              v11,
              CurrentIrql,
              v3);
      v14 = v56;
      if ( v56 == -1073741267 )
      {
        v14 = 261;
        v15 = 1;
      }
      else
      {
        v15 = v74;
        if ( v56 != 261 )
          goto LABEL_12;
      }
    }
    if ( (unsigned int)MiCheckLargePagesExist(v3) <= 1 )
    {
      v14 = 255;
      goto LABEL_12;
    }
    LOBYTE(v57) = MiAccumulateTimeBoundTime((ULONG64 *)(*(_QWORD *)(v3 + 32) + 40LL), 0);
    if ( v57 )
    {
LABEL_53:
      v14 = 258;
      goto LABEL_12;
    }
  }
  else
  {
    v15 = v74;
  }
  if ( v15 )
    v14 = -1073741267;
LABEL_12:
  if ( v61 )
    MiDereferencePageRuns(v61, v8);
  return v14;
}

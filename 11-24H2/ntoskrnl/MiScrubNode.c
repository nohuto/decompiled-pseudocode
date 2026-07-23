/*
 * XREFs of MiScrubNode @ 0x140A2DE94
 * Callers:
 *     MiScrubMemoryWorker @ 0x1407FE240 (MiScrubMemoryWorker.c)
 * Callees:
 *     MiAdjustCachedStacks @ 0x1402AF604 (MiAdjustCachedStacks.c)
 *     MiClaimPhysicalRun @ 0x1402FED00 (MiClaimPhysicalRun.c)
 *     MiPfnsWorthTrying @ 0x14030F9E0 (MiPfnsWorthTrying.c)
 *     MiScrubPage @ 0x1403EBDB0 (MiScrubPage.c)
 *     MiMakePageBad @ 0x140477B64 (MiMakePageBad.c)
 *     MiScrubInterrupted @ 0x1404845F4 (MiScrubInterrupted.c)
 *     MiScrubLargePageRegions @ 0x1406F60D4 (MiScrubLargePageRegions.c)
 */

void __fastcall MiScrubNode(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int *v3; // r8
  __int64 v4; // rbx
  __int64 v5; // r14
  unsigned int *v6; // r10
  unsigned int v7; // r9d
  unsigned __int64 v8; // rbp
  __int64 v9; // r15
  unsigned int i; // r13d
  __int64 v11; // rax
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rbx
  __int64 j; // rdi
  __int64 v15; // r11
  unsigned __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // [rsp+50h] [rbp-58h]
  int v23; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+10h]
  __int64 v25; // [rsp+C0h] [rbp+18h]
  unsigned int *v26; // [rsp+C8h] [rbp+20h]

  v23 = 0;
  v2 = *(_QWORD *)a1;
  v22 = *(_QWORD *)a1;
  v3 = *(unsigned int **)(*(_QWORD *)a1 + 80LL);
  v24 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v4 = *v3;
  v25 = v4;
  LODWORD(v5) = v4;
  v6 = &v3[4 * v4 + 4];
  v26 = v6;
  v7 = -1;
  while ( (_DWORD)v5 )
  {
    v5 = (unsigned int)(v5 - 1);
    if ( v6[2 * v5] == *(_DWORD *)(a1 + 8) )
    {
      v8 = *(_QWORD *)(a1 + 192);
      v7 = v5;
      v20 = *(_QWORD *)&v3[4 * (unsigned int)v5 + 4];
      v21 = *(_QWORD *)&v3[4 * (unsigned int)v5 + 6];
      if ( v8 >= v20 || v8 == -1LL )
      {
        if ( v8 >= v21 + v20 - 1 )
        {
          v8 = v21 + v20 - 1;
        }
        else
        {
          LODWORD(v4) = v4 + 1;
          v25 = (unsigned int)v4;
        }
        if ( v8 != -1LL )
          goto LABEL_6;
        break;
      }
    }
  }
  if ( v7 == -1 )
    return;
  LODWORD(v5) = v7;
  v8 = *(_QWORD *)&v3[4 * v7 + 6] + *(_QWORD *)&v3[4 * v7 + 4] - 1LL;
LABEL_6:
  LODWORD(v9) = v5 + 1;
  for ( i = 0; i < (unsigned int)v4; ++i )
  {
    if ( !(_DWORD)v9 )
      LODWORD(v9) = **(_DWORD **)(v2 + 80);
    v9 = (unsigned int)(v9 - 1);
    if ( v6[2 * v9] == *(_DWORD *)(a1 + 8) )
    {
      v11 = *(_QWORD *)(v2 + 80);
      v12 = *(_QWORD *)(v11 + 16LL * (unsigned int)v9 + 16);
      v13 = *(_QWORD *)(v11 + 16LL * (unsigned int)v9 + 24) + v12 - 1;
      if ( (_DWORD)v9 == (_DWORD)v5 )
      {
        if ( i )
          v12 = v8 + 1;
        else
          v13 = v8;
      }
      for ( j = 48 * v13 - 0x220000000000LL; ; j -= 48LL )
      {
        if ( v13 < v12 || !v12 )
        {
LABEL_34:
          v6 = v26;
          LODWORD(v4) = v25;
          v2 = v22;
          break;
        }
        if ( MiScrubInterrupted(a1) )
        {
          *(_QWORD *)(57216LL * *(unsigned int *)(a1 + 8) + *(_QWORD *)(v15 + 16) + 15248) = v13;
          return;
        }
        v16 = MiPfnsWorthTrying((__int16 *)v15, j, 1LL, 117440512, &v23);
        if ( v16 )
        {
          if ( v16 >= v13 - v12 + 1 )
            goto LABEL_34;
          j += 48 - 48 * v16;
          v13 += 1 - v16;
          v18 = MiScrubLargePageRegions(a1, j, v16);
          if ( v18 )
          {
            v13 += v18;
            if ( MiScrubInterrupted(a1) )
            {
              *(_QWORD *)(57216LL * *(unsigned int *)(a1 + 8) + *(_QWORD *)(v24 + 16) + 15248) = v13 - 1;
              return;
            }
            j += 48 * v19;
          }
        }
        else
        {
          if ( (v23 & 1) != 0 )
            MiAdjustCachedStacks(v24, 1);
          if ( !MiClaimPhysicalRun(v24, v13, 1LL, qword_140E2DD20, a1 + 48, 117440512, 0, 0LL, 0LL, &v23) )
          {
            v17 = MiScrubPage(a1, j, 0LL, 0);
            MiMakePageBad(v13, ((v17 >> 31) & 1) + 2);
          }
        }
        --v13;
      }
    }
  }
}

/*
 * XREFs of PfSnCheckActionsNeeded @ 0x140948CE8
 * Callers:
 *     PfSnBeginScenario @ 0x140948770 (PfSnBeginScenario.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x1402623FC (MmQueryMemoryListInformation.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     PsGetPagePriorityThread @ 0x1403305B0 (PsGetPagePriorityThread.c)
 *     MmGetDefaultPagePriority @ 0x140479730 (MmGetDefaultPagePriority.c)
 *     MmQueryTransitionPagesMadeColdCount @ 0x14048C490 (MmQueryTransitionPagesMadeColdCount.c)
 *     PfResourceExclusiveAcquire @ 0x140499D88 (PfResourceExclusiveAcquire.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PfSnPrefetchCacheEntryGet @ 0x140949040 (PfSnPrefetchCacheEntryGet.c)
 */

__int64 __fastcall PfSnCheckActionsNeeded(unsigned __int8 *a1, int a2, __int64 a3, int *a4, int *a5)
{
  int v8; // edi
  int v9; // esi
  unsigned int v10; // ebx
  unsigned int DefaultPagePriority; // eax
  __int64 v12; // r13
  unsigned int v13; // eax
  unsigned int v14; // edx
  unsigned __int8 *v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r10
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r15
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r14
  unsigned __int64 v25; // r15
  _QWORD *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // r14
  __int64 v30; // r12
  _QWORD *v31; // rdx
  __int64 v32; // rcx
  unsigned __int64 v33; // r12
  int v34; // r13d
  __int64 v35; // rax
  _DWORD *v36; // rcx
  unsigned int v38; // edx
  unsigned int v39; // eax
  bool v40; // cf
  int v41; // eax
  int v42; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v43; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v44; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v45; // [rsp+40h] [rbp-C0h]
  __int64 v46; // [rsp+48h] [rbp-B8h]
  unsigned __int8 *v47; // [rsp+50h] [rbp-B0h]
  int *v48; // [rsp+58h] [rbp-A8h]
  int *v49; // [rsp+60h] [rbp-A0h]
  _OWORD v50[6]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v51[9]; // [rsp+D8h] [rbp-28h] BYREF

  v47 = a1;
  v49 = a5;
  v48 = a4;
  memset_0(v50, 0, 0xB0uLL);
  LODWORD(v44) = 0;
  v43 = 0;
  v42 = 0;
  v8 = 3;
  v9 = 23;
  v10 = 3;
  if ( (dword_140E66FA0 & 8) != 0 )
  {
    v9 = 22;
    v8 = 22;
  }
  else
  {
    PsGetPagePriorityThread(a3);
    DefaultPagePriority = MmGetDefaultPagePriority();
    v12 = DefaultPagePriority;
    v13 = DefaultPagePriority - 1;
    if ( v14 <= v13 || (unsigned int)v12 <= v13 )
    {
      v8 = 2;
      v9 = 2;
    }
    else
    {
      if ( (dword_140E67260 & 0x10) != 0 && !a2 )
      {
        v10 = 1;
        v9 = 14;
      }
      v15 = a1;
      v16 = 314159LL;
      v17 = 8LL;
      do
      {
        v18 = *v15;
        v15 += 8;
        v19 = *(v15 - 3)
            + 37 * (*(v15 - 4) + 37 * (*(v15 - 5) + 37 * (*(v15 - 6) + 37 * (*(v15 - 7) + 37 * (v18 + 37 * v16)))));
        v20 = *(v15 - 1);
        v16 = v20 + 37 * (*(v15 - 2) + 37 * v19);
        --v17;
      }
      while ( v17 );
      v46 = v20 + 37 * (*(v15 - 2) + 37 * v19);
      v45 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      MmQueryMemoryListInformation((ULONG **)0xFFFFFFFFFFFFFFFFLL, v50, 0xB0u, (__int64)v15, &v44);
      v21 = 0LL;
      v22 = v51;
      v23 = 8LL;
      do
      {
        v21 += *v22++;
        --v23;
      }
      while ( v23 );
      v24 = 0LL;
      v25 = (unsigned __int64)(v21 << 12) >> 18;
      if ( (unsigned int)v12 <= 7 )
      {
        v26 = &v51[v12];
        v27 = (unsigned int)(8 - v12);
        do
        {
          v24 += *v26++;
          --v27;
        }
        while ( v27 );
      }
      v28 = (unsigned int)(v12 - 1);
      v29 = (unsigned __int64)(v24 << 12) >> 18;
      v30 = 0LL;
      if ( (unsigned int)v28 <= 7 )
      {
        v31 = &v51[v28];
        v32 = (unsigned int)(8 - v28);
        do
        {
          v30 += *v31++;
          --v32;
        }
        while ( v32 );
      }
      v33 = (unsigned __int64)(v30 << 12) >> 18;
      v34 = MmQueryTransitionPagesMadeColdCount(&v43);
      PfResourceExclusiveAcquire(&stru_140E671F0);
      v35 = PfSnPrefetchCacheEntryGet(&unk_140E671C8, v47, v46, &v42);
      v36 = (_DWORD *)v35;
      if ( v35 )
      {
        if ( v42 )
        {
          v8 = 13;
          if ( v10 >= 2 )
            v9 = 13;
        }
        else
        {
          v38 = v45 - *(_DWORD *)(v35 + 112);
          v39 = *(_DWORD *)(v35 + 116);
          v40 = v38 < v39;
          if ( v38 < v39 )
          {
            v10 &= ~1u;
            v40 = v38 < v39;
          }
          v8 = v40 + 4;
          if ( v10 >= 2 )
          {
            v9 = 4;
            if ( (dword_140E66FA0 & 2) == 0 )
            {
              if ( v38 >= 0x1B7740 )
              {
                if ( v38 >= 0x36EE80 )
                  v41 = v25 - v36[26];
                else
                  v41 = v33 - v36[25];
              }
              else
              {
                v41 = v29 - v36[24];
              }
              if ( !v41 && (!v43 || (unsigned int)(v34 - v36[27]) < 0x100) )
              {
                v10 &= ~2u;
                v9 = 7;
              }
            }
          }
        }
        v36[28] = v45;
        v36[24] = v29;
        v36[25] = v33;
        v36[26] = v25;
        v36[27] = v34;
      }
      else
      {
        v9 = 3;
      }
      ExReleaseResourceLite(&stru_140E671F0);
      KeLeaveCriticalRegion();
    }
  }
  *v48 = v8;
  *v49 = v9;
  return v10;
}

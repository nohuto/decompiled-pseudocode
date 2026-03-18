/*
 * XREFs of ?GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEBUVIDMM_GLOBAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1400DFCB4
 * Callers:
 *     VidMmDemoteAllocationsToFitGlobalAlloc @ 0x1400DF0C0 (VidMmDemoteAllocationsToFitGlobalAlloc.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x140114C70 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 * Callees:
 *     ?GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z @ 0x1400DFF4C (-GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z.c)
 */

unsigned __int64 __fastcall VIDMM_SEGMENT::GetLargestGap(__int64 a1, __int64 *a2, int a3, unsigned __int8 a4)
{
  int v4; // esi
  __int64 v6; // rax
  unsigned __int64 v9; // rdi
  unsigned int v10; // ebp
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v14; // rsi
  unsigned int v15; // r9d
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax

  v4 = *(_DWORD *)(a1 + 104);
  v6 = *a2;
  if ( (v4 & 0x20) != 0 )
    v9 = *(_QWORD *)(v6 + 24);
  else
    v9 = *(_QWORD *)(v6 + 16);
  v10 = *(_DWORD *)(v6 + 32);
  if ( (*(_DWORD *)a2[47] & 0x20000) != 0 )
  {
    v10 = *(_DWORD *)(a1 + 448);
    v9 = ~*(_QWORD *)(a1 + 440) & (*(_QWORD *)(a1 + 440) + v9);
  }
  v11 = *(_QWORD *)(a1 + 72);
  v12 = 0LL;
  if ( a3 != 7 )
  {
    if ( a3 == 3 )
    {
LABEL_7:
      a4 = 1;
      return VIDMM_LINEAR_POOL::GetLargestGap(*(VIDMM_LINEAR_POOL **)(a1 + 208), v9, v10, a4, v12, v11);
    }
    if ( a3 == 4 )
    {
      v15 = dword_1400812F8;
      if ( (v4 & 0x1001) != 0 )
        v15 = dword_1400812FC;
      if ( (*((_DWORD *)a2 + 7) & 0x800) == 0 )
      {
        v16 = v11 / 0x64;
        if ( *(_BYTE *)(a1 + 489) )
        {
          v12 = 0LL;
          v11 = (v16 * v15 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          goto LABEL_7;
        }
        v12 = (v16 * (100 - v15) + 4095) & 0xFFFFFFFFFFFFF000uLL;
      }
    }
    else
    {
      if ( a3 == 5 )
      {
        if ( *(_DWORD *)(a1 + 452) == 1 )
        {
          v17 = *(_QWORD *)(a1 + 472);
          if ( v17 )
          {
            if ( v17 >= v9 )
            {
              v12 = *(_QWORD *)(a1 + 456);
              v11 = *(_QWORD *)(a1 + 464);
            }
            else
            {
              a3 = 6;
            }
          }
          else
          {
            v11 = *(_QWORD *)(a1 + 424) + *(_QWORD *)(a1 + 432);
            v12 = v11 - v9;
          }
        }
        else
        {
          v12 = *(_QWORD *)(a1 + 424);
          v11 = v12 + *(_QWORD *)(a1 + 432);
        }
        a4 = 0;
      }
      if ( a3 != 6 )
        return VIDMM_LINEAR_POOL::GetLargestGap(*(VIDMM_LINEAR_POOL **)(a1 + 208), v9, v10, a4, v12, v11);
      if ( *(_DWORD *)(a1 + 452) == 1 )
      {
        if ( *(_QWORD *)(a1 + 456) - *(_QWORD *)(a1 + 424) < v9 )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            WdLogNewEntry5_WdTrace(a1);
            WdLogGlobalForLineNumber = 4656;
          }
          return *(_QWORD *)(a1 + 456) - *(_QWORD *)(a1 + 424);
        }
        v11 = *(_QWORD *)(a1 + 464);
        v12 = *(_QWORD *)(a1 + 456) - v9;
      }
      else
      {
        v12 = *(_QWORD *)(a1 + 424);
        v11 = v12 + *(_QWORD *)(a1 + 432);
      }
    }
LABEL_41:
    a4 = 0;
    return VIDMM_LINEAR_POOL::GetLargestGap(*(VIDMM_LINEAR_POOL **)(a1 + 208), v9, v10, a4, v12, v11);
  }
  if ( *(_DWORD *)(a1 + 452) != 1 )
    goto LABEL_41;
  result = 0LL;
  v14 = *(_QWORD *)(a1 + 424) + *(_QWORD *)(a1 + 432);
  if ( v14 < v11 )
    result = VIDMM_LINEAR_POOL::GetLargestGap(*(VIDMM_LINEAR_POOL **)(a1 + 208), v9, v10, 0, v14, v11);
  if ( result < v9 && v14 )
    return VIDMM_LINEAR_POOL::GetLargestGap(*(VIDMM_LINEAR_POOL **)(a1 + 208), v9, v10, 0, 0LL, v14);
  return result;
}

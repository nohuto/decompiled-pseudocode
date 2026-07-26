/*
 * XREFs of ?ndisSplitStatisticsOids@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAKK@Z @ 0x140072A10
 * Callers:
 *     ?ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z @ 0x14002DF40 (-ndisQueryOidList@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ndisIsQueryAllStatsOid @ 0x140072C70 (ndisIsQueryAllStatsOid.c)
 */

__int64 __fastcall ndisSplitStatisticsOids(struct _NDIS_USER_OPEN_CONTEXT *a1, unsigned int *a2, unsigned int a3)
{
  __int64 v3; // rdi
  unsigned int v4; // r12d
  int v5; // ebx
  unsigned int v7; // r13d
  unsigned int *v8; // r15
  int v10; // r9d
  unsigned int *v11; // rdx
  char v12; // al
  __int64 v13; // r8
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 Pool2; // rax
  unsigned int v18; // r8d
  unsigned int v19; // r9d
  int v20; // r8d
  unsigned int v21; // r9d
  __int64 v22; // r10
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int *v28; // rdx
  char IsQueryAllStatsOid; // al
  __int64 v30; // r8
  int v31; // ecx
  __int64 v32; // rdx

  v3 = *((_QWORD *)a1 + 1);
  v4 = 0;
  v5 = 0;
  v7 = 0;
  v8 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      10,
      (struct _GUID *)&WPP_8ea48a87d6d93b281ca763654e4bfa07_Traceguids,
      v3);
  }
  v10 = *(_DWORD *)(v3 + 3408) >> 2;
  if ( a3 )
  {
    v28 = v8;
    do
    {
      IsQueryAllStatsOid = ndisIsQueryAllStatsOid(*v28);
      v31 = v5 + 1;
      v28 = (unsigned int *)(v32 + 4);
      if ( !IsQueryAllStatsOid )
        v31 = v5;
      v5 = v31;
    }
    while ( v30 != 1 );
  }
  if ( v10 )
  {
    v11 = *(unsigned int **)(v3 + 3400);
    do
    {
      v12 = ndisIsQueryAllStatsOid(*v11);
      v14 = v5 + 1;
      v11 = (unsigned int *)(v15 + 4);
      if ( !v12 )
        v14 = v5;
      v5 = v14;
    }
    while ( v13 != 1 );
  }
  v16 = v10 + a3;
  Pool2 = ExAllocatePool2(66LL, 4LL * (unsigned int)(v16 + v5) + 24, 1634681934);
  *((_QWORD *)a1 + 2) = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 4) = v16;
    v18 = 0;
    *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL) = *((_QWORD *)a1 + 2) + 24LL;
    **((_DWORD **)a1 + 2) = v5;
    for ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL) = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL) + 4 * v16;
          v18 < (unsigned int)v16;
          *(_DWORD *)(v22 + *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL)) = v21 )
    {
      if ( v18 >= a3 )
        v19 = *(_DWORD *)(*(_QWORD *)(v3 + 3400) + 4LL * (v18 - a3));
      else
        v19 = *v8;
      if ( (unsigned __int8)ndisIsQueryAllStatsOid(v19) )
      {
        v25 = v4++;
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL) + 4 * v25) = v21;
        if ( v21 > 0x20201 )
        {
          v27 = v21 - 131586;
          if ( (unsigned int)v27 <= 0x1A )
            __asm { jmp     rcx }
        }
        else if ( v21 == 131585 )
        {
          *(_DWORD *)(v3 + 2688) |= 0x20u;
        }
        else
        {
          v26 = v21 - 131329;
          if ( (unsigned int)v26 <= 5 )
            __asm { jmp     rcx }
        }
      }
      v18 = v20 + 1;
      ++v8;
    }
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 1776LL) = *((_QWORD *)a1 + 2);
  }
  else
  {
    v7 = -1073741670;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xBu,
      (struct _GUID *)&WPP_8ea48a87d6d93b281ca763654e4bfa07_Traceguids,
      v3,
      v7);
  return v7;
}

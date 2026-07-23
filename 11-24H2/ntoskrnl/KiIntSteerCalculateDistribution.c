/*
 * XREFs of KiIntSteerCalculateDistribution @ 0x1402B1990
 * Callers:
 *     KeIntSteerPeriodic @ 0x1402B1294 (KeIntSteerPeriodic.c)
 * Callees:
 *     KiIntSteerCalculatePriorityDistribution @ 0x1402B20C0 (KiIntSteerCalculatePriorityDistribution.c)
 *     KiIntPartGetLowestClassProcessorInMask @ 0x1402B2334 (KiIntPartGetLowestClassProcessorInMask.c)
 *     KiIntSteerCalculateUniformDistribution @ 0x1402B304C (KiIntSteerCalculateUniformDistribution.c)
 *     KiIntSteerComputeCpuSet @ 0x1404A16C4 (KiIntSteerComputeCpuSet.c)
 */

__int64 __fastcall KiIntSteerCalculateDistribution(int a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int16 v10; // dx
  __int16 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  __int16 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  unsigned int v21; // ecx
  _QWORD *v22; // rbx
  __int64 v23; // rax
  unsigned int v24; // ecx
  _QWORD *v25; // [rsp+30h] [rbp-30h] BYREF
  _QWORD **v26; // [rsp+38h] [rbp-28h]
  __int128 v27; // [rsp+40h] [rbp-20h] BYREF
  __int128 v28; // [rsp+50h] [rbp-10h] BYREF

  v5 = KiIntTrackRootList;
  v6 = *(_QWORD *)a4 | *a3 | *(_QWORD *)a2;
  v26 = &v25;
  v25 = &v25;
  if ( (__int64 *)KiIntTrackRootList != &KiIntTrackRootList )
  {
    do
    {
      if ( *(_BYTE *)(v5 + 132) && (!*(_QWORD *)(v5 + 136) || (int)KiIntSteerComputeCpuSet(v5) < 0) )
      {
        if ( *(_QWORD *)(v5 + 192) )
        {
          v19 = v26;
          v20 = (_QWORD *)(v5 + 208);
          if ( *v26 != &v25 )
LABEL_19:
            __fastfail(3u);
          *(_QWORD *)(v5 + 216) = v26;
          *v20 = &v25;
          *v19 = v20;
          v26 = (_QWORD **)(v5 + 208);
        }
        else
        {
          v18 = *(_QWORD *)(v5 + 160);
          if ( (v6 & v18) != v18 )
          {
            v21 = *((_DWORD *)KiGlobalState + (unsigned int)KiIntPartGetLowestClassProcessorInMask(v5 + 64));
            *(_DWORD *)(v5 + 186) = 0;
            *(_WORD *)(v5 + 190) = 0;
            *(_WORD *)(v5 + 184) = v21 >> 6;
            v18 = 1LL << (v21 & 0x3F);
          }
          *(_QWORD *)(v5 + 176) = v18;
        }
      }
      v5 = *(_QWORD *)v5;
    }
    while ( (__int64 *)v5 != &KiIntTrackRootList );
    if ( v25 != &v25 )
    {
      v10 = *((_WORD *)a3 + 4);
      v11 = *(_WORD *)(a2 + 8);
      v28 = 0LL;
      WORD4(v28) = v10;
      if ( v10 == v11 )
      {
        v12 = *a3;
        v13 = *a3 & ~*(_QWORD *)a2;
      }
      else
      {
        v13 = *a3;
        v12 = *a3;
      }
      v14 = *(_WORD *)(a4 + 8);
      *(_QWORD *)&v28 = v13;
      v27 = 0LL;
      WORD4(v27) = v14;
      v15 = v14 == v11 ? *(_QWORD *)a4 & ~*(_QWORD *)a2 : *(_QWORD *)a4;
      v16 = v14 == v10 ? v15 & ~v12 : v15;
      *(_QWORD *)&v27 = v16;
      KiIntSteerCalculatePriorityDistribution(a1, (unsigned int)&v25, a2, (unsigned int)&v28, (__int64)&v27);
      if ( v25 != &v25 )
      {
        KiIntSteerCalculateUniformDistribution(&v25, a4);
        v22 = v25;
        if ( v25 != &v25 )
        {
          while ( v22 != &v25 )
          {
            if ( (_QWORD **)v22[1] != &v25 )
              goto LABEL_19;
            v23 = *v22;
            if ( *(_QWORD **)(*v22 + 8LL) != v22 )
              goto LABEL_19;
            v25 = (_QWORD *)*v22;
            *(_QWORD *)(v23 + 8) = &v25;
            v24 = *((_DWORD *)KiGlobalState + (unsigned int)KiIntPartGetLowestClassProcessorInMask(v22 - 18));
            *(_DWORD *)((char *)v22 - 22) = 0;
            *((_WORD *)v22 - 9) = 0;
            *((_WORD *)v22 - 12) = v24 >> 6;
            *(v22 - 4) = 1LL << (v24 & 0x3F);
            v22 = v25;
          }
        }
      }
    }
  }
  return 0LL;
}

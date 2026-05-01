/*
 * XREFs of ?RmpCpuSetManagerPopulateCpuSetIdsFromAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@PEAK1@Z @ 0x18008AF9C
 * Callers:
 *     ?RmpCpuSetManagerPublishAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18008B3B8 (-RmpCpuSetManagerPublishAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall RmpCpuSetManagerPopulateCpuSetIdsFromAllocation(
        struct _RM_CPU_SET_ALLOCATION *a1,
        unsigned int *a2,
        unsigned int *a3)
{
  _OWORD *v3; // rax
  _OWORD *v4; // r9
  __int64 v7; // r10
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rbx
  unsigned __int64 *v16; // r8
  unsigned int i; // r9d
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rdx
  unsigned int v20; // eax
  _BYTE v21[256]; // [rsp+10h] [rbp-128h] BYREF

  v3 = (_OWORD *)((char *)a1 + 104);
  v4 = v21;
  v7 = 2LL;
  do
  {
    v8 = v3[1];
    *v4 = *v3;
    v9 = v3[2];
    v4[1] = v8;
    v10 = v3[3];
    v4[2] = v9;
    v11 = v3[4];
    v4[3] = v10;
    v12 = v3[5];
    v4[4] = v11;
    v13 = v3[6];
    v4[5] = v12;
    v14 = v3[7];
    v3 += 8;
    v4[6] = v13;
    v4 += 8;
    *(v4 - 1) = v14;
    --v7;
  }
  while ( v7 );
  v15 = 0LL;
  v16 = (unsigned __int64 *)v21;
  for ( i = 0; i < 0x20; ++i )
  {
    v18 = *v16;
    if ( *v16 )
    {
      do
      {
        _BitScanForward64(&v19, v18);
        v18 &= ~(1LL << v19);
        a3[v15] = v19 | (i << 16) | 0x100;
        v15 = (unsigned int)(v15 + 1);
      }
      while ( v18 );
      *v16 = 0LL;
    }
    v20 = *((_DWORD *)a1 + 90);
    if ( (_DWORD)v15 == v20 )
      break;
    ++v16;
  }
  *a2 = v20;
}

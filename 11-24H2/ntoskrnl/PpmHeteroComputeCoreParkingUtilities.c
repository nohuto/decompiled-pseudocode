/*
 * XREFs of PpmHeteroComputeCoreParkingUtilities @ 0x140416EEC
 * Callers:
 *     PpmHeteroComputeMultiClassUnparkCount @ 0x140416434 (PpmHeteroComputeMultiClassUnparkCount.c)
 *     PpmCheckComputeMultiClassHeteroResponse @ 0x140416940 (PpmCheckComputeMultiClassHeteroResponse.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     PpmHeteroUtilityToNormalizedUtility @ 0x1404176C4 (PpmHeteroUtilityToNormalizedUtility.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall PpmHeteroComputeCoreParkingUtilities(
        int a1,
        __int64 a2,
        unsigned int *a3,
        void *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v7; // rbp
  __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned __int8 v12; // r15
  unsigned int v13; // ecx
  unsigned __int64 v14; // rdx
  unsigned int v15; // r14d
  __int64 v16; // rbx
  unsigned __int64 v17; // rdi
  unsigned int v18; // ecx
  unsigned __int64 v19; // rdx
  __int64 Prcb; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // r8d
  unsigned __int8 v26; // r10
  int v27; // eax
  int v28; // r8d

  v7 = 0LL;
  *a6 = 0LL;
  *a5 = 0LL;
  memset_0(a3, 0, 0x100uLL);
  memset_0(a4, 0, 0x100uLL);
  LOWORD(v10) = *(_WORD *)(a2 + 8);
  v11 = *(_QWORD *)a2;
  v12 = -1;
  do
  {
    v13 = (unsigned __int16)v10 + 1;
    while ( !v11 )
    {
      v10 = (unsigned __int16)(v10 + 1);
      if ( (unsigned int)v10 >= v13 )
        goto LABEL_7;
      v11 = *(_QWORD *)(8 * v10 + 8);
    }
    _BitScanForward64(&v14, v11);
    v11 &= ~(1LL << v14);
    v15 = *((_DWORD *)qword_140F22998 + 64 * (unsigned __int16)v10 + (unsigned __int8)v14);
    if ( v12 >= *(_BYTE *)(KeGetPrcb(v15) + 35336) )
      v12 = *(_BYTE *)(KeGetPrcb(v15) + 35336);
  }
  while ( v12 != a1 );
LABEL_7:
  LOWORD(v16) = *(_WORD *)(a2 + 8);
  v17 = *(_QWORD *)a2;
LABEL_8:
  v18 = (unsigned __int16)v16 + 1;
  while ( 1 )
  {
    if ( v17 )
    {
      _BitScanForward64(&v19, v17);
      v17 &= ~(1LL << v19);
      Prcb = KeGetPrcb(*((_DWORD *)qword_140F22998 + 64 * (unsigned __int16)v16 + (unsigned __int8)v19));
      v21 = *(unsigned int *)(Prcb + 35288);
      if ( PpmCheckCurrentPipelineId != 5 )
        v21 = (unsigned int)(v21 - *(_DWORD *)(Prcb + 35296));
      a3[v7] = PpmHeteroUtilityToNormalizedUtility(Prcb + 35248, v21);
      v23 = PpmHeteroUtilityToNormalizedUtility(v22, *(unsigned int *)(v22 + 52));
      *((_DWORD *)a4 + v7) = v23;
      v25 = v23;
      if ( v26 > v12 )
      {
        v27 = PpmHeteroUtilityToNormalizedUtility(v24, *(unsigned int *)(v24 + 56));
        v25 = v27 + v28;
        *((_DWORD *)a4 + v7) = v25;
      }
      *a6 += v25;
      *a5 += a3[v7];
      v7 = (unsigned int)(v7 + 1);
      goto LABEL_8;
    }
    v16 = (unsigned __int16)(v16 + 1);
    if ( (unsigned int)v16 >= v18 )
      break;
    v17 = *(_QWORD *)(8 * v16 + 8);
  }
  qsort(a3, (unsigned int)v7, 4uLL, PpmUtilityComparer);
  qsort(a4, (unsigned int)v7, 4uLL, PpmUtilityComparer);
}

/*
 * XREFs of PpmHeteroComputeCoreParkingUtilitiesEx @ 0x1405DD6A8
 * Callers:
 *     PpmCheckComputeMultiClassHeteroResponseEx @ 0x1405DD1F4 (PpmCheckComputeMultiClassHeteroResponseEx.c)
 *     PpmHeteroComputeMultiClassUnparkCountEx @ 0x1405DD850 (PpmHeteroComputeMultiClassUnparkCountEx.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     PpmHeteroUtilityToNormalizedUtility @ 0x1404176C4 (PpmHeteroUtilityToNormalizedUtility.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall PpmHeteroComputeCoreParkingUtilitiesEx(
        int a1,
        __int64 a2,
        unsigned int *a3,
        void *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  _QWORD *v6; // r12
  _QWORD *v7; // r13
  size_t v10; // r8
  unsigned int v12; // edi
  unsigned __int8 v13; // bl
  __int64 Prcb; // rax
  unsigned int v15; // edx
  unsigned int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r9
  unsigned int v22; // r8d
  unsigned __int8 v23; // r10
  int v24; // eax
  int v25; // r8d
  unsigned __int16 *v26; // [rsp+20h] [rbp-20h] BYREF
  __int64 v27; // [rsp+28h] [rbp-18h]
  __int16 v28; // [rsp+30h] [rbp-10h]
  int v29; // [rsp+32h] [rbp-Eh]
  __int16 v30; // [rsp+36h] [rbp-Ah]
  unsigned int v32; // [rsp+88h] [rbp+48h] BYREF

  v6 = a6;
  v7 = a5;
  v10 = 4LL * (unsigned int)KeMaximumProcessors;
  *a6 = 0LL;
  *v7 = 0LL;
  v29 = 0;
  v12 = 0;
  v30 = 0;
  v32 = 0;
  memset_0(a3, 0, v10);
  memset_0(a4, 0, 4LL * (unsigned int)KeMaximumProcessors);
  v28 = 0;
  v13 = -1;
  v27 = *(_QWORD *)(a2 + 8);
  v26 = (unsigned __int16 *)a2;
  if ( !(unsigned int)KeEnumerateNextProcessor(&v32, &v26) )
  {
    do
    {
      if ( v13 >= *(_BYTE *)(KeGetPrcb(v32) + 35336) )
        v13 = *(_BYTE *)(KeGetPrcb(v32) + 35336);
    }
    while ( v13 != a1 && !(unsigned int)KeEnumerateNextProcessor(&v32, &v26) );
    v6 = a6;
  }
  v28 = 0;
  v27 = *(_QWORD *)(a2 + 8);
  v26 = (unsigned __int16 *)a2;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v32, &v26) )
  {
    Prcb = KeGetPrcb(v32);
    v15 = *(_DWORD *)(Prcb + 35288);
    if ( PpmCheckCurrentPipelineId != 5 )
      v15 -= *(_DWORD *)(Prcb + 35296);
    v16 = PpmHeteroUtilityToNormalizedUtility(Prcb + 35248, v15);
    a3[v17] = v16;
    v19 = PpmHeteroUtilityToNormalizedUtility(v18, *(_DWORD *)(v18 + 52));
    *((_DWORD *)a4 + v21) = v19;
    v22 = v19;
    if ( v23 > v13 )
    {
      v24 = PpmHeteroUtilityToNormalizedUtility(v20, *(_DWORD *)(v20 + 56));
      v22 = v24 + v25;
      *((_DWORD *)a4 + v21) = v22;
    }
    *v6 += v22;
    *v7 += a3[v21];
    ++v12;
  }
  qsort(a3, v12, 4uLL, (int (__cdecl *)(const void *, const void *))PpmUtilityComparer);
  qsort(a4, v12, 4uLL, (int (__cdecl *)(const void *, const void *))PpmUtilityComparer);
}

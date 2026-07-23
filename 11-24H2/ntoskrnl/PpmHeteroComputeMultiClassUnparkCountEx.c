/*
 * XREFs of PpmHeteroComputeMultiClassUnparkCountEx @ 0x1405DD850
 * Callers:
 *     PpmCheckComputeMultiClassHeteroResponseEx @ 0x1405DD1F4 (PpmCheckComputeMultiClassHeteroResponseEx.c)
 * Callees:
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402AA18C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402B2A28 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     PpmEventTraceMultiClassHeteroResponseUpdate @ 0x1404E49EC (PpmEventTraceMultiClassHeteroResponseUpdate.c)
 *     PpmEventTraceMultiClassHeteroResponseEx @ 0x1405DC0EC (PpmEventTraceMultiClassHeteroResponseEx.c)
 *     PpmHeteroComputeCoreParkingUtilitiesEx @ 0x1405DD6A8 (PpmHeteroComputeCoreParkingUtilitiesEx.c)
 *     PpmHeteroComputeUnparkCountEx @ 0x1405DDBCC (PpmHeteroComputeUnparkCountEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall PpmHeteroComputeMultiClassUnparkCountEx(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        void *a4,
        unsigned int a5,
        char a6,
        char a7)
{
  unsigned __int64 v8; // rsi
  unsigned int v9; // r13d
  unsigned int v10; // edx
  __int64 v11; // rax
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v15; // r14d
  int v16; // r15d
  unsigned int v17; // edi
  unsigned __int16 *v18; // rdx
  unsigned int v19; // ecx
  char v20; // r10
  unsigned __int16 *v21; // rdi
  unsigned int v22; // r9d
  char v23; // al
  unsigned int v24; // edx
  ULONGLONG v25; // r9
  unsigned int *v26; // r8
  unsigned int v27; // edi
  unsigned __int64 v28; // rcx
  unsigned __int16 *v29; // r9
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  char v34; // [rsp+40h] [rbp-C0h]
  unsigned int v35; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v36[12]; // [rsp+54h] [rbp-ACh] BYREF
  void *v37; // [rsp+60h] [rbp-A0h]
  unsigned int *v38; // [rsp+68h] [rbp-98h]
  __int64 v39; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+78h] [rbp-88h]
  struct _KAFFINITY_EX v41; // [rsp+80h] [rbp-80h] BYREF

  v38 = a3;
  v40 = a2;
  v37 = a4;
  memset_0(&v41.8, 0, sizeof(v41.8));
  v8 = *(_QWORD *)(a1 + 1152);
  v35 = 0;
  v39 = 0LL;
  v9 = 1;
  if ( a7 )
  {
    v10 = 1;
    for ( *(_QWORD *)(a1 + 1192) = 0LL;
          v10 < *(unsigned __int8 *)(a1 + 12);
          *(_QWORD *)(640 * v11 + *(_QWORD *)(a1 + 1288) + 16) = 0LL )
    {
      v11 = v10++;
    }
  }
  *(_QWORD *)&v41.Count = 2097153LL;
  LOBYTE(v13) = (unsigned __int8)memset_0(&v41.8, 0, sizeof(v41.8));
  LOBYTE(v14) = *(_BYTE *)(a1 + 12);
  v15 = 0;
  v16 = 0;
  v17 = 1;
  if ( (unsigned __int8)v14 > 1u )
  {
    do
    {
      v18 = (unsigned __int16 *)(*(_QWORD *)(a1 + 1288) + 640LL * v17);
      v15 += v18[4];
      v16 += *v18;
      LOBYTE(v13) = KiOrAffinityEx(&v41, (struct _KAFFINITY_EX *)(v18 + 20), &v41, v41.Size);
      v14 = *(unsigned __int8 *)(a1 + 12);
      ++v17;
    }
    while ( v17 < v14 );
    if ( (unsigned __int8)v14 > 1u )
    {
      LOBYTE(v19) = *(_BYTE *)(a1 + 12);
      LOBYTE(v13) = v19;
      do
      {
        LOBYTE(v14) = v13;
        if ( !a5 )
          break;
        v20 = 0;
        *(_DWORD *)&v36[8] = 0;
        *(_QWORD *)v36 = v9 + 1;
        v21 = (unsigned __int16 *)(*(_QWORD *)(a1 + 1288) + 640LL * v9);
        v15 -= v21[4];
        v16 -= *v21;
        if ( *(_DWORD *)v36 == (unsigned __int8)v19 )
        {
          v22 = 0;
          v35 = 0;
        }
        else
        {
          PpmHeteroComputeCoreParkingUtilitiesEx(v9, (__int64)&v41, v38, v37, &v39, &v36[4]);
          v23 = PpmHeteroComputeUnparkCountEx(
                  v9,
                  v40,
                  1,
                  (_DWORD)v38,
                  0LL,
                  (__int64)v37,
                  *(__int64 *)&v36[4],
                  v15,
                  v16,
                  (__int64)&v35);
          v22 = v35;
          v20 = v23;
          if ( v35 >= a5 )
            v22 = a5;
          v35 = v22;
        }
        v24 = a5 - v22;
        v34 = v22;
        v25 = (ULONGLONG)v37;
        if ( v24 >= *v21 )
          v24 = *v21;
        a5 -= v24;
        v26 = v38;
        *((_QWORD *)v21 + 2) += v8 * v24;
        PpmEventTraceMultiClassHeteroResponseEx(v9, &v41.Count, (ULONGLONG)v26, v25, v36[4], v15, v20, v24, v34, v8);
        KiSubtractAffinityEx(&v41, (struct _KAFFINITY_EX *)(v21 + 20), &v41, v41.Size);
        v19 = *(unsigned __int8 *)(a1 + 12);
        v9 = *(_DWORD *)v36;
        LOBYTE(v13) = *(_BYTE *)(a1 + 12);
        LOBYTE(v14) = v13;
      }
      while ( *(_DWORD *)v36 < v19 );
    }
  }
  *(_QWORD *)(a1 + 1192) += v8;
  if ( a6 )
  {
    v27 = 1;
    if ( (unsigned __int8)v14 > 1u )
    {
      do
      {
        v28 = *(_QWORD *)(a1 + 1192);
        v29 = (unsigned __int16 *)(*(_QWORD *)(a1 + 1288) + 640LL * v27);
        if ( !v28 )
          v28 = 1LL;
        *(_QWORD *)(a1 + 1192) = v28;
        v30 = (*((_QWORD *)v29 + 2) + (v28 >> 1)) / v28;
        v31 = *v29;
        if ( (unsigned __int16)v30 >= (unsigned __int16)v31 )
          LOWORD(v30) = *v29;
        v29[3] = v30;
        if ( (_WORD)v30 )
        {
          v31 = (unsigned __int16)v30;
          if ( !v8 )
            v8 = 1LL;
          v32 = 100LL * *(_QWORD *)(*((_QWORD *)v29 + 74) + 8LL * (unsigned __int16)v30) / v8;
        }
        else
        {
          LOBYTE(v32) = 0;
        }
        *((_BYTE *)v29 + 636) = v32;
        LOBYTE(v31) = v27;
        PpmEventTraceMultiClassHeteroResponseUpdate(v31, (char *)v29, *(_QWORD *)(a1 + 1192), (__int64)v29);
        v13 = *(unsigned __int8 *)(a1 + 12);
        ++v27;
      }
      while ( v27 < v13 );
    }
  }
  return v13;
}

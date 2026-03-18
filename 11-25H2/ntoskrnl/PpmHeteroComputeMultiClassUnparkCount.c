/*
 * XREFs of PpmHeteroComputeMultiClassUnparkCount @ 0x140407898
 * Callers:
 *     PpmCheckComputeMultiClassHeteroResponse @ 0x140407D0C (PpmCheckComputeMultiClassHeteroResponse.c)
 * Callees:
 *     PpmEventTraceMultiClassHeteroResponse @ 0x140407B74 (PpmEventTraceMultiClassHeteroResponse.c)
 *     PpmHeteroComputeCoreParkingUtilities @ 0x140408264 (PpmHeteroComputeCoreParkingUtilities.c)
 *     PpmHeteroComputeUnparkCount @ 0x14040A700 (PpmHeteroComputeUnparkCount.c)
 *     PpmEventTraceMultiClassHeteroResponseUpdate @ 0x1404CA4D0 (PpmEventTraceMultiClassHeteroResponseUpdate.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall PpmHeteroComputeMultiClassUnparkCount(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        char a7)
{
  __int64 v7; // r11
  unsigned int v9; // r13d
  unsigned __int64 v10; // rsi
  unsigned int i; // edx
  __int64 v12; // rax
  unsigned int v13; // r8d
  __int64 result; // rax
  int v15; // r14d
  int v17; // r15d
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned __int8 *v20; // rcx
  char v21; // r10
  unsigned __int8 *v22; // rdi
  unsigned int v23; // r9d
  char v24; // al
  unsigned int v25; // ecx
  unsigned int v26; // edx
  int v27; // r9d
  unsigned int v28; // edi
  unsigned __int64 v29; // rcx
  unsigned __int8 *v30; // r9
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int8 v33; // dl
  unsigned __int64 v34; // rax
  char v35; // [rsp+40h] [rbp-61h]
  unsigned int v36; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v37; // [rsp+54h] [rbp-4Dh]
  __int64 v38; // [rsp+58h] [rbp-49h] BYREF
  __int64 v39; // [rsp+60h] [rbp-41h]
  __int64 v40; // [rsp+68h] [rbp-39h]
  __int64 v41; // [rsp+70h] [rbp-31h] BYREF
  __int64 v42; // [rsp+78h] [rbp-29h]
  __int128 v43; // [rsp+80h] [rbp-21h] BYREF

  v36 = 0;
  v7 = a3;
  v41 = 0LL;
  v9 = 1;
  v10 = *(_QWORD *)(a1 + 96);
  v39 = a4;
  v40 = a3;
  v42 = a2;
  if ( a7 )
  {
    *(_QWORD *)(a1 + 128) = 0LL;
    for ( i = 1; i < *(unsigned __int8 *)(a1 + 11); *(_QWORD *)(104 * v12 + *(_QWORD *)(a1 + 200) + 8) = 0LL )
      v12 = i++;
  }
  v13 = *(unsigned __int8 *)(a1 + 11);
  result = *(unsigned __int16 *)(a1 + 4);
  v15 = 0;
  v17 = 0;
  v43 = 0LL;
  WORD4(v43) = result;
  if ( v13 > 1 )
  {
    v18 = v13 - 1;
    v19 = v43;
    v20 = (unsigned __int8 *)(*(_QWORD *)(a1 + 200) + 104LL);
    do
    {
      v19 |= *((_QWORD *)v20 + 2);
      v15 += v20[4];
      result = *v20;
      v20 += 104;
      v17 += result;
      *(_QWORD *)&v43 = v19;
      --v18;
    }
    while ( v18 );
    do
    {
      if ( !a5 )
        break;
      v21 = 0;
      v37 = v9 + 1;
      v22 = (unsigned __int8 *)(*(_QWORD *)(a1 + 200) + 104LL * v9);
      v38 = 0LL;
      v15 -= v22[4];
      v17 -= *v22;
      if ( v9 + 1 == (unsigned __int8)v13 )
      {
        v23 = 0;
      }
      else
      {
        PpmHeteroComputeCoreParkingUtilities(v9, &v43, v7, v39, &v41, &v38);
        v24 = PpmHeteroComputeUnparkCount(v9, v42, 1, v40, 0LL, v39, v38, v15, v17, (__int64)&v36);
        v23 = v36;
        v21 = v24;
        LODWORD(v7) = v40;
        if ( v36 >= a5 )
          v23 = a5;
      }
      v25 = *v22;
      v26 = a5 - v23;
      v35 = v23;
      v36 = v23;
      v27 = v39;
      if ( v26 >= v25 )
        v26 = v25;
      a5 -= v26;
      LOBYTE(v25) = v9;
      *((_QWORD *)v22 + 1) += v10 * v26;
      PpmEventTraceMultiClassHeteroResponse(v25, (unsigned int)&v43, v7, v27, v38, v15, v21, v26, v35, v10);
      v9 = v37;
      *(_QWORD *)&v43 = ~*((_QWORD *)v22 + 2) & v43;
      result = *(unsigned __int8 *)(a1 + 11);
      v7 = v40;
      LOBYTE(v13) = *(_BYTE *)(a1 + 11);
    }
    while ( v37 < (unsigned int)result );
  }
  *(_QWORD *)(a1 + 128) += v10;
  if ( a6 )
  {
    v28 = 1;
    if ( *(_BYTE *)(a1 + 11) > 1u )
    {
      do
      {
        v29 = *(_QWORD *)(a1 + 128);
        v30 = (unsigned __int8 *)(*(_QWORD *)(a1 + 200) + 104LL * v28);
        if ( !v29 )
          v29 = 1LL;
        *(_QWORD *)(a1 + 128) = v29;
        v31 = (*((_QWORD *)v30 + 1) + (v29 >> 1)) / v29;
        v32 = *v30;
        v33 = v31;
        if ( (unsigned __int8)v31 >= (unsigned __int8)v32 )
          v33 = *v30;
        v30[3] = v33;
        if ( v33 )
        {
          v32 = v33;
          if ( !v10 )
            v10 = 1LL;
          v34 = 100LL * *(_QWORD *)(*((_QWORD *)v30 + 7) + 8LL * v33) / v10;
        }
        else
        {
          LOBYTE(v34) = 0;
        }
        v30[98] = v34;
        LOBYTE(v32) = v28;
        PpmEventTraceMultiClassHeteroResponseUpdate(v32, v30, *(_QWORD *)(a1 + 128));
        result = *(unsigned __int8 *)(a1 + 11);
        ++v28;
      }
      while ( v28 < (unsigned int)result );
    }
  }
  return result;
}

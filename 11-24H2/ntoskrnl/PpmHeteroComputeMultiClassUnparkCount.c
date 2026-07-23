/*
 * XREFs of PpmHeteroComputeMultiClassUnparkCount @ 0x140416434
 * Callers:
 *     PpmCheckComputeMultiClassHeteroResponse @ 0x140416940 (PpmCheckComputeMultiClassHeteroResponse.c)
 * Callees:
 *     PpmHeteroComputeUnparkCount @ 0x140416734 (PpmHeteroComputeUnparkCount.c)
 *     PpmHeteroComputeCoreParkingUtilities @ 0x140416EEC (PpmHeteroComputeCoreParkingUtilities.c)
 *     PpmEventTraceMultiClassHeteroResponse @ 0x1404178DC (PpmEventTraceMultiClassHeteroResponse.c)
 *     PpmEventTraceMultiClassHeteroResponseUpdate @ 0x1404E49EC (PpmEventTraceMultiClassHeteroResponseUpdate.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
  unsigned __int64 v7; // rsi
  char v8; // r10
  __int64 v9; // r11
  unsigned int v11; // r13d
  unsigned int v12; // edx
  __int64 v13; // rax
  unsigned int v14; // r8d
  __int64 result; // rax
  int v16; // r14d
  int v18; // r15d
  __int64 v19; // r9
  __int64 v20; // rdx
  unsigned __int16 *v21; // rcx
  unsigned __int16 *v22; // rdi
  unsigned int v23; // r9d
  char v24; // al
  unsigned int v25; // ecx
  unsigned int v26; // edx
  int v27; // r9d
  unsigned int v28; // edi
  unsigned __int64 v29; // rcx
  __int64 v30; // r9
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  char v33; // [rsp+40h] [rbp-61h]
  unsigned int v34; // [rsp+50h] [rbp-51h] BYREF
  _BYTE v35[12]; // [rsp+54h] [rbp-4Dh] BYREF
  __int64 v36; // [rsp+60h] [rbp-41h]
  __int64 v37; // [rsp+68h] [rbp-39h]
  __int64 v38; // [rsp+70h] [rbp-31h] BYREF
  __int64 v39; // [rsp+78h] [rbp-29h]
  __int128 v40; // [rsp+80h] [rbp-21h] BYREF

  v7 = *(_QWORD *)(a1 + 1152);
  v8 = 0;
  v9 = a3;
  v36 = a4;
  v37 = a3;
  v39 = a2;
  v11 = 1;
  v34 = 0;
  v38 = 0LL;
  if ( a7 )
  {
    v12 = 1;
    for ( *(_QWORD *)(a1 + 1192) = 0LL;
          v12 < *(unsigned __int8 *)(a1 + 12);
          *(_QWORD *)(640 * v13 + *(_QWORD *)(a1 + 1288) + 16) = 0LL )
    {
      v13 = v12++;
    }
  }
  v14 = *(unsigned __int8 *)(a1 + 12);
  result = *(unsigned __int16 *)(a1 + 4);
  v16 = 0;
  v18 = 0;
  v40 = 0LL;
  WORD4(v40) = result;
  if ( v14 > 1 )
  {
    v19 = v14 - 1;
    v20 = v40;
    v21 = (unsigned __int16 *)(*(_QWORD *)(a1 + 1288) + 640LL);
    do
    {
      v20 |= *((_QWORD *)v21 + 3);
      v16 += v21[4];
      result = *v21;
      v21 += 320;
      v18 += result;
      *(_QWORD *)&v40 = v20;
      --v19;
    }
    while ( v19 );
    do
    {
      if ( !a5 )
        break;
      *(_DWORD *)&v35[8] = 0;
      *(_QWORD *)v35 = v11 + 1;
      v22 = (unsigned __int16 *)(*(_QWORD *)(a1 + 1288) + 640LL * v11);
      v16 -= v22[4];
      v18 -= *v22;
      if ( *(_DWORD *)v35 == (unsigned __int8)v14 )
      {
        v23 = 0;
      }
      else
      {
        PpmHeteroComputeCoreParkingUtilities(v11, &v40, v9, v36, &v38, &v35[4]);
        v24 = PpmHeteroComputeUnparkCount(v11, v39, 1, v37, 0LL, v36, *(__int64 *)&v35[4], v16, v18, (__int64)&v34);
        v23 = v34;
        v8 = v24;
        LODWORD(v9) = v37;
        if ( v34 >= a5 )
          v23 = a5;
      }
      v25 = *v22;
      v26 = a5 - v23;
      v33 = v23;
      v34 = v23;
      v27 = v36;
      if ( v26 >= v25 )
        v26 = v25;
      a5 -= v26;
      LOBYTE(v25) = v11;
      *((_QWORD *)v22 + 2) += v7 * v26;
      PpmEventTraceMultiClassHeteroResponse(v25, (unsigned int)&v40, v9, v27, v35[4], v16, v8, v26, v33, v7);
      v8 = 0;
      v11 = *(_DWORD *)v35;
      *(_QWORD *)&v40 = ~*((_QWORD *)v22 + 3) & v40;
      result = *(unsigned __int8 *)(a1 + 12);
      v9 = v37;
      LOBYTE(v14) = *(_BYTE *)(a1 + 12);
    }
    while ( *(_DWORD *)v35 < (unsigned int)result );
  }
  *(_QWORD *)(a1 + 1192) += v7;
  if ( a6 )
  {
    v28 = 1;
    if ( *(_BYTE *)(a1 + 12) > 1u )
    {
      do
      {
        v29 = *(_QWORD *)(a1 + 1192);
        v30 = *(_QWORD *)(a1 + 1288) + 640LL * v28;
        if ( !v29 )
          v29 = 1LL;
        *(_QWORD *)(a1 + 1192) = v29;
        v31 = (unsigned __int8)((*(_QWORD *)(v30 + 16) + (v29 >> 1)) / v29);
        if ( (unsigned __int16)v31 >= *(_WORD *)v30 )
          LOWORD(v31) = *(_WORD *)v30;
        *(_WORD *)(v30 + 6) = v31;
        if ( (_WORD)v31 )
        {
          v31 = (unsigned __int16)v31;
          if ( !v7 )
            v7 = 1LL;
          v32 = 100LL * *(_QWORD *)(*(_QWORD *)(v30 + 592) + 8LL * (unsigned __int16)v31) / v7;
        }
        else
        {
          LOBYTE(v32) = 0;
        }
        *(_BYTE *)(v30 + 636) = v32;
        LOBYTE(v31) = v28;
        PpmEventTraceMultiClassHeteroResponseUpdate(v31, v30, *(_QWORD *)(a1 + 1192));
        result = *(unsigned __int8 *)(a1 + 12);
        ++v28;
      }
      while ( v28 < (unsigned int)result );
    }
  }
  return result;
}

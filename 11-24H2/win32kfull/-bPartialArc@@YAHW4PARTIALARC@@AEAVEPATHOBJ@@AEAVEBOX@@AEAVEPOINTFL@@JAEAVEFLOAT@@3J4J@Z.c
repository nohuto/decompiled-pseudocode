/*
 * XREFs of ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1400ECD90
 * Callers:
 *     NtGdiArcInternal @ 0x1400E5070 (NtGdiArcInternal.c)
 *     ?GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z @ 0x1400EC404 (-GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z.c)
 * Callees:
 *     ?bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z @ 0x1400E8308 (-bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall bPartialArc(
        int a1,
        __int64 a2,
        __int64 a3,
        float *a4,
        char a5,
        float *a6,
        float *a7,
        int a8,
        unsigned int *a9,
        int a10)
{
  int v12; // r15d
  __int64 v13; // rsi
  int v14; // xmm1_4
  int v15; // edi
  __int64 v18; // r15
  __int64 v19; // r12
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  int v24; // ecx
  char v25; // al
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  int v32; // [rsp+48h] [rbp-61h] BYREF
  int v33; // [rsp+4Ch] [rbp-5Dh]
  __int64 v34; // [rsp+50h] [rbp-59h]
  unsigned int *v35; // [rsp+58h] [rbp-51h]
  float *v36; // [rsp+60h] [rbp-49h]
  _QWORD v37[3]; // [rsp+68h] [rbp-41h] BYREF
  __int16 v38; // [rsp+80h] [rbp-29h]
  int v39; // [rsp+88h] [rbp-21h] BYREF
  int v40; // [rsp+8Ch] [rbp-1Dh]
  int v41; // [rsp+90h] [rbp-19h]
  int v42; // [rsp+94h] [rbp-15h]
  __int64 v43; // [rsp+98h] [rbp-11h]

  v12 = a8;
  v36 = a7;
  v35 = a9;
  if ( !a10 )
    return (unsigned int)bPartialQuadrantArc(a1, a2, (EBOX *)a3, a4, a6, a7, a9);
  v13 = (a5 + 1) & 3;
  v14 = gaefAxisCoord[v13];
  v32 = gaefAxisCoord[((_BYTE)v13 + 1) & 3];
  v33 = v14;
  v15 = bPartialQuadrantArc(a1, a2, (EBOX *)a3, a4, a6, (float *)&v32, &gaefAxisAngle[v13]);
  if ( (_DWORD)v13 == a8 )
    goto LABEL_3;
  v18 = (1922922357LL * *(int *)(a3 + 48)) >> 32;
  v19 = (1922922357LL * *(int *)(a3 + 52)) >> 32;
  v20 = (1922922357LL * *(int *)(a3 + 56)) >> 32;
  v21 = (1922922357LL * *(int *)(a3 + 60)) >> 32;
  v34 = v21;
  do
  {
    switch ( (_DWORD)v13 )
    {
      case 0:
        v31 = *(_QWORD *)(a3 + 8);
        v40 = HIDWORD(v31) - v21;
        v39 = v31 - v20;
        v42 = HIDWORD(v31) - v19;
        v41 = v31 - v18;
        v30 = *(_DWORD *)(a3 + 52);
        v43 = v31;
        v24 = v31 - *(_DWORD *)(a3 + 48);
        goto LABEL_18;
      case 1:
        v28 = *(_QWORD *)(a3 + 16);
        v40 = v19 + HIDWORD(v28);
        v41 = v28;
        v42 = HIDWORD(v28) - v21;
        v39 = v18 + v28;
        v29 = v28 - v20;
        v43 = v28;
        v24 = v28 - *(_DWORD *)(a3 + 56);
        v41 = v29;
        v30 = *(_DWORD *)(a3 + 60);
LABEL_18:
        HIDWORD(v43) -= v30;
        goto LABEL_13;
      case 2:
        v27 = *(_QWORD *)(a3 + 24);
        v40 = v21 + HIDWORD(v27);
        v42 = v19 + HIDWORD(v27);
        v39 = v27 + v20;
        v41 = v18 + v27;
        v23 = *(_DWORD *)(a3 + 52);
        v43 = v27;
        v24 = *(_DWORD *)(a3 + 48) + v27;
        break;
      case 3:
        v22 = *(_QWORD *)(a3 + 32);
        v40 = HIDWORD(v22) - v19;
        v42 = v21 + HIDWORD(v22);
        v39 = v22 - v18;
        v41 = v22 + v20;
        v23 = *(_DWORD *)(a3 + 60);
        v43 = v22;
        v24 = *(_DWORD *)(a3 + 56) + v22;
        break;
      default:
        goto LABEL_14;
    }
    HIDWORD(v43) += v23;
LABEL_13:
    LODWORD(v43) = v24;
LABEL_14:
    v37[2] = 0LL;
    v37[0] = &v39;
    v38 = 0;
    v37[1] = 3LL;
    v25 = EPATHOBJ::bPolyBezierTo(a2, 0LL, v37, 3LL);
    LODWORD(v21) = v34;
    v15 = (unsigned __int8)(v25 & v15);
    v26 = ((_BYTE)v13 + 1) & 3;
    LODWORD(v13) = v26;
  }
  while ( v26 != a8 );
  v12 = a8;
LABEL_3:
  v33 = gaefAxisCoord[v12];
  v32 = gaefAxisCoord[((_BYTE)v12 + 1) & 3];
  return (unsigned int)(bPartialQuadrantArc(0, a2, (EBOX *)a3, (float *)&v32, (float *)&gaefAxisAngle[v12], v36, v35) & v15);
}

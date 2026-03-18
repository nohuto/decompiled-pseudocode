/*
 * XREFs of PpmHvSnapPerformanceAccumulation @ 0x1403ECC24
 * Callers:
 *     PpmPerfSnapDeliveredPerformance @ 0x1403B0220 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmResetPerfTimes @ 0x1403ECADC (PpmResetPerfTimes.c)
 * Callees:
 *     PpmConvertTime @ 0x1403E7C50 (PpmConvertTime.c)
 *     HvlGetReferenceTime @ 0x1403ED194 (HvlGetReferenceTime.c)
 *     HvlpGetLpcbByLpIndex @ 0x1403ED27C (HvlpGetLpcbByLpIndex.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PpmHvSnapPerformanceAccumulation(
        __int64 a1,
        char a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        __int64 a5)
{
  char v5; // bl
  __int64 v7; // rax
  char v8; // r15
  unsigned int v9; // r12d
  __int64 LpcbByLpIndex; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  char v15; // r14
  char *v16; // rsi
  __int64 v17; // rcx
  __int64 *v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rsi
  char *v28; // rcx
  unsigned __int64 v29; // r9
  _QWORD *v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r11
  bool v33; // cf
  bool v34; // zf
  _DWORD *v35; // r10
  __int64 v36; // rax
  unsigned int v37; // r12d
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r12
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r12
  _QWORD *v42; // r15
  __int64 v43; // rax
  unsigned int *v44; // rsi
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned int v49; // eax
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int64 *v52; // rdx
  _QWORD *v53; // rcx
  __int64 v54; // rax
  char v56; // [rsp+30h] [rbp-D0h] BYREF
  char v57; // [rsp+31h] [rbp-CFh] BYREF
  char v58; // [rsp+32h] [rbp-CEh] BYREF
  unsigned int v59; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v60; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v61; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v62; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v63; // [rsp+50h] [rbp-B0h]
  unsigned __int64 *v64; // [rsp+58h] [rbp-A8h]
  __int64 v65; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v66; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v67; // [rsp+70h] [rbp-90h]
  __int64 ReferenceTime; // [rsp+78h] [rbp-88h]
  __int64 v69; // [rsp+80h] [rbp-80h]
  __int64 v70; // [rsp+88h] [rbp-78h] BYREF
  __int64 v71; // [rsp+90h] [rbp-70h] BYREF
  __int64 v72; // [rsp+98h] [rbp-68h]
  __int64 v73; // [rsp+A0h] [rbp-60h]
  char v74[32]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *v75; // [rsp+D0h] [rbp-30h]
  __int64 v76; // [rsp+D8h] [rbp-28h]
  __int64 *v77; // [rsp+E0h] [rbp-20h]
  __int64 v78; // [rsp+E8h] [rbp-18h]
  unsigned __int64 *v79; // [rsp+F0h] [rbp-10h]
  __int64 v80; // [rsp+F8h] [rbp-8h]
  char *v81; // [rsp+100h] [rbp+0h]
  __int64 v82; // [rsp+108h] [rbp+8h]
  char *v83; // [rsp+110h] [rbp+10h]
  __int64 v84; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v85; // [rsp+120h] [rbp+20h]
  __int64 v86; // [rsp+128h] [rbp+28h]
  __int64 *v87; // [rsp+130h] [rbp+30h]
  __int64 v88; // [rsp+138h] [rbp+38h]
  __int64 *v89; // [rsp+140h] [rbp+40h]
  __int64 v90; // [rsp+148h] [rbp+48h]
  __int64 *v91; // [rsp+150h] [rbp+50h]
  __int64 v92; // [rsp+158h] [rbp+58h]
  char *v93; // [rsp+160h] [rbp+60h]
  __int64 v94; // [rsp+168h] [rbp+68h]
  __int64 v95; // [rsp+170h] [rbp+70h]
  __int64 v96; // [rsp+178h] [rbp+78h]
  __int64 v97; // [rsp+180h] [rbp+80h]
  __int64 v98; // [rsp+188h] [rbp+88h]
  __int64 v99; // [rsp+190h] [rbp+90h]
  __int64 v100; // [rsp+198h] [rbp+98h]
  char v101; // [rsp+1A8h] [rbp+A8h] BYREF
  char v102; // [rsp+1B0h] [rbp+B0h] BYREF

  v5 = 0;
  v73 = a5;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = 0;
  v64 = a4;
  v67 = a3;
  v56 = a2;
  v9 = *(_DWORD *)(v7 + 20);
  v59 = v9;
  v60 = 0LL;
  v62 = 0LL;
  v69 = 2LL;
  while ( 1 )
  {
    do
    {
      LpcbByLpIndex = HvlpGetLpcbByLpIndex(v9);
      if ( !LpcbByLpIndex )
        break;
      v12 = *(_QWORD *)(LpcbByLpIndex + 24);
      v11 = *(_QWORD *)(v12 + 8LL * (unsigned int)dword_140E3EAB8);
      v8 = *(_QWORD *)(v12 + 8LL * DWORD2(xmmword_140E3EA90)) & 1;
      v60 = *(_QWORD *)(v12 + 8LL * (unsigned int)dword_140E3EABC);
    }
    while ( (v11 & 1) != 0 );
    ReferenceTime = HvlGetReferenceTime(v12, v11);
    v13 = HvlpGetLpcbByLpIndex(v9);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 24);
      v63 = *(_QWORD *)(v14 + 8LL * (unsigned int)qword_140E3EAC0);
      v65 = *(_QWORD *)(v14 + 8LL * HIDWORD(qword_140E3EAC0));
    }
    else
    {
      v63 = 0LL;
      v65 = 0LL;
    }
    v15 = v56;
    v16 = &v101;
    v17 = 2LL;
    v18 = (__int64 *)(a1 + 96);
    v61 = 2LL;
    do
    {
      v19 = *v18;
      if ( *v18 )
      {
        if ( v60 <= *(_QWORD *)(a1 + 80) )
        {
          *((_DWORD *)v16 + 2) = *(_DWORD *)(v19 + 24);
          *((_QWORD *)v16 - 1) = *(_QWORD *)(v19 + 16);
          *(_QWORD *)v16 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(v19 + 40);
          if ( *(_BYTE *)(v19 + 33) )
          {
            LOBYTE(v19) = v15;
            guard_dispatch_icall_no_overrides(v20, v19);
          }
          else
          {
            guard_dispatch_icall_no_overrides(v20, v16 + 8);
          }
          v17 = v61;
        }
      }
      ++v18;
      v16 += 24;
      v61 = --v17;
    }
    while ( v17 );
    v9 = v59;
    v21 = HvlpGetLpcbByLpIndex(v59);
    v23 = v62;
    if ( v21 )
    {
      v24 = *(_QWORD *)(v21 + 24);
      v25 = *(_QWORD *)(v24 + 8LL * (unsigned int)dword_140E3EAB8);
      v8 = *(_QWORD *)(v24 + 8LL * DWORD2(xmmword_140E3EA90)) & 1;
      v23 = *(_QWORD *)(v24 + 8LL * (unsigned int)dword_140E3EABC);
      v62 = v23;
      if ( (v25 & 1) != 0 )
        continue;
    }
    if ( v23 == v22 )
      break;
  }
  v26 = *(unsigned int *)(a1 + 136);
  *(_DWORD *)(a1 + 136) = v26 + 1;
  v27 = a1 + 80 * v26 + 144;
  v72 = v27;
  if ( (_DWORD)v26 == 7 )
    *(_DWORD *)(a1 + 136) = 0;
  v28 = &v101;
  v29 = ReferenceTime;
  v30 = (_QWORD *)(v27 + 40);
  v31 = v63;
  *(_DWORD *)v27 = KeGetPcr()->Prcb.Number;
  v32 = 2LL;
  *(_BYTE *)(v27 + 5) = v56;
  *(_QWORD *)(v27 + 32) = v65;
  *(_BYTE *)(v27 + 6) = v8;
  *(_QWORD *)(v27 + 8) = v23;
  *(_QWORD *)(v27 + 16) = v29;
  *(_QWORD *)(v27 + 24) = v31;
  v33 = v22 < *(_QWORD *)(a1 + 80);
  v34 = v22 == *(_QWORD *)(a1 + 80);
  v35 = (_DWORD *)(v27 + 72);
  *(_BYTE *)(v27 + 4) = v33 || v34;
  do
  {
    v36 = *(_QWORD *)((char *)v30 + a1 - v27 + 56);
    if ( v36 )
    {
      if ( *(_BYTE *)(v36 + 33) )
      {
        *v30 = *((_QWORD *)v28 - 1);
        v30[2] = *(_QWORD *)v28;
      }
      else
      {
        *v35 = *((_DWORD *)v28 + 2);
      }
    }
    ++v35;
    ++v30;
    v28 += 24;
    --v32;
  }
  while ( v32 );
  v37 = v59;
  if ( (unsigned int)dword_140E07728 > 5 )
  {
    v59 = *(_DWORD *)(a1 + 136);
    v76 = 4LL;
    v75 = &v59;
    LODWORD(v61) = v37;
    v77 = &v61;
    LODWORD(v60) = *(_DWORD *)v27;
    v79 = &v60;
    v56 = *(_BYTE *)(v27 + 5);
    v81 = &v56;
    v57 = *(_BYTE *)(v27 + 6);
    v83 = &v57;
    v62 = *(_QWORD *)(v27 + 8);
    v85 = &v62;
    v70 = *(_QWORD *)(v27 + 16);
    v87 = &v70;
    v71 = *(_QWORD *)(v27 + 24);
    v89 = &v71;
    v66 = *(_QWORD *)(v27 + 32);
    v91 = (__int64 *)&v66;
    v58 = *(_BYTE *)(v27 + 4);
    v93 = &v58;
    v95 = v27 + 72;
    v97 = v27 + 40;
    v99 = v27 + 56;
    v78 = 4LL;
    v80 = 4LL;
    v82 = 1LL;
    v84 = 1LL;
    v86 = 8LL;
    v88 = 8LL;
    v90 = 8LL;
    v92 = 8LL;
    v94 = 1LL;
    v96 = 8LL;
    v98 = 16LL;
    v100 = 16LL;
    tlgWriteTransfer_EtwWriteTransfer(&dword_140E07728, &dword_14004CEF4, 0LL, 0LL, 15, v74);
    v31 = v63;
    v29 = ReferenceTime;
  }
  if ( v8 && v29 > v23 )
  {
    v38 = v29 - v23;
    v23 = v29;
    v31 += v38;
  }
  if ( v23 >= v67 )
  {
    *(_QWORD *)(a1 + 80) = v23;
    v39 = v23 - v31;
    v66 = v23 - v31;
    v40 = v23 - v31 - *(_QWORD *)(a1 + 88);
    v34 = v23 - v31 == *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 88) = v23 - v31;
    if ( !v34 )
    {
      v41 = v40;
      v42 = (_QWORD *)(a1 + 120);
      v43 = 2LL;
      v44 = (unsigned int *)&v102;
      do
      {
        v45 = *(v42 - 3);
        if ( v45 )
        {
          if ( *(_BYTE *)(v45 + 33) )
          {
            v46 = *((_QWORD *)v44 - 2);
            v47 = *(_QWORD *)(v45 + 16);
            if ( v46 != v47 )
            {
              v48 = *((_QWORD *)v44 - 1) - *(_QWORD *)(v45 + 8);
              *(_QWORD *)(v45 + 16) = v46;
              *(_QWORD *)(v45 + 8) = *((_QWORD *)v44 - 1);
              *(_DWORD *)(v45 + 24) = v48 * (unsigned __int64)*(unsigned int *)(v45 + 36) / (v46 - v47);
            }
            v49 = *(_DWORD *)(v45 + 24);
            *v44 = v49;
            v50 = PpmConvertTime(v41 * v49, 0x10000uLL, 0x64uLL);
          }
          else
          {
            v50 = v41 * *v44;
          }
          *v42 += v50;
          v43 = v69;
        }
        ++v42;
        v44 += 6;
        v69 = --v43;
      }
      while ( v43 );
      v39 = v66;
      v27 = v72;
    }
    if ( *(_QWORD *)(a1 + 96) )
    {
      v51 = *(_QWORD *)(a1 + 120);
    }
    else if ( *(_QWORD *)(a1 + 104) )
    {
      v51 = *(_QWORD *)(a1 + 128);
    }
    else
    {
      v51 = 100LL * *(_QWORD *)(a1 + 112);
    }
    v52 = v64;
    v64[3] = v51;
    if ( *(_QWORD *)(a1 + 104) )
      v51 = *(_QWORD *)(a1 + 128);
    v53 = (_QWORD *)v73;
    v52[4] = v51;
    v54 = v65;
    *v52 = v23;
    v52[1] = v39;
    *v53 = v54;
  }
  else
  {
    v5 = 1;
  }
  *(_BYTE *)(v27 + 7) = v5;
  return v5 ^ 1;
}

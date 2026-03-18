/*
 * XREFs of PpmHvSnapPerformanceAccumulation @ 0x140448064
 * Callers:
 *     PpmPerfSnapDeliveredPerformance @ 0x140351020 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmResetPerfTimes @ 0x140447F1C (PpmResetPerfTimes.c)
 * Callees:
 *     PpmConvertTime @ 0x14032D070 (PpmConvertTime.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     HvlGetReferenceTime @ 0x1403527D4 (HvlGetReferenceTime.c)
 *     HvlpGetLpcbByLpIndex @ 0x1404485D0 (HvlpGetLpcbByLpIndex.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
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
  unsigned int v9; // r13d
  __int64 LpcbByLpIndex; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  char v17; // r14
  char *v18; // rsi
  __int64 v19; // rcx
  __int64 *v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r14
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rsi
  char *v30; // rcx
  unsigned __int64 v31; // r9
  _QWORD *v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r11
  bool v35; // cf
  bool v36; // zf
  _DWORD *v37; // r10
  __int64 v38; // rax
  unsigned int v39; // r13d
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r15
  unsigned __int64 v42; // r13
  _QWORD *v43; // rsi
  __int64 v44; // rax
  unsigned int *v45; // r11
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned int v50; // eax
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  unsigned __int64 *v53; // rdx
  _QWORD *v54; // rcx
  __int64 v55; // rax
  char v57; // [rsp+30h] [rbp-D0h] BYREF
  char v58; // [rsp+31h] [rbp-CFh] BYREF
  char v59; // [rsp+32h] [rbp-CEh] BYREF
  unsigned int v60; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v61; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v63; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v64; // [rsp+50h] [rbp-B0h]
  unsigned __int64 *v65; // [rsp+58h] [rbp-A8h]
  __int64 v66; // [rsp+60h] [rbp-A0h]
  __int64 ReferenceTime; // [rsp+68h] [rbp-98h]
  __int64 v68; // [rsp+70h] [rbp-90h]
  __int64 v69; // [rsp+78h] [rbp-88h] BYREF
  __int64 v70; // [rsp+80h] [rbp-80h] BYREF
  __int64 v71; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v72; // [rsp+90h] [rbp-70h]
  __int64 v73; // [rsp+98h] [rbp-68h]
  __int64 v74; // [rsp+A0h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *v76; // [rsp+D0h] [rbp-30h]
  __int64 v77; // [rsp+D8h] [rbp-28h]
  __int64 *v78; // [rsp+E0h] [rbp-20h]
  __int64 v79; // [rsp+E8h] [rbp-18h]
  unsigned __int64 *v80; // [rsp+F0h] [rbp-10h]
  __int64 v81; // [rsp+F8h] [rbp-8h]
  char *v82; // [rsp+100h] [rbp+0h]
  __int64 v83; // [rsp+108h] [rbp+8h]
  char *v84; // [rsp+110h] [rbp+10h]
  __int64 v85; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v86; // [rsp+120h] [rbp+20h]
  __int64 v87; // [rsp+128h] [rbp+28h]
  __int64 *v88; // [rsp+130h] [rbp+30h]
  __int64 v89; // [rsp+138h] [rbp+38h]
  __int64 *v90; // [rsp+140h] [rbp+40h]
  __int64 v91; // [rsp+148h] [rbp+48h]
  __int64 *v92; // [rsp+150h] [rbp+50h]
  __int64 v93; // [rsp+158h] [rbp+58h]
  char *v94; // [rsp+160h] [rbp+60h]
  __int64 v95; // [rsp+168h] [rbp+68h]
  __int64 v96; // [rsp+170h] [rbp+70h]
  __int64 v97; // [rsp+178h] [rbp+78h]
  __int64 v98; // [rsp+180h] [rbp+80h]
  __int64 v99; // [rsp+188h] [rbp+88h]
  __int64 v100; // [rsp+190h] [rbp+90h]
  __int64 v101; // [rsp+198h] [rbp+98h]
  char v102; // [rsp+1A8h] [rbp+A8h] BYREF
  char v103; // [rsp+1B0h] [rbp+B0h] BYREF

  v5 = 0;
  v74 = a5;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = 0;
  v65 = a4;
  v72 = a3;
  v57 = a2;
  v9 = *(_DWORD *)(v7 + 20);
  v60 = v9;
  v61 = 0LL;
  v63 = 0LL;
  v68 = 2LL;
  while ( 1 )
  {
    do
    {
      LpcbByLpIndex = HvlpGetLpcbByLpIndex(v9);
      if ( !LpcbByLpIndex )
        break;
      v11 = *(_QWORD *)(LpcbByLpIndex + 24);
      v12 = *(_QWORD *)(v11 + 8LL * (unsigned int)dword_140E3ECF8);
      v8 = *(_QWORD *)(v11 + 8LL * DWORD2(xmmword_140E3ECD0)) & 1;
      v61 = *(_QWORD *)(v11 + 8LL * (unsigned int)dword_140E3ECFC);
    }
    while ( (v12 & 1) != 0 );
    ReferenceTime = HvlGetReferenceTime();
    v13 = HvlpGetLpcbByLpIndex(v9);
    if ( v13 )
    {
      v16 = *(_QWORD *)(v13 + 24);
      v64 = *(_QWORD *)(v16 + 8LL * (unsigned int)qword_140E3ED00);
      v66 = *(_QWORD *)(v16 + 8LL * HIDWORD(qword_140E3ED00));
    }
    else
    {
      v64 = 0LL;
      v66 = 0LL;
    }
    v17 = v57;
    v18 = &v102;
    v19 = 2LL;
    v20 = (__int64 *)(a1 + 96);
    v62 = 2LL;
    do
    {
      v21 = *v20;
      if ( *v20 )
      {
        if ( v61 <= *(_QWORD *)(a1 + 80) )
        {
          *((_DWORD *)v18 + 2) = *(_DWORD *)(v21 + 24);
          *((_QWORD *)v18 - 1) = *(_QWORD *)(v21 + 16);
          *(_QWORD *)v18 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v22 = *(_QWORD *)(v21 + 40);
          if ( *(_BYTE *)(v21 + 33) )
          {
            LOBYTE(v21) = v17;
            guard_dispatch_icall_no_overrides(v22, v21, v18 - 8, v18);
          }
          else
          {
            guard_dispatch_icall_no_overrides(v22, v18 + 8, v14, v15);
          }
          v19 = v62;
        }
      }
      ++v20;
      v18 += 24;
      v62 = --v19;
    }
    while ( v19 );
    v9 = v60;
    v23 = HvlpGetLpcbByLpIndex(v60);
    v25 = v63;
    if ( v23 )
    {
      v26 = *(_QWORD *)(v23 + 24);
      v27 = *(_QWORD *)(v26 + 8LL * (unsigned int)dword_140E3ECF8);
      v8 = *(_QWORD *)(v26 + 8LL * DWORD2(xmmword_140E3ECD0)) & 1;
      v25 = *(_QWORD *)(v26 + 8LL * (unsigned int)dword_140E3ECFC);
      v63 = v25;
      if ( (v27 & 1) != 0 )
        continue;
    }
    if ( v25 == v24 )
      break;
  }
  v28 = *(unsigned int *)(a1 + 136);
  *(_DWORD *)(a1 + 136) = v28 + 1;
  v29 = a1 + 80 * v28 + 144;
  v73 = v29;
  if ( (_DWORD)v28 == 7 )
    *(_DWORD *)(a1 + 136) = 0;
  v30 = &v102;
  v31 = ReferenceTime;
  v32 = (_QWORD *)(v29 + 40);
  v33 = v64;
  *(_DWORD *)v29 = KeGetPcr()->Prcb.Number;
  v34 = 2LL;
  *(_BYTE *)(v29 + 5) = v57;
  *(_QWORD *)(v29 + 32) = v66;
  *(_BYTE *)(v29 + 6) = v8;
  *(_QWORD *)(v29 + 8) = v25;
  *(_QWORD *)(v29 + 16) = v31;
  *(_QWORD *)(v29 + 24) = v33;
  v35 = v24 < *(_QWORD *)(a1 + 80);
  v36 = v24 == *(_QWORD *)(a1 + 80);
  v37 = (_DWORD *)(v29 + 72);
  *(_BYTE *)(v29 + 4) = v35 || v36;
  do
  {
    v38 = *(_QWORD *)((char *)v32 + a1 - v29 + 56);
    if ( v38 )
    {
      if ( *(_BYTE *)(v38 + 33) )
      {
        *v32 = *((_QWORD *)v30 - 1);
        v32[2] = *(_QWORD *)v30;
      }
      else
      {
        *v37 = *((_DWORD *)v30 + 2);
      }
    }
    ++v37;
    ++v32;
    v30 += 24;
    --v34;
  }
  while ( v34 );
  v39 = v60;
  if ( (unsigned int)dword_140E076B8 > 5 )
  {
    v60 = *(_DWORD *)(a1 + 136);
    v77 = 4LL;
    v76 = &v60;
    LODWORD(v62) = v39;
    v78 = &v62;
    LODWORD(v61) = *(_DWORD *)v29;
    v80 = &v61;
    v57 = *(_BYTE *)(v29 + 5);
    v82 = &v57;
    v58 = *(_BYTE *)(v29 + 6);
    v84 = &v58;
    v63 = *(_QWORD *)(v29 + 8);
    v86 = &v63;
    v69 = *(_QWORD *)(v29 + 16);
    v88 = &v69;
    v70 = *(_QWORD *)(v29 + 24);
    v90 = &v70;
    v71 = *(_QWORD *)(v29 + 32);
    v92 = &v71;
    v59 = *(_BYTE *)(v29 + 4);
    v94 = &v59;
    v96 = v29 + 72;
    v98 = v29 + 40;
    v100 = v29 + 56;
    v79 = 4LL;
    v81 = 4LL;
    v83 = 1LL;
    v85 = 1LL;
    v87 = 8LL;
    v89 = 8LL;
    v91 = 8LL;
    v93 = 8LL;
    v95 = 1LL;
    v97 = 8LL;
    v99 = 16LL;
    v101 = 16LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E076B8,
      (unsigned __int8 *)&word_14004E31E,
      0LL,
      0LL,
      0xFu,
      &v75);
    v33 = v64;
    v31 = ReferenceTime;
  }
  if ( v8 && v31 > v25 )
  {
    v40 = v31 - v25;
    v25 = v31;
    v33 += v40;
  }
  if ( v25 >= v72 )
  {
    *(_QWORD *)(a1 + 80) = v25;
    v41 = v25 - v33;
    v42 = v25 - v33 - *(_QWORD *)(a1 + 88);
    v36 = v25 - v33 == *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 88) = v25 - v33;
    if ( !v36 )
    {
      v43 = (_QWORD *)(a1 + 120);
      v44 = 2LL;
      v45 = (unsigned int *)&v103;
      do
      {
        v46 = *(v43 - 3);
        if ( v46 )
        {
          if ( *(_BYTE *)(v46 + 33) )
          {
            v47 = *((_QWORD *)v45 - 2);
            v48 = *(_QWORD *)(v46 + 16);
            if ( v47 != v48 )
            {
              v49 = *((_QWORD *)v45 - 1) - *(_QWORD *)(v46 + 8);
              *(_QWORD *)(v46 + 16) = v47;
              *(_QWORD *)(v46 + 8) = *((_QWORD *)v45 - 1);
              *(_DWORD *)(v46 + 24) = v49 * (unsigned __int64)*(unsigned int *)(v46 + 36) / (v47 - v48);
            }
            v50 = *(_DWORD *)(v46 + 24);
            *v45 = v50;
            v51 = PpmConvertTime(v42 * v50, 0x10000uLL, 0x64uLL);
          }
          else
          {
            v51 = v42 * *v45;
          }
          *v43 += v51;
          v44 = v68;
        }
        ++v43;
        v45 += 6;
        v68 = --v44;
      }
      while ( v44 );
      v29 = v73;
    }
    if ( *(_QWORD *)(a1 + 96) )
    {
      v52 = *(_QWORD *)(a1 + 120);
    }
    else if ( *(_QWORD *)(a1 + 104) )
    {
      v52 = *(_QWORD *)(a1 + 128);
    }
    else
    {
      v52 = 100LL * *(_QWORD *)(a1 + 112);
    }
    v53 = v65;
    v65[3] = v52;
    if ( *(_QWORD *)(a1 + 104) )
      v52 = *(_QWORD *)(a1 + 128);
    v54 = (_QWORD *)v74;
    v53[4] = v52;
    v55 = v66;
    *v53 = v25;
    v53[1] = v41;
    *v54 = v55;
  }
  else
  {
    v5 = 1;
  }
  *(_BYTE *)(v29 + 7) = v5;
  return v5 ^ 1;
}

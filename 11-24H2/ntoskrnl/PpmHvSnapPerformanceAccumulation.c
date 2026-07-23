/*
 * XREFs of PpmHvSnapPerformanceAccumulation @ 0x140440784
 * Callers:
 *     PpmPerfSnapDeliveredPerformance @ 0x1402AFD50 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmResetPerfTimes @ 0x14044063C (PpmResetPerfTimes.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     HvlGetReferenceTime @ 0x14036FFB8 (HvlGetReferenceTime.c)
 *     PpmConvertTime @ 0x140437380 (PpmConvertTime.c)
 *     HvlpGetLpcbByLpIndex @ 0x140440CF0 (HvlpGetLpcbByLpIndex.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
  __int64 v14; // rcx
  char v15; // r14
  char *v16; // rsi
  __int64 v17; // rcx
  __int64 *v18; // r13
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
  unsigned int v37; // r13d
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r15
  unsigned __int64 v40; // r13
  _QWORD *v41; // rsi
  __int64 v42; // rax
  unsigned int *v43; // r11
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned int v48; // eax
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int64 *v51; // rdx
  _QWORD *v52; // rcx
  __int64 v53; // rax
  char v55; // [rsp+30h] [rbp-D0h] BYREF
  char v56; // [rsp+31h] [rbp-CFh] BYREF
  char v57; // [rsp+32h] [rbp-CEh] BYREF
  unsigned int v58; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v59; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v60; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v61; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v62; // [rsp+50h] [rbp-B0h]
  unsigned __int64 *v63; // [rsp+58h] [rbp-A8h]
  __int64 v64; // [rsp+60h] [rbp-A0h]
  __int64 ReferenceTime; // [rsp+68h] [rbp-98h]
  __int64 v66; // [rsp+70h] [rbp-90h]
  __int64 v67; // [rsp+78h] [rbp-88h] BYREF
  __int64 v68; // [rsp+80h] [rbp-80h] BYREF
  __int64 v69; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v70; // [rsp+90h] [rbp-70h]
  __int64 v71; // [rsp+98h] [rbp-68h]
  __int64 v72; // [rsp+A0h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *v74; // [rsp+D0h] [rbp-30h]
  __int64 v75; // [rsp+D8h] [rbp-28h]
  __int64 *v76; // [rsp+E0h] [rbp-20h]
  __int64 v77; // [rsp+E8h] [rbp-18h]
  unsigned __int64 *v78; // [rsp+F0h] [rbp-10h]
  __int64 v79; // [rsp+F8h] [rbp-8h]
  char *v80; // [rsp+100h] [rbp+0h]
  __int64 v81; // [rsp+108h] [rbp+8h]
  char *v82; // [rsp+110h] [rbp+10h]
  __int64 v83; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v84; // [rsp+120h] [rbp+20h]
  __int64 v85; // [rsp+128h] [rbp+28h]
  __int64 *v86; // [rsp+130h] [rbp+30h]
  __int64 v87; // [rsp+138h] [rbp+38h]
  __int64 *v88; // [rsp+140h] [rbp+40h]
  __int64 v89; // [rsp+148h] [rbp+48h]
  __int64 *v90; // [rsp+150h] [rbp+50h]
  __int64 v91; // [rsp+158h] [rbp+58h]
  char *v92; // [rsp+160h] [rbp+60h]
  __int64 v93; // [rsp+168h] [rbp+68h]
  __int64 v94; // [rsp+170h] [rbp+70h]
  __int64 v95; // [rsp+178h] [rbp+78h]
  __int64 v96; // [rsp+180h] [rbp+80h]
  __int64 v97; // [rsp+188h] [rbp+88h]
  __int64 v98; // [rsp+190h] [rbp+90h]
  __int64 v99; // [rsp+198h] [rbp+98h]
  char v100; // [rsp+1A8h] [rbp+A8h] BYREF
  char v101; // [rsp+1B0h] [rbp+B0h] BYREF

  v5 = 0;
  v72 = a5;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = 0;
  v63 = a4;
  v70 = a3;
  v55 = a2;
  v9 = *(_DWORD *)(v7 + 20);
  v58 = v9;
  v59 = 0LL;
  v61 = 0LL;
  v66 = 2LL;
  while ( 1 )
  {
    do
    {
      LpcbByLpIndex = HvlpGetLpcbByLpIndex(v9);
      if ( !LpcbByLpIndex )
        break;
      v11 = *(_QWORD *)(LpcbByLpIndex + 24);
      v12 = *(_QWORD *)(v11 + 8LL * (unsigned int)dword_140E3EE38);
      v8 = *(_QWORD *)(v11 + 8LL * DWORD2(xmmword_140E3EE10)) & 1;
      v59 = *(_QWORD *)(v11 + 8LL * (unsigned int)dword_140E3EE3C);
    }
    while ( (v12 & 1) != 0 );
    ReferenceTime = HvlGetReferenceTime();
    v13 = HvlpGetLpcbByLpIndex(v9);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 24);
      v62 = *(_QWORD *)(v14 + 8LL * (unsigned int)qword_140E3EE40);
      v64 = *(_QWORD *)(v14 + 8LL * HIDWORD(qword_140E3EE40));
    }
    else
    {
      v62 = 0LL;
      v64 = 0LL;
    }
    v15 = v55;
    v16 = &v100;
    v17 = 2LL;
    v18 = (__int64 *)(a1 + 96);
    v60 = 2LL;
    do
    {
      v19 = *v18;
      if ( *v18 )
      {
        if ( v59 <= *(_QWORD *)(a1 + 80) )
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
          v17 = v60;
        }
      }
      ++v18;
      v16 += 24;
      v60 = --v17;
    }
    while ( v17 );
    v9 = v58;
    v21 = HvlpGetLpcbByLpIndex(v58);
    v23 = v61;
    if ( v21 )
    {
      v24 = *(_QWORD *)(v21 + 24);
      v25 = *(_QWORD *)(v24 + 8LL * (unsigned int)dword_140E3EE38);
      v8 = *(_QWORD *)(v24 + 8LL * DWORD2(xmmword_140E3EE10)) & 1;
      v23 = *(_QWORD *)(v24 + 8LL * (unsigned int)dword_140E3EE3C);
      v61 = v23;
      if ( (v25 & 1) != 0 )
        continue;
    }
    if ( v23 == v22 )
      break;
  }
  v26 = *(unsigned int *)(a1 + 136);
  *(_DWORD *)(a1 + 136) = v26 + 1;
  v27 = a1 + 80 * v26 + 144;
  v71 = v27;
  if ( (_DWORD)v26 == 7 )
    *(_DWORD *)(a1 + 136) = 0;
  v28 = &v100;
  v29 = ReferenceTime;
  v30 = (_QWORD *)(v27 + 40);
  v31 = v62;
  *(_DWORD *)v27 = KeGetPcr()->Prcb.Number;
  v32 = 2LL;
  *(_BYTE *)(v27 + 5) = v55;
  *(_QWORD *)(v27 + 32) = v64;
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
  v37 = v58;
  if ( (unsigned int)dword_140E076B8 > 5 )
  {
    v58 = *(_DWORD *)(a1 + 136);
    v75 = 4LL;
    v74 = &v58;
    LODWORD(v60) = v37;
    v76 = &v60;
    LODWORD(v59) = *(_DWORD *)v27;
    v78 = &v59;
    v55 = *(_BYTE *)(v27 + 5);
    v80 = &v55;
    v56 = *(_BYTE *)(v27 + 6);
    v82 = &v56;
    v61 = *(_QWORD *)(v27 + 8);
    v84 = &v61;
    v67 = *(_QWORD *)(v27 + 16);
    v86 = &v67;
    v68 = *(_QWORD *)(v27 + 24);
    v88 = &v68;
    v69 = *(_QWORD *)(v27 + 32);
    v90 = &v69;
    v57 = *(_BYTE *)(v27 + 4);
    v92 = &v57;
    v94 = v27 + 72;
    v96 = v27 + 40;
    v98 = v27 + 56;
    v77 = 4LL;
    v79 = 4LL;
    v81 = 1LL;
    v83 = 1LL;
    v85 = 8LL;
    v87 = 8LL;
    v89 = 8LL;
    v91 = 8LL;
    v93 = 1LL;
    v95 = 8LL;
    v97 = 16LL;
    v99 = 16LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E076B8,
      (unsigned __int8 *)byte_14004F111,
      0LL,
      0LL,
      0xFu,
      &v73);
    v31 = v62;
    v29 = ReferenceTime;
  }
  if ( v8 && v29 > v23 )
  {
    v38 = v29 - v23;
    v23 = v29;
    v31 += v38;
  }
  if ( v23 >= v70 )
  {
    *(_QWORD *)(a1 + 80) = v23;
    v39 = v23 - v31;
    v40 = v23 - v31 - *(_QWORD *)(a1 + 88);
    v34 = v23 - v31 == *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 88) = v23 - v31;
    if ( !v34 )
    {
      v41 = (_QWORD *)(a1 + 120);
      v42 = 2LL;
      v43 = (unsigned int *)&v101;
      do
      {
        v44 = *(v41 - 3);
        if ( v44 )
        {
          if ( *(_BYTE *)(v44 + 33) )
          {
            v45 = *((_QWORD *)v43 - 2);
            v46 = *(_QWORD *)(v44 + 16);
            if ( v45 != v46 )
            {
              v47 = *((_QWORD *)v43 - 1) - *(_QWORD *)(v44 + 8);
              *(_QWORD *)(v44 + 16) = v45;
              *(_QWORD *)(v44 + 8) = *((_QWORD *)v43 - 1);
              *(_DWORD *)(v44 + 24) = v47 * (unsigned __int64)*(unsigned int *)(v44 + 36) / (v45 - v46);
            }
            v48 = *(_DWORD *)(v44 + 24);
            *v43 = v48;
            v49 = PpmConvertTime(v40 * v48, 0x10000uLL, 0x64uLL);
          }
          else
          {
            v49 = v40 * *v43;
          }
          *v41 += v49;
          v42 = v66;
        }
        ++v41;
        v43 += 6;
        v66 = --v42;
      }
      while ( v42 );
      v27 = v71;
    }
    if ( *(_QWORD *)(a1 + 96) )
    {
      v50 = *(_QWORD *)(a1 + 120);
    }
    else if ( *(_QWORD *)(a1 + 104) )
    {
      v50 = *(_QWORD *)(a1 + 128);
    }
    else
    {
      v50 = 100LL * *(_QWORD *)(a1 + 112);
    }
    v51 = v63;
    v63[3] = v50;
    if ( *(_QWORD *)(a1 + 104) )
      v50 = *(_QWORD *)(a1 + 128);
    v52 = (_QWORD *)v72;
    v51[4] = v50;
    v53 = v64;
    *v51 = v23;
    v51[1] = v39;
    *v52 = v53;
  }
  else
  {
    v5 = 1;
  }
  *(_BYTE *)(v27 + 7) = v5;
  return v5 ^ 1;
}

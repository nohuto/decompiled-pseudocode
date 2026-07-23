/*
 * XREFs of PpmPerfRecordUtility @ 0x140401850
 * Callers:
 *     PpmCheckRecordAllUtility @ 0x140401740 (PpmCheckRecordAllUtility.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1402D1760 (EtwpLevelKeywordEnabled.c)
 *     PpmPerfResetHistory @ 0x140401EA0 (PpmPerfResetHistory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall PpmPerfRecordUtility(__int64 a1)
{
  __int64 *v1; // rbx
  unsigned __int8 *v3; // rdx
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // rsi
  unsigned __int64 v7; // r9
  __int64 v8; // r12
  unsigned __int64 v9; // r10
  __int64 v10; // r13
  unsigned __int64 v11; // r11
  int v12; // r15d
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r10
  int v15; // r11d
  int v16; // r13d
  int v17; // r14d
  char v18; // cl
  int v19; // r13d
  char v20; // cl
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // r12
  __int64 *v23; // r10
  __int64 v24; // r9
  const EVENT_DESCRIPTOR *v25; // r10
  unsigned __int8 *v26; // rdx
  unsigned __int8 v27; // r10
  int v28; // r11d
  int v29; // r8d
  unsigned __int8 v30; // r9
  int v31; // eax
  __int64 v32; // rdx
  unsigned __int8 v33; // cl
  unsigned __int8 v34; // r13
  bool v35; // cf
  unsigned int v36; // ecx
  unsigned int v37; // r8d
  char v38; // r9
  unsigned __int64 v39; // rax
  __int64 v40; // r9
  unsigned int v41; // r10d
  unsigned __int8 *v42; // r8
  int v43; // eax
  int v44; // eax
  int v45; // edx
  unsigned __int8 *v46; // r14
  int v47; // eax
  int v48; // eax
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  unsigned int v53; // eax
  int v54; // [rsp+48h] [rbp-C0h] BYREF
  int v55; // [rsp+50h] [rbp-B8h] BYREF
  char v56; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v57; // [rsp+60h] [rbp-A8h] BYREF
  __int16 v58; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v59; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int8 *v60; // [rsp+78h] [rbp-90h] BYREF
  int v61; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v62; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v63; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v64; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 *v66; // [rsp+B8h] [rbp-50h]
  __int64 v67; // [rsp+C0h] [rbp-48h]
  unsigned __int64 *v68; // [rsp+C8h] [rbp-40h]
  __int64 v69; // [rsp+D0h] [rbp-38h]
  int *v70; // [rsp+D8h] [rbp-30h]
  __int64 v71; // [rsp+E0h] [rbp-28h]
  int *v72; // [rsp+E8h] [rbp-20h]
  __int64 v73; // [rsp+F0h] [rbp-18h]
  unsigned __int8 **v74; // [rsp+F8h] [rbp-10h]
  __int64 v75; // [rsp+100h] [rbp-8h]
  __int16 *v76; // [rsp+108h] [rbp+0h]
  __int64 v77; // [rsp+110h] [rbp+8h]
  __int64 *v78; // [rsp+118h] [rbp+10h]
  __int64 v79; // [rsp+120h] [rbp+18h]
  char *v80; // [rsp+128h] [rbp+20h]
  __int64 v81; // [rsp+130h] [rbp+28h]
  __int64 v82; // [rsp+138h] [rbp+30h]
  __int64 v83; // [rsp+140h] [rbp+38h]
  unsigned __int64 *v84; // [rsp+148h] [rbp+40h]
  __int64 v85; // [rsp+150h] [rbp+48h]
  __int16 *v86; // [rsp+158h] [rbp+50h]
  __int64 v87; // [rsp+160h] [rbp+58h]
  int *v88; // [rsp+168h] [rbp+60h]
  __int64 v89; // [rsp+170h] [rbp+68h]

  v1 = *(__int64 **)(a1 + 16);
  v3 = *(unsigned __int8 **)(a1 + 24);
  result = (unsigned int)PpmCheckMakeupCount;
  v5 = *(_QWORD *)(a1 + 8);
  v60 = v3;
  if ( v1 )
  {
    v6 = v1[1];
    v7 = v1[4] - v6;
    v8 = *v1;
    v9 = v1[5] - *v1;
    v10 = v1[2];
    v11 = v1[6] - v10;
    v12 = *((_DWORD *)v1 + 20) - *((_DWORD *)v1 + 6);
    if ( PpmCheckMakeupCount )
    {
      v39 = v7 / (unsigned int)(PpmCheckMakeupCount + 1);
      v3 = v60;
      v7 = v39;
      if ( v9 < v39 )
        v39 = v1[5] - *v1;
      v9 = v39;
      if ( v11 >= v7 )
        v11 = v7;
    }
    v1[1] = v6 + v7;
    v13 = v7;
    if ( v9 <= v7 )
      v13 = v9;
    *v1 = v8 + v9;
    v14 = v7;
    v1[2] = v11 + v10;
    if ( v11 <= v7 )
      v14 = v11;
    *((_DWORD *)v1 + 6) = *((_DWORD *)v1 + 20);
    if ( v7 <= 1 )
      v7 = 1LL;
    if ( v3 )
    {
      result = *v3;
      *(_DWORD *)(a1 + 40) = *v3 * v3[1];
    }
    else
    {
      v15 = *(unsigned __int16 *)(a1 + 60);
      if ( v5 )
      {
        v16 = *(_DWORD *)(v5 + 132);
        v17 = *(_DWORD *)(v5 + 136);
      }
      else
      {
        v16 = 100;
        v17 = 100;
      }
      v18 = *((_BYTE *)v1 + 237);
      v61 = v16;
      v19 = 0;
      LOBYTE(v54) = v18;
      v20 = *((_BYTE *)v1 + 236);
      v56 = 100;
      LOBYTE(v57) = v20;
      LODWORD(v60) = v17;
      v21 = v13 * (unsigned int)(100 * v17) / v7;
      v64 = v14;
      v58 = v21;
      v63 = v13;
      v55 = 0;
      v22 = v13 * (unsigned int)(v15 * v17) / v7;
      v62 = v7 - v13;
      LOWORD(v59) = v22;
      if ( *(_BYTE *)(a1 + 68) )
      {
        v23 = PPM_ETW_RECORDED_UTILITY;
        LOWORD(v55) = *(unsigned __int8 *)(a1 - 35040);
        BYTE2(v55) = *(_BYTE *)(a1 - 35039);
        v73 = 3LL;
      }
      else
      {
        v23 = PPM_ETW_RECORDED_UTILITY_HV;
        v55 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL);
        v73 = 4LL;
      }
      v72 = &v55;
      if ( PpmEtwRegistered
        && PpmEtwHandle
        && (EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 32) + 96LL, *((_BYTE *)v23 + 4), v23[1])
         || *(_WORD *)(v24 + 102) && EtwpLevelKeywordEnabled(*(_QWORD *)(v24 + 40) + 96LL, v25->Level, v25->Keyword)) )
      {
        UserData.Ptr = (ULONGLONG)&PpmCheckTime;
        *(_QWORD *)&UserData.Size = 8LL;
        v66 = &v62;
        v67 = 8LL;
        v68 = &v63;
        v69 = 8LL;
        v70 = &v61;
        v74 = &v60;
        v76 = &v58;
        v78 = &v59;
        v80 = &v56;
        v82 = (__int64)v1 + 233;
        v84 = &v64;
        v86 = &v57;
        v88 = &v54;
        v71 = 4LL;
        v75 = 4LL;
        v77 = 2LL;
        v79 = 2LL;
        v81 = 1LL;
        v83 = 1LL;
        v85 = 8LL;
        v87 = 1LL;
        v89 = 1LL;
        EtwWriteEx(PpmEtwHandle, v25, 0LL, 0, 0LL, 0LL, 0xDu, &UserData);
      }
      v26 = *(unsigned __int8 **)(a1 + 32);
      v27 = *((_BYTE *)v1 + 237);
      v28 = *((unsigned __int8 *)v1 + 236);
      v55 = v27;
      v60 = v26;
      if ( v26 )
      {
        v40 = *((unsigned int *)v26 + 1);
        v41 = *(_DWORD *)v26;
        v42 = &v26[12 * v40];
        *((_DWORD *)v26 + 2) += (unsigned __int16)v21 - *((unsigned __int16 *)v42 + 22);
        v43 = *((unsigned __int16 *)v42 + 23);
        *((_WORD *)v42 + 22) = v21;
        *((_DWORD *)v26 + 3) += (unsigned __int16)v22 - v43;
        v44 = *((unsigned __int16 *)v42 + 24);
        *((_WORD *)v42 + 23) = v22;
        v45 = (unsigned __int16)v17;
        v46 = v60;
        *((_DWORD *)v60 + 4) += v45 - v44;
        v47 = v42[50];
        *((_WORD *)v42 + 24) = v45;
        *((_DWORD *)v46 + 5) += v28 - v47;
        v48 = v42[51];
        LOBYTE(v45) = v55;
        v42[50] = v28;
        *((_DWORD *)v46 + 6) += (unsigned __int8)v45 - v48;
        v42[51] = v45;
        v49 = *((_DWORD *)v46 + 7) - v42[52];
        *((_DWORD *)v46 + 7) = v49;
        *((_DWORD *)v46 + 7) = v49 + *((unsigned __int8 *)v1 + 232);
        v42[52] = *((_BYTE *)v1 + 232);
        v50 = *((_DWORD *)v46 + 8) - v42[53];
        *((_DWORD *)v46 + 8) = v50;
        *((_DWORD *)v46 + 8) = v50 + *((unsigned __int8 *)v1 + 233);
        v42[53] = *((_BYTE *)v1 + 233);
        v51 = *((_DWORD *)v46 + 9) - v42[54];
        *((_DWORD *)v46 + 9) = v51;
        *((_DWORD *)v46 + 9) = v51 + *((unsigned __int8 *)v1 + 234);
        v42[54] = *((_BYTE *)v1 + 234);
        v52 = *((_DWORD *)v46 + 10) - v42[55];
        *((_DWORD *)v46 + 10) = v52;
        *((_DWORD *)v46 + 10) = v52 + *((unsigned __int8 *)v1 + 235);
        v42[55] = *((_BYTE *)v1 + 235);
        if ( (_DWORD)v40 + 1 != v41 )
          v19 = v40 + 1;
        v53 = *((_DWORD *)v46 + 2);
        *((_DWORD *)v46 + 1) = v19;
        LODWORD(v21) = v53 / v41;
        LODWORD(v22) = *((_DWORD *)v46 + 3) / v41;
        v17 = *((_DWORD *)v46 + 4) / v41;
        v28 = *((_DWORD *)v60 + 5) / v41;
        v55 = *((_DWORD *)v60 + 6) / v41;
        v31 = *((_DWORD *)v60 + 8) / v41;
        v27 = v55;
        v30 = v31;
        LOBYTE(v29) = v31;
        LOBYTE(v32) = v31;
      }
      else
      {
        v29 = *((_DWORD *)v1 + 58) >> 8;
        v30 = BYTE1(*((_DWORD *)v1 + 58));
        LOBYTE(v31) = v30;
        v32 = v30;
      }
      LOBYTE(v54) = v28;
      v33 = v28;
      if ( (unsigned __int8)v28 >= 0x64u )
        LOBYTE(v28) = 100;
      v34 = v32;
      if ( v33 < 0x64u )
        v34 = v31;
      v35 = (unsigned __int8)v54 < 0x64u;
      *(_DWORD *)(a1 + 52) = (unsigned int)v21 * (unsigned __int8)v28 / 0x64;
      if ( v35 )
        v30 = v29;
      if ( v27 >= 0x64u )
      {
        v27 = 100;
        v30 = v34;
      }
      *(_DWORD *)(a1 + 56) = (unsigned int)v21 * v27 / 0x64;
      if ( v30 >= 0x64u )
        v30 = 100;
      result = 1374389535 * (unsigned int)v21 * v30;
      v36 = (unsigned int)v21 * v30 / 0x64;
      if ( PpmCheckCurrentPipelineId == 5 )
      {
        v37 = v22 * v30;
        LODWORD(v21) = v21 - v36;
        v38 = 1;
        result = 1374389535 * v37;
        LODWORD(v22) = v22 - v37 / 0x64;
      }
      else
      {
        v38 = 0;
      }
      *(_DWORD *)(a1 + 40) = v21;
      *(_DWORD *)(a1 + 44) = v22;
      *(_DWORD *)(a1 + 48) = v36;
      *(_WORD *)(a1 + 62) = v17;
      *((_DWORD *)v1 + 60) = v12;
      if ( v38 )
        return PpmPerfResetHistory(a1);
    }
  }
  return result;
}

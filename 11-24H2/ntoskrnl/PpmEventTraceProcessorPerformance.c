/*
 * XREFs of PpmEventTraceProcessorPerformance @ 0x140A6C678
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PpmEventHiddenProcessorPerformance @ 0x14075D488 (PpmEventHiddenProcessorPerformance.c)
 */

char __fastcall PpmEventTraceProcessorPerformance(__int64 a1)
{
  _UNKNOWN **v1; // rax
  unsigned int v2; // ebx
  __int64 v4; // rdi
  _DWORD *v5; // rcx
  int v6; // eax
  unsigned int v7; // edx
  _DWORD *v8; // rdx
  char v10; // [rsp+38h] [rbp-D0h] BYREF
  char v11; // [rsp+39h] [rbp-CFh] BYREF
  char v12; // [rsp+3Ah] [rbp-CEh] BYREF
  int v13; // [rsp+3Ch] [rbp-CCh] BYREF
  int v14; // [rsp+40h] [rbp-C8h] BYREF
  int v15; // [rsp+44h] [rbp-C4h] BYREF
  int v16; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v17; // [rsp+4Ch] [rbp-BCh] BYREF
  int v18; // [rsp+50h] [rbp-B8h] BYREF
  int v19; // [rsp+54h] [rbp-B4h] BYREF
  int v20; // [rsp+58h] [rbp-B0h] BYREF
  int v21; // [rsp+5Ch] [rbp-ACh] BYREF
  int v22; // [rsp+60h] [rbp-A8h] BYREF
  int v23; // [rsp+64h] [rbp-A4h] BYREF
  int v24; // [rsp+68h] [rbp-A0h] BYREF
  int v25; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v26; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v27; // [rsp+74h] [rbp-94h] BYREF
  int v28; // [rsp+78h] [rbp-90h] BYREF
  int v29; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v30; // [rsp+80h] [rbp-88h] BYREF
  int v31; // [rsp+84h] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  __int64 v33; // [rsp+98h] [rbp-70h]
  __int64 v34; // [rsp+A0h] [rbp-68h]
  int *v35; // [rsp+A8h] [rbp-60h]
  __int64 v36; // [rsp+B0h] [rbp-58h]
  int *v37; // [rsp+B8h] [rbp-50h]
  __int64 v38; // [rsp+C0h] [rbp-48h]
  int *v39; // [rsp+C8h] [rbp-40h]
  __int64 v40; // [rsp+D0h] [rbp-38h]
  int *v41; // [rsp+D8h] [rbp-30h]
  __int64 v42; // [rsp+E0h] [rbp-28h]
  unsigned int *v43; // [rsp+E8h] [rbp-20h]
  __int64 v44; // [rsp+F0h] [rbp-18h]
  int *v45; // [rsp+F8h] [rbp-10h]
  __int64 v46; // [rsp+100h] [rbp-8h]
  int *v47; // [rsp+108h] [rbp+0h]
  __int64 v48; // [rsp+110h] [rbp+8h]
  int *v49; // [rsp+118h] [rbp+10h]
  __int64 v50; // [rsp+120h] [rbp+18h]
  int *v51; // [rsp+128h] [rbp+20h]
  __int64 v52; // [rsp+130h] [rbp+28h]
  char *v53; // [rsp+138h] [rbp+30h]
  __int64 v54; // [rsp+140h] [rbp+38h]
  char *v55; // [rsp+148h] [rbp+40h]
  __int64 v56; // [rsp+150h] [rbp+48h]
  int *v57; // [rsp+158h] [rbp+50h]
  __int64 v58; // [rsp+160h] [rbp+58h]
  int *v59; // [rsp+168h] [rbp+60h]
  __int64 v60; // [rsp+170h] [rbp+68h]
  int *v61; // [rsp+178h] [rbp+70h]
  __int64 v62; // [rsp+180h] [rbp+78h]
  int *v63; // [rsp+188h] [rbp+80h]
  __int64 v64; // [rsp+190h] [rbp+88h]
  int *v65; // [rsp+198h] [rbp+90h]
  __int64 v66; // [rsp+1A0h] [rbp+98h]
  char *v67; // [rsp+1A8h] [rbp+A0h]
  __int64 v68; // [rsp+1B0h] [rbp+A8h]
  unsigned int *v69; // [rsp+1B8h] [rbp+B0h]
  __int64 v70; // [rsp+1C0h] [rbp+B8h]
  int *v71; // [rsp+1C8h] [rbp+C0h]
  __int64 v72; // [rsp+1D0h] [rbp+C8h]
  unsigned int *v73; // [rsp+1D8h] [rbp+D0h]
  __int64 v74; // [rsp+1E0h] [rbp+D8h]
  int *v75; // [rsp+1E8h] [rbp+E0h]
  __int64 v76; // [rsp+1F0h] [rbp+E8h]
  _UNKNOWN *retaddr; // [rsp+210h] [rbp+108h] BYREF

  v1 = &retaddr;
  v2 = 0;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v1) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_CURRENT_PERF_RUNDOWN);
    if ( (_BYTE)v1 )
    {
      v4 = *(_QWORD *)(a1 + 35248);
      v5 = *(_DWORD **)(a1 + 35256);
      v28 = *(unsigned __int8 *)(a1 + 35340);
      v29 = *(_DWORD *)(a1 + 35396);
      v6 = 0;
      if ( v4 )
      {
        v7 = *(_DWORD *)(v4 + 448);
        v17 = v7;
        LOBYTE(v6) = *(_BYTE *)(v4 + 520) != 0;
        v22 = v6;
        v25 = *(unsigned __int8 *)(v4 + 488);
        v6 = *(unsigned __int8 *)(v4 + 523);
      }
      else
      {
        v7 = *(_DWORD *)(a1 + 68);
        v17 = v7;
        v22 = 0;
        v25 = 100;
      }
      v31 = v6;
      if ( v5 )
      {
        v14 = v5[6];
        v15 = v5[7];
        v16 = v5[20];
        v18 = v5[22];
        v19 = v5[23];
        v20 = v5[24];
        v23 = v5[25];
        v24 = v5[26];
        v26 = v5[21];
        v21 = v5[34];
        v7 = v5[33] * v7 / 0x64;
      }
      else
      {
        v14 = 100;
        v15 = 100;
        v16 = 100;
        v18 = 100;
        v19 = 100;
        v20 = 100;
        v23 = 0;
        v24 = 0;
        v26 = v7;
        v21 = 100;
      }
      LOWORD(v13) = *(unsigned __int8 *)(a1 + 208);
      v10 = *(_BYTE *)(a1 + 35336);
      UserData.Ptr = (ULONGLONG)&v13;
      v33 = a1 + 209;
      v35 = &v28;
      v37 = &v14;
      v39 = &v15;
      v41 = &v16;
      v43 = &v17;
      v45 = &v18;
      v47 = &v19;
      v49 = &v20;
      v51 = &v21;
      v53 = &v10;
      v11 = *(_BYTE *)(a1 + 35337);
      v55 = &v11;
      v57 = &v22;
      v59 = &v23;
      v61 = &v24;
      v63 = &v29;
      v65 = &v25;
      v12 = *(_BYTE *)(a1 + 35338);
      v67 = &v12;
      v69 = &v26;
      v30 = *(unsigned __int8 *)(a1 + 35341);
      v71 = &v30;
      v73 = &v27;
      v75 = &v31;
      v27 = v7;
      *(_QWORD *)&UserData.Size = 2LL;
      v34 = 1LL;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 4LL;
      v54 = 1LL;
      v56 = 1LL;
      v58 = 4LL;
      v60 = 4LL;
      v62 = 4LL;
      v64 = 4LL;
      v66 = 4LL;
      v68 = 1LL;
      v70 = 4LL;
      v72 = 4LL;
      v74 = 4LL;
      v76 = 4LL;
      LOBYTE(v1) = EtwWrite(PpmEtwHandle, &PPM_ETW_CURRENT_PERF_RUNDOWN, 0LL, 0x17u, &UserData);
      if ( v4 )
      {
        LOBYTE(v1) = a1 - 80;
        if ( *(_QWORD *)(v4 + 16) == a1 + 35248 )
        {
          if ( *(_DWORD *)(v4 + 296) )
          {
            do
            {
              LOBYTE(v1) = v2;
              v8 = (_DWORD *)(*(_QWORD *)(v4 + 312) + 1192LL * v2);
              if ( v8[4] == 2 )
                LOBYTE(v1) = PpmEventHiddenProcessorPerformance(a1, v8[5], v8[6], v8[7]);
              ++v2;
            }
            while ( v2 < *(_DWORD *)(v4 + 296) );
          }
        }
      }
    }
  }
  return (char)v1;
}

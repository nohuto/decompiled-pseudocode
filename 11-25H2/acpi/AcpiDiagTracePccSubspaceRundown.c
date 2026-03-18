/*
 * XREFs of AcpiDiagTracePccSubspaceRundown @ 0x1400571D4
 * Callers:
 *     AcpiDiagTraceControlCallback @ 0x140056B30 (AcpiDiagTraceControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTracePccSubspaceRundown(__int64 a1)
{
  __int64 v2; // xmm0_8
  char v3; // al
  __int64 v4; // xmm0_8
  char v5; // al
  __int64 v6; // xmm0_8
  __int64 v7; // xmm0_8
  __int64 v8; // xmm0_8
  char v9; // [rsp+30h] [rbp-D0h] BYREF
  char v10; // [rsp+31h] [rbp-CFh] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B0h]
  __int64 v15; // [rsp+58h] [rbp-A8h]
  __int64 v16; // [rsp+60h] [rbp-A0h]
  __int64 v17; // [rsp+68h] [rbp-98h]
  char *v18; // [rsp+70h] [rbp-90h]
  __int64 v19; // [rsp+78h] [rbp-88h]
  char *v20; // [rsp+80h] [rbp-80h]
  __int64 v21; // [rsp+88h] [rbp-78h]
  __int64 v22; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  __int64 v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  __int64 v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  __int64 v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  __int64 v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  __int64 v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  __int64 v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  __int64 v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  __int64 v38; // [rsp+110h] [rbp+10h]
  __int64 v39; // [rsp+118h] [rbp+18h]
  __int64 v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]
  __int64 v42; // [rsp+130h] [rbp+30h]
  __int64 v43; // [rsp+138h] [rbp+38h]
  __int64 v44; // [rsp+140h] [rbp+40h]
  __int64 v45; // [rsp+148h] [rbp+48h]
  int *v46; // [rsp+150h] [rbp+50h]
  __int64 v47; // [rsp+158h] [rbp+58h]
  _QWORD *v48; // [rsp+160h] [rbp+60h]
  int v49; // [rsp+168h] [rbp+68h]
  int v50; // [rsp+16Ch] [rbp+6Ch]
  _QWORD v51[2]; // [rsp+170h] [rbp+70h] BYREF
  int v52; // [rsp+180h] [rbp+80h]
  __int64 v53; // [rsp+184h] [rbp+84h]
  __int64 v54; // [rsp+18Ch] [rbp+8Ch]
  __int64 v55; // [rsp+194h] [rbp+94h]
  __int64 v56; // [rsp+19Ch] [rbp+9Ch]
  int v57; // [rsp+1A4h] [rbp+A4h]
  __int64 v58; // [rsp+1A8h] [rbp+A8h]
  __int64 v59; // [rsp+1B0h] [rbp+B0h]
  __int64 v60; // [rsp+1B8h] [rbp+B8h]
  __int64 v61; // [rsp+1C0h] [rbp+C0h]
  int v62; // [rsp+1C8h] [rbp+C8h]
  __int64 v63; // [rsp+1CCh] [rbp+CCh]
  __int64 v64; // [rsp+1D4h] [rbp+D4h]
  __int64 v65; // [rsp+1DCh] [rbp+DCh]
  __int64 v66; // [rsp+1E4h] [rbp+E4h]
  int v67; // [rsp+1ECh] [rbp+ECh]
  __int64 v68; // [rsp+1F0h] [rbp+F0h]
  __int64 v69; // [rsp+1F8h] [rbp+F8h]
  __int64 v70; // [rsp+200h] [rbp+100h]
  __int64 v71; // [rsp+208h] [rbp+108h]
  int v72; // [rsp+210h] [rbp+110h]
  __int64 v73; // [rsp+214h] [rbp+114h]
  __int64 v74; // [rsp+21Ch] [rbp+11Ch]

  if ( a1 )
  {
    v11 = 5;
    if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
    {
      if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_PCC_SUBSPACE_RUNDOWN) )
      {
        v2 = *(_QWORD *)(a1 + 104);
        v51[0] = *(_QWORD *)(a1 + 96);
        v52 = *(_DWORD *)(a1 + 112);
        v53 = *(_QWORD *)(a1 + 88);
        v54 = *(_QWORD *)(a1 + 80);
        v55 = *(_QWORD *)(a1 + 216);
        v57 = *(_DWORD *)(a1 + 232);
        v58 = *(_QWORD *)(a1 + 240);
        v59 = *(_QWORD *)(a1 + 248);
        v60 = *(_QWORD *)(a1 + 256);
        v62 = *(_DWORD *)(a1 + 272);
        v64 = *(_QWORD *)(a1 + 280);
        v65 = *(_QWORD *)(a1 + 288);
        v67 = *(_DWORD *)(a1 + 304);
        v68 = *(_QWORD *)(a1 + 312);
        v69 = *(_QWORD *)(a1 + 320);
        v70 = *(_QWORD *)(a1 + 328);
        v72 = *(_DWORD *)(a1 + 344);
        v74 = *(_QWORD *)(a1 + 352);
        UserData.Ptr = (unsigned __int64)&v12;
        v14 = a1 + 4;
        v3 = (*(_DWORD *)(a1 + 8) >> 1) & 0xF;
        v51[1] = v2;
        v4 = *(_QWORD *)(a1 + 224);
        v9 = v3;
        v18 = &v9;
        v5 = *(_BYTE *)(a1 + 8) & 1;
        v56 = v4;
        v6 = *(_QWORD *)(a1 + 264);
        v10 = v5;
        v20 = &v10;
        v22 = a1 + 132;
        v61 = v6;
        v7 = *(_QWORD *)(a1 + 296);
        v24 = a1 + 200;
        v66 = v7;
        v8 = *(_QWORD *)(a1 + 336);
        v26 = a1 + 24;
        v63 = 0LL;
        v71 = v8;
        v73 = 0LL;
        v12 = 1;
        *(_QWORD *)&UserData.Size = 4LL;
        v15 = 4LL;
        v16 = a1;
        v17 = 1LL;
        v19 = 1LL;
        v21 = 1LL;
        v23 = 1LL;
        v25 = 4LL;
        v27 = 4LL;
        v28 = a1 + 20;
        v29 = 4LL;
        v30 = a1 + 28;
        v31 = 4LL;
        v32 = a1 + 32;
        v33 = 4LL;
        v34 = a1 + 816;
        v36 = a1 + 820;
        v38 = a1 + 780;
        v40 = a1 + 704;
        v42 = a1 + 120;
        v44 = a1 + 128;
        v46 = &v11;
        v48 = v51;
        v35 = 4LL;
        v37 = 4LL;
        v39 = 4LL;
        v41 = 4LL;
        v49 = 36 * v11;
        v43 = 8LL;
        v45 = 4LL;
        v47 = 4LL;
        v50 = 0;
        EtwWrite(
          (REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext,
          &ACPI_ETW_EVENT_PCC_SUBSPACE_RUNDOWN,
          0LL,
          0x13u,
          &UserData);
      }
    }
  }
}

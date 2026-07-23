/*
 * XREFs of LdrpCgLogFailure @ 0x180161150
 * Callers:
 *     <none>
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180003870 (RtlRunOnceExecuteOnce.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18000D714 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     LdrpFindLoadedDllByAddress @ 0x18004F390 (LdrpFindLoadedDllByAddress.c)
 *     _tlgCreate1Sz_char @ 0x1800679B0 (_tlgCreate1Sz_char.c)
 *     RtlCaptureStackBackTrace @ 0x1800900F0 (RtlCaptureStackBackTrace.c)
 *     _tlgKeywordOn @ 0x18010FC38 (_tlgKeywordOn.c)
 *     LdrpGetPdbSignature @ 0x180161660 (LdrpGetPdbSignature.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

char __fastcall LdrpCgLogFailure(__int64 a1)
{
  void *ImageBaseAddress; // r12
  int LoadedDllByAddress; // eax
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  _BYTE *v6; // rdi
  unsigned __int64 *v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int16 *v9; // rax
  int v10; // ecx
  unsigned __int16 *v11; // rax
  int v12; // ecx
  unsigned __int16 *v13; // rax
  int v14; // ecx
  unsigned __int16 *v15; // rax
  int v16; // ecx
  __int64 v17; // r9
  __int64 v18; // r8
  __int16 v20; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v21; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 v22; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v23; // [rsp+44h] [rbp-C4h] BYREF
  int v24; // [rsp+48h] [rbp-C0h] BYREF
  int v25; // [rsp+4Ch] [rbp-BCh] BYREF
  ULONG BackTraceHash; // [rsp+50h] [rbp-B8h] BYREF
  ULONG v27; // [rsp+54h] [rbp-B4h] BYREF
  _QWORD v28[3]; // [rsp+58h] [rbp-B0h] BYREF
  void *v29; // [rsp+70h] [rbp-98h] BYREF
  __int64 v30; // [rsp+78h] [rbp-90h] BYREF
  __int64 v31; // [rsp+80h] [rbp-88h] BYREF
  const ULONG *v32; // [rsp+88h] [rbp-80h] BYREF
  const ULONG *v33; // [rsp+90h] [rbp-78h]
  const ULONG *v34; // [rsp+98h] [rbp-70h]
  const ULONG *v35; // [rsp+A0h] [rbp-68h]
  __int64 v36; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v37; // [rsp+B0h] [rbp-58h]
  __int64 v38; // [rsp+C0h] [rbp-48h]
  __int128 v39; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v40; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v41; // [rsp+E8h] [rbp-20h] BYREF
  PVOID BackTrace; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v43; // [rsp+100h] [rbp-8h]
  __int64 v44; // [rsp+110h] [rbp+8h]
  _EVENT_DATA_DESCRIPTOR v45; // [rsp+118h] [rbp+10h] BYREF
  void **v46; // [rsp+138h] [rbp+30h]
  __int64 v47; // [rsp+140h] [rbp+38h]
  __int16 *v48; // [rsp+148h] [rbp+40h]
  __int64 v49; // [rsp+150h] [rbp+48h]
  __int64 *v50; // [rsp+158h] [rbp+50h]
  int v51; // [rsp+160h] [rbp+58h]
  int v52; // [rsp+164h] [rbp+5Ch]
  _DWORD *v53; // [rsp+168h] [rbp+60h]
  __int64 v54; // [rsp+170h] [rbp+68h]
  __int64 v55; // [rsp+178h] [rbp+70h]
  _DWORD v56[2]; // [rsp+180h] [rbp+78h] BYREF
  _DWORD *v57; // [rsp+188h] [rbp+80h]
  __int64 v58; // [rsp+190h] [rbp+88h]
  __int64 v59; // [rsp+198h] [rbp+90h]
  _DWORD v60[2]; // [rsp+1A0h] [rbp+98h] BYREF
  _DWORD *v61; // [rsp+1A8h] [rbp+A0h]
  __int64 v62; // [rsp+1B0h] [rbp+A8h]
  __int64 v63; // [rsp+1B8h] [rbp+B0h]
  _DWORD v64[2]; // [rsp+1C0h] [rbp+B8h] BYREF
  _DWORD *v65; // [rsp+1C8h] [rbp+C0h]
  __int64 v66; // [rsp+1D0h] [rbp+C8h]
  __int64 v67; // [rsp+1D8h] [rbp+D0h]
  _DWORD v68[2]; // [rsp+1E0h] [rbp+D8h] BYREF
  __int64 *v69; // [rsp+1E8h] [rbp+E0h]
  __int64 v70; // [rsp+1F0h] [rbp+E8h]
  ULONG *v71; // [rsp+1F8h] [rbp+F0h]
  __int64 v72; // [rsp+200h] [rbp+F8h]
  _QWORD *v73; // [rsp+208h] [rbp+100h]
  __int64 v74; // [rsp+210h] [rbp+108h]
  char v75[16]; // [rsp+218h] [rbp+110h] BYREF
  char v76[16]; // [rsp+228h] [rbp+120h] BYREF
  char v77[16]; // [rsp+238h] [rbp+130h] BYREF
  char v78[16]; // [rsp+248h] [rbp+140h] BYREF
  __int16 *v79; // [rsp+258h] [rbp+150h]
  __int64 v80; // [rsp+260h] [rbp+158h]
  _BYTE *v81; // [rsp+268h] [rbp+160h]
  int v82; // [rsp+270h] [rbp+168h]
  int v83; // [rsp+274h] [rbp+16Ch]
  __int16 *v84; // [rsp+278h] [rbp+170h]
  __int64 v85; // [rsp+280h] [rbp+178h]
  __int128 *v86; // [rsp+288h] [rbp+180h]
  int v87; // [rsp+290h] [rbp+188h]
  int v88; // [rsp+294h] [rbp+18Ch]
  __int16 *v89; // [rsp+298h] [rbp+190h]
  __int64 v90; // [rsp+2A0h] [rbp+198h]
  __int128 *v91; // [rsp+2A8h] [rbp+1A0h]
  int v92; // [rsp+2B0h] [rbp+1A8h]
  int v93; // [rsp+2B4h] [rbp+1ACh]
  int *v94; // [rsp+2B8h] [rbp+1B0h]
  __int64 v95; // [rsp+2C0h] [rbp+1B8h]
  __int128 *v96; // [rsp+2C8h] [rbp+1C0h]
  int v97; // [rsp+2D0h] [rbp+1C8h]
  int v98; // [rsp+2D4h] [rbp+1CCh]
  int *v99; // [rsp+2D8h] [rbp+1D0h]
  __int64 v100; // [rsp+2E0h] [rbp+1D8h]
  PVOID *p_BackTrace; // [rsp+2E8h] [rbp+1E0h]
  int v102; // [rsp+2F0h] [rbp+1E8h]
  int v103; // [rsp+2F4h] [rbp+1ECh]
  __int64 *v104; // [rsp+2F8h] [rbp+1F0h]
  __int64 v105; // [rsp+300h] [rbp+1F8h]
  __int64 v106; // [rsp+308h] [rbp+200h] BYREF
  __int128 v107; // [rsp+310h] [rbp+208h]
  __int64 v108; // [rsp+320h] [rbp+218h]
  _BYTE v109[64]; // [rsp+328h] [rbp+220h] BYREF

  BackTraceHash = 0;
  BackTrace = 0LL;
  v44 = 0LL;
  v36 = 0LL;
  v38 = 0LL;
  *(_OWORD *)&v28[1] = 0LL;
  v43 = 0LL;
  v37 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  memset_thunk_772440563353939046(v109, 0, 0x40uLL);
  v106 = 0LL;
  v108 = 0LL;
  v32 = (const ULONG *)"unknown";
  v33 = (const ULONG *)"unknown";
  v34 = (const ULONG *)"unknown";
  v35 = (const ULONG *)"unknown";
  v107 = 0LL;
  RtlRunOnceExecuteOnce(&CastGuardTelemetryInitRunOnce, (PRTL_RUN_ONCE_INIT_FN)CastGuardTelemetryInitOnce, 0LL, 0LL);
  ImageBaseAddress = NtCurrentPeb()->ImageBaseAddress;
  LOWORD(LoadedDllByAddress) = RtlCaptureStackBackTrace(1u, 4u, &BackTrace, &BackTraceHash);
  v4 = (unsigned __int16)LoadedDllByAddress;
  v5 = 0LL;
  if ( (_WORD)LoadedDllByAddress )
  {
    v6 = v109;
    do
    {
      if ( v5 >= 4 )
        break;
      v7 = (unsigned __int64 *)(&v36 + v5);
      LoadedDllByAddress = LdrpFindLoadedDllByAddress((unsigned __int64)*(&BackTrace + v5), v7, 0LL);
      if ( LoadedDllByAddress >= 0 )
      {
        v8 = *v7;
        *((_DWORD *)&v40 + v5) = *(_DWORD *)(*v7 + 64);
        *((_DWORD *)&v41 + v5) = *(_DWORD *)(v8 + 128);
        *(&v106 + v5) = *(_QWORD *)(v8 + 48);
        LOBYTE(LoadedDllByAddress) = LdrpGetPdbSignature(
                                       *(_QWORD *)(v8 + 48),
                                       *(_DWORD *)(v8 + 64),
                                       (_DWORD)v6,
                                       (unsigned int)&v39 + 4 * v5,
                                       (__int64)&(&v32)[v5]);
      }
      ++v5;
      LODWORD(v6) = (_DWORD)v6 + 16;
    }
    while ( v5 < v4 );
  }
  if ( (unsigned int)dword_1801CEA28 > 5 )
  {
    LOBYTE(LoadedDllByAddress) = tlgKeywordOn((__int64)&dword_1801CEA28, 0x400000000000LL);
    if ( (_BYTE)LoadedDllByAddress )
    {
      v29 = ImageBaseAddress;
      v46 = &v29;
      v47 = 8LL;
      v48 = &v20;
      v50 = &v106;
      v20 = v4;
      v49 = 2LL;
      v51 = 8 * v4;
      v52 = 0;
      if ( v36 )
        v9 = (unsigned __int16 *)(v36 + 88);
      else
        v9 = (unsigned __int16 *)&v28[1];
      v10 = *v9;
      v55 = *((_QWORD *)v9 + 1);
      v53 = v56;
      v54 = 2LL;
      v56[0] = v10;
      v56[1] = 0;
      if ( (_QWORD)v37 )
        v11 = (unsigned __int16 *)(v37 + 88);
      else
        v11 = (unsigned __int16 *)&v28[1];
      v12 = *v11;
      v59 = *((_QWORD *)v11 + 1);
      v57 = v60;
      v58 = 2LL;
      v60[0] = v12;
      v60[1] = 0;
      if ( *((_QWORD *)&v37 + 1) )
        v13 = (unsigned __int16 *)(*((_QWORD *)&v37 + 1) + 88LL);
      else
        v13 = (unsigned __int16 *)&v28[1];
      v14 = *v13;
      v63 = *((_QWORD *)v13 + 1);
      v61 = v64;
      v62 = 2LL;
      v64[0] = v14;
      v64[1] = 0;
      if ( v38 )
        v15 = (unsigned __int16 *)(v38 + 88);
      else
        v15 = (unsigned __int16 *)&v28[1];
      v16 = *v15;
      v67 = *((_QWORD *)v15 + 1);
      v69 = &v30;
      v27 = BackTraceHash;
      v71 = &v27;
      v65 = v68;
      v68[0] = v16;
      v73 = v28;
      v66 = 2LL;
      v68[1] = 0;
      v30 = a1;
      v70 = 8LL;
      v72 = 4LL;
      LODWORD(v28[0]) = v4;
      v74 = 4LL;
      tlgCreate1Sz_char((__int64)v75, v32);
      tlgCreate1Sz_char((__int64)v76, v33);
      tlgCreate1Sz_char((__int64)v77, v34);
      tlgCreate1Sz_char((__int64)v78, v35);
      v21 = v4;
      v79 = &v21;
      v89 = &v23;
      v81 = v109;
      v91 = &v40;
      v82 = 16 * v4;
      v84 = &v22;
      v86 = &v39;
      v87 = 4 * v4;
      v92 = 4 * v4;
      v97 = 4 * v4;
      v99 = &v25;
      p_BackTrace = &BackTrace;
      v94 = &v24;
      v104 = &v31;
      v80 = 2LL;
      v83 = 0;
      v22 = v4;
      v85 = 2LL;
      v88 = 0;
      v23 = v4;
      v90 = 2LL;
      v93 = 0;
      LOWORD(v24) = v4;
      v95 = 2LL;
      v96 = &v41;
      v98 = 0;
      LOWORD(v25) = v4;
      v100 = 2LL;
      v102 = v17;
      v103 = 0;
      v31 = 0x1000000LL;
      v105 = 8LL;
      LOBYTE(LoadedDllByAddress) = tlgWriteTransfer_EtwEventWriteTransfer(
                                     (__int64)&dword_1801CEA28,
                                     (unsigned __int8 *)dword_1801A4B73,
                                     v18,
                                     v17,
                                     0x1Fu,
                                     &v45);
    }
  }
  return LoadedDllByAddress;
}

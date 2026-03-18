/*
 * XREFs of ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x140050D10
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x140050448 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x14018D338 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ?LogMouseLatencyEvents@MousePerfSummary@@AEAAXAEBU_MousePerf@@@Z @ 0x1400513E0 (-LogMouseLatencyEvents@MousePerfSummary@@AEAAXAEBU_MousePerf@@@Z.c)
 *     ?SendMousePerfSummaryTelemetry@MousePerfSummary@@AEAAXXZ @ 0x14005188C (-SendMousePerfSummaryTelemetry@MousePerfSummary@@AEAAXXZ.c)
 *     ?SendMouseLatencyTelemetryRandomPick@MousePerfSummary@@AEAAXXZ @ 0x140051D24 (-SendMouseLatencyTelemetryRandomPick@MousePerfSummary@@AEAAXXZ.c)
 *     ?CalculateLatencyInMicroseconds@MousePerfSummary@@AEAA_K_K0@Z @ 0x140052A14 (-CalculateLatencyInMicroseconds@MousePerfSummary@@AEAA_K_K0@Z.c)
 */

void __fastcall MousePerfSummary::CollectMousePerfTelemetry(MousePerfSummary *this, const struct _MousePerf *a2)
{
  int v2; // r11d
  const struct _MousePerf *v3; // r9
  char *v5; // r14
  unsigned __int64 *v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  _QWORD *v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 *v16; // r10
  unsigned __int64 *v17; // rsi
  unsigned __int64 *v18; // r14
  unsigned __int64 *v19; // r13
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  int v23; // ecx
  bool v24; // zf
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  int v27; // ecx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  unsigned __int64 *v32; // r15
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  int v36; // ecx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // r8
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rax
  int v60; // ecx
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rax
  int v66; // ecx
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rax
  int v72; // ecx
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rcx
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rax
  int v78; // ecx
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // rcx
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rax
  int v84; // ecx
  unsigned __int64 v85; // rcx
  unsigned __int64 v86; // rcx
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rax
  int v90; // ecx
  unsigned __int64 v91; // rcx
  unsigned __int64 *v92; // [rsp+60h] [rbp+8h]

  v2 = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 122) = v2;
  v3 = a2;
  if ( v2 != 1 )
  {
    v5 = (char *)this + 456;
    *((_QWORD *)this + 59) = 0LL;
    v6 = (unsigned __int64 *)((char *)this + 464);
    *((_QWORD *)this + 57) = 0LL;
    *((_QWORD *)this + 58) = 0LL;
    v7 = *((_QWORD *)a2 + 1);
    if ( v7 && *(_QWORD *)a2 )
      v8 = (unsigned __int64)(1000000 * (v7 - *(_QWORD *)a2)) / gliQpcFreq.QuadPart;
    else
      v8 = 0LL;
    v9 = (_QWORD *)((char *)this + 400);
    *((_QWORD *)this + 50) = v8;
    v10 = *((_QWORD *)a2 + 7);
    if ( v10 && (v11 = *((_QWORD *)a2 + 1)) != 0 )
      v12 = (unsigned __int64)(1000000 * (v10 - v11)) / gliQpcFreq.QuadPart;
    else
      v12 = 0LL;
    *((_QWORD *)this + 51) = v12;
    v13 = *((_QWORD *)v3 + 8);
    if ( v13 && (v14 = *((_QWORD *)v3 + 7)) != 0 )
      v15 = (unsigned __int64)(1000000 * (v13 - v14)) / gliQpcFreq.QuadPart;
    else
      v15 = 0LL;
    v92 = (unsigned __int64 *)v5;
    v16 = (unsigned __int64 *)((char *)this + 416);
    *((_QWORD *)this + 52) = v15;
    v17 = (unsigned __int64 *)((char *)this + 416);
    v18 = (unsigned __int64 *)((char *)this + 472);
    v19 = (unsigned __int64 *)((char *)this + 408);
    if ( v2 )
    {
      v32 = v92;
      goto LABEL_33;
    }
    if ( v8 )
    {
      v20 = *(_QWORD *)this;
      if ( *(_QWORD *)this <= v8 )
        v20 = v8;
      *(_QWORD *)this = v20;
      v21 = *((_QWORD *)this + 1);
      if ( v21 >= v8 )
        v21 = v8;
      *((_QWORD *)this + 1) = v21;
      v22 = v8 + *((_QWORD *)this + 3);
      v23 = *((_DWORD *)this + 8);
      v24 = v23 == -1;
      v25 = (unsigned int)(v23 + 1);
      *((_QWORD *)this + 3) = v22;
      *((_DWORD *)this + 8) = v25;
      if ( v24 )
        *((_QWORD *)this + 2) = 0LL;
      else
        *((_QWORD *)this + 2) = v22 / v25;
    }
    if ( v12 )
    {
      v26 = *((_QWORD *)this + 10);
      v27 = *((_DWORD *)this + 28);
      if ( v26 <= v12 )
        v26 = v12;
      *((_QWORD *)this + 10) = v26;
      v28 = *((_QWORD *)this + 11);
      if ( v28 >= v12 )
        v28 = v12;
      *((_QWORD *)this + 11) = v28;
      v29 = v12 + *((_QWORD *)this + 13);
      v24 = v27 == -1;
      v30 = (unsigned int)(v27 + 1);
      *((_QWORD *)this + 13) = v29;
      *((_DWORD *)this + 28) = v30;
      if ( v24 )
        *((_QWORD *)this + 12) = 0LL;
      else
        *((_QWORD *)this + 12) = v29 / v30;
    }
    v31 = *v16;
    v32 = (unsigned __int64 *)((char *)this + 456);
    v6 = (unsigned __int64 *)((char *)this + 464);
    v18 = (unsigned __int64 *)((char *)this + 472);
    if ( *v16 )
    {
      v33 = *((_QWORD *)this + 25);
      if ( v33 <= v31 )
        v33 = *v16;
      *((_QWORD *)this + 25) = v33;
      v34 = *((_QWORD *)this + 26);
      if ( v34 >= v31 )
        v34 = v31;
      *((_QWORD *)this + 26) = v34;
      v35 = v31 + *((_QWORD *)this + 28);
      v36 = *((_DWORD *)this + 58);
      v24 = v36 == -1;
      v37 = (unsigned int)(v36 + 1);
      *((_QWORD *)this + 28) = v35;
      *((_DWORD *)this + 58) = v37;
      if ( !v24 )
      {
        v18 = (unsigned __int64 *)((char *)this + 472);
        *((_QWORD *)this + 27) = v35 / v37;
        goto LABEL_33;
      }
LABEL_115:
      *((_QWORD *)this + 27) = 0LL;
      goto LABEL_33;
    }
    goto LABEL_33;
  }
  v38 = *((_QWORD *)a2 + 2);
  if ( v38 )
  {
    v40 = MousePerfSummary::CalculateLatencyInMicroseconds(this, *(_QWORD *)a2, v38);
  }
  else
  {
    v39 = *((_QWORD *)a2 + 1);
    if ( !v39 || !*(_QWORD *)a2 )
    {
      v41 = 0LL;
      goto LABEL_45;
    }
    v40 = (unsigned __int64)(1000000 * (v39 - *(_QWORD *)a2)) / gliQpcFreq.QuadPart;
  }
  v41 = v40;
LABEL_45:
  v9 = (_QWORD *)((char *)this + 400);
  *((_QWORD *)this + 50) = v41;
  v42 = *((_QWORD *)v3 + 1);
  if ( v42 && (v43 = *((_QWORD *)v3 + 2)) != 0 )
    v44 = (unsigned __int64)(1000000 * (v42 - v43)) / gliQpcFreq.QuadPart;
  else
    v44 = 0LL;
  v32 = (unsigned __int64 *)((char *)this + 456);
  *((_QWORD *)this + 57) = v44;
  v45 = *((_QWORD *)v3 + 3);
  if ( v45 && (v46 = *((_QWORD *)v3 + 1)) != 0 )
    v47 = (unsigned __int64)(1000000 * (v45 - v46)) / gliQpcFreq.QuadPart;
  else
    v47 = 0LL;
  v19 = (unsigned __int64 *)((char *)this + 408);
  *((_QWORD *)this + 51) = v47;
  v48 = *((_QWORD *)v3 + 4);
  if ( v48 && (v49 = *((_QWORD *)v3 + 3)) != 0 )
    v50 = (unsigned __int64)(1000000 * (v48 - v49)) / gliQpcFreq.QuadPart;
  else
    v50 = 0LL;
  v6 = (unsigned __int64 *)((char *)this + 464);
  *((_QWORD *)this + 58) = v50;
  v51 = *((_QWORD *)v3 + 7);
  if ( v51 && (v52 = *((_QWORD *)v3 + 4)) != 0 )
    v53 = (unsigned __int64)(1000000 * (v51 - v52)) / gliQpcFreq.QuadPart;
  else
    v53 = 0LL;
  v18 = (unsigned __int64 *)((char *)this + 472);
  *((_QWORD *)this + 59) = v53;
  v54 = *((_QWORD *)v3 + 8);
  if ( v54 && (v55 = *((_QWORD *)v3 + 7)) != 0 )
    v56 = (unsigned __int64)(1000000 * (v54 - v55)) / gliQpcFreq.QuadPart;
  else
    v56 = 0LL;
  v17 = (unsigned __int64 *)((char *)this + 416);
  *((_QWORD *)this + 52) = v56;
  if ( v41 )
  {
    v57 = *(_QWORD *)this;
    if ( *(_QWORD *)this <= v41 )
      v57 = v41;
    *(_QWORD *)this = v57;
    v58 = *((_QWORD *)this + 1);
    if ( v58 >= v41 )
      v58 = v41;
    *((_QWORD *)this + 1) = v58;
    v59 = v41 + *((_QWORD *)this + 3);
    v60 = *((_DWORD *)this + 8);
    v24 = v60 == -1;
    v61 = (unsigned int)(v60 + 1);
    *((_QWORD *)this + 3) = v59;
    *((_DWORD *)this + 8) = v61;
    if ( v24 )
      *((_QWORD *)this + 2) = 0LL;
    else
      *((_QWORD *)this + 2) = v59 / v61;
  }
  v62 = *v32;
  if ( *v32 )
  {
    v63 = *((_QWORD *)this + 5);
    if ( v63 <= v62 )
      v63 = *v32;
    *((_QWORD *)this + 5) = v63;
    v64 = *((_QWORD *)this + 6);
    if ( v64 >= v62 )
      v64 = v62;
    *((_QWORD *)this + 6) = v64;
    v65 = v62 + *((_QWORD *)this + 8);
    v66 = *((_DWORD *)this + 18);
    v24 = v66 == -1;
    v67 = (unsigned int)(v66 + 1);
    *((_QWORD *)this + 8) = v65;
    *((_DWORD *)this + 18) = v67;
    if ( v24 )
      *((_QWORD *)this + 7) = 0LL;
    else
      *((_QWORD *)this + 7) = v65 / v67;
  }
  v68 = *v19;
  if ( *v19 )
  {
    v69 = *((_QWORD *)this + 10);
    if ( v69 <= v68 )
      v69 = *v19;
    *((_QWORD *)this + 10) = v69;
    v70 = *((_QWORD *)this + 11);
    if ( v70 >= v68 )
      v70 = v68;
    *((_QWORD *)this + 11) = v70;
    v71 = v68 + *((_QWORD *)this + 13);
    v72 = *((_DWORD *)this + 28);
    v24 = v72 == -1;
    v73 = (unsigned int)(v72 + 1);
    *((_QWORD *)this + 13) = v71;
    *((_DWORD *)this + 28) = v73;
    if ( v24 )
      *((_QWORD *)this + 12) = 0LL;
    else
      *((_QWORD *)this + 12) = v71 / v73;
  }
  v74 = *v6;
  if ( *v6 )
  {
    v75 = *((_QWORD *)this + 15);
    if ( v75 <= v74 )
      v75 = *v6;
    *((_QWORD *)this + 15) = v75;
    v76 = *((_QWORD *)this + 16);
    if ( v76 >= v74 )
      v76 = v74;
    *((_QWORD *)this + 16) = v76;
    v77 = v74 + *((_QWORD *)this + 18);
    v78 = *((_DWORD *)this + 38);
    v24 = v78 == -1;
    v79 = (unsigned int)(v78 + 1);
    *((_QWORD *)this + 18) = v77;
    *((_DWORD *)this + 38) = v79;
    if ( v24 )
      *((_QWORD *)this + 17) = 0LL;
    else
      *((_QWORD *)this + 17) = v77 / v79;
  }
  v80 = *v18;
  if ( *v18 )
  {
    v81 = *((_QWORD *)this + 20);
    if ( v81 <= v80 )
      v81 = *v18;
    *((_QWORD *)this + 20) = v81;
    v82 = *((_QWORD *)this + 21);
    if ( v82 >= v80 )
      v82 = v80;
    *((_QWORD *)this + 21) = v82;
    v83 = v80 + *((_QWORD *)this + 23);
    v84 = *((_DWORD *)this + 48);
    v24 = v84 == -1;
    v85 = (unsigned int)(v84 + 1);
    *((_QWORD *)this + 23) = v83;
    *((_DWORD *)this + 48) = v85;
    if ( v24 )
      *((_QWORD *)this + 22) = 0LL;
    else
      *((_QWORD *)this + 22) = v83 / v85;
  }
  v86 = *v17;
  if ( *v17 )
  {
    v87 = *((_QWORD *)this + 25);
    if ( v87 <= v86 )
      v87 = *v17;
    *((_QWORD *)this + 25) = v87;
    v88 = *((_QWORD *)this + 26);
    if ( v88 >= v86 )
      v88 = v86;
    *((_QWORD *)this + 26) = v88;
    v89 = v86 + *((_QWORD *)this + 28);
    v90 = *((_DWORD *)this + 58);
    v24 = v90 == -1;
    v91 = (unsigned int)(v90 + 1);
    *((_QWORD *)this + 28) = v89;
    *((_DWORD *)this + 58) = v91;
    if ( !v24 )
    {
      *((_QWORD *)this + 27) = v89 / v91;
      goto LABEL_33;
    }
    goto LABEL_115;
  }
LABEL_33:
  MousePerfSummary::LogMouseLatencyEvents(this, v3);
  if ( *((_BYTE *)this + 528) == 1 )
  {
    *((_QWORD *)this + 67) = *v9;
    *((_QWORD *)this + 68) = *v19;
    *((_QWORD *)this + 69) = *v17;
    *((_QWORD *)this + 74) = *v32;
    *((_QWORD *)this + 75) = *v6;
    *((_QWORD *)this + 76) = *v18;
    *((_BYTE *)this + 528) = 0;
  }
  if ( (unsigned int)(*((_DWORD *)this + 122) - 2) > 1 )
  {
    MousePerfSummary::SendMousePerfSummaryTelemetry(this);
    MousePerfSummary::SendMouseLatencyTelemetryRandomPick(this);
  }
}

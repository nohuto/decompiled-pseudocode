/*
 * XREFs of ?RescaleNonClientMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1402660B8
 * Callers:
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1401CA23C (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 * Callees:
 *     GetDpiForSystem @ 0x140079854 (GetDpiForSystem.c)
 */

void __fastcall RescaleNonClientMetrics(struct tagNONCLIENTMETRICSW *a1)
{
  INT DpiForSystem; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax

  DpiForSystem = GetDpiForSystem((__int64)a1);
  v5 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19928);
  if ( DpiForSystem != *(unsigned __int16 *)(v5 + 6998) )
  {
    UserSessionState = W32GetUserSessionState(v6, v5);
    *((_DWORD *)a1 + 4) = EngMulDiv(
                            *((_DWORD *)a1 + 4),
                            *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19928) + 6998LL),
                            DpiForSystem);
    v10 = W32GetUserSessionState(v9, v8);
    *((_DWORD *)a1 + 5) = EngMulDiv(
                            *((_DWORD *)a1 + 5),
                            *(unsigned __int16 *)(*(_QWORD *)(v10 + 19928) + 6998LL),
                            DpiForSystem);
    v13 = W32GetUserSessionState(v12, v11);
    *((_DWORD *)a1 + 7) = EngMulDiv(
                            *((_DWORD *)a1 + 7),
                            *(unsigned __int16 *)(*(_QWORD *)(v13 + 19928) + 6998LL),
                            DpiForSystem);
    v16 = W32GetUserSessionState(v15, v14);
    *((_DWORD *)a1 + 6) = EngMulDiv(
                            *((_DWORD *)a1 + 6),
                            *(unsigned __int16 *)(*(_QWORD *)(v16 + 19928) + 6998LL),
                            DpiForSystem);
    v19 = W32GetUserSessionState(v18, v17);
    *((_DWORD *)a1 + 29) = EngMulDiv(
                             *((_DWORD *)a1 + 29),
                             *(unsigned __int16 *)(*(_QWORD *)(v19 + 19928) + 6998LL),
                             DpiForSystem);
    v22 = W32GetUserSessionState(v21, v20);
    *((_DWORD *)a1 + 30) = EngMulDiv(
                             *((_DWORD *)a1 + 30),
                             *(unsigned __int16 *)(*(_QWORD *)(v22 + 19928) + 6998LL),
                             DpiForSystem);
    v25 = W32GetUserSessionState(v24, v23);
    *((_DWORD *)a1 + 32) = EngMulDiv(
                             *((_DWORD *)a1 + 32),
                             *(unsigned __int16 *)(*(_QWORD *)(v25 + 19928) + 6998LL),
                             DpiForSystem);
    v28 = W32GetUserSessionState(v27, v26);
    *((_DWORD *)a1 + 31) = EngMulDiv(
                             *((_DWORD *)a1 + 31),
                             *(unsigned __int16 *)(*(_QWORD *)(v28 + 19928) + 6998LL),
                             DpiForSystem);
    v31 = W32GetUserSessionState(v30, v29);
    *((_DWORD *)a1 + 54) = EngMulDiv(
                             *((_DWORD *)a1 + 54),
                             *(unsigned __int16 *)(*(_QWORD *)(v31 + 19928) + 6998LL),
                             DpiForSystem);
    v34 = W32GetUserSessionState(v33, v32);
    *((_DWORD *)a1 + 55) = EngMulDiv(
                             *((_DWORD *)a1 + 55),
                             *(unsigned __int16 *)(*(_QWORD *)(v34 + 19928) + 6998LL),
                             DpiForSystem);
    v37 = W32GetUserSessionState(v36, v35);
    *((_DWORD *)a1 + 57) = EngMulDiv(
                             *((_DWORD *)a1 + 57),
                             *(unsigned __int16 *)(*(_QWORD *)(v37 + 19928) + 6998LL),
                             DpiForSystem);
    v40 = W32GetUserSessionState(v39, v38);
    *((_DWORD *)a1 + 56) = EngMulDiv(
                             *((_DWORD *)a1 + 56),
                             *(unsigned __int16 *)(*(_QWORD *)(v40 + 19928) + 6998LL),
                             DpiForSystem);
    v43 = W32GetUserSessionState(v42, v41);
    *((_DWORD *)a1 + 80) = EngMulDiv(
                             *((_DWORD *)a1 + 80),
                             *(unsigned __int16 *)(*(_QWORD *)(v43 + 19928) + 6998LL),
                             DpiForSystem);
    v46 = W32GetUserSessionState(v45, v44);
    *((_DWORD *)a1 + 79) = EngMulDiv(
                             *((_DWORD *)a1 + 79),
                             *(unsigned __int16 *)(*(_QWORD *)(v46 + 19928) + 6998LL),
                             DpiForSystem);
    v49 = W32GetUserSessionState(v48, v47);
    *((_DWORD *)a1 + 103) = EngMulDiv(
                              *((_DWORD *)a1 + 103),
                              *(unsigned __int16 *)(*(_QWORD *)(v49 + 19928) + 6998LL),
                              DpiForSystem);
    v52 = W32GetUserSessionState(v51, v50);
    *((_DWORD *)a1 + 102) = EngMulDiv(
                              *((_DWORD *)a1 + 102),
                              *(unsigned __int16 *)(*(_QWORD *)(v52 + 19928) + 6998LL),
                              DpiForSystem);
    v55 = W32GetUserSessionState(v54, v53);
    *((_DWORD *)a1 + 2) = EngMulDiv(
                            *((_DWORD *)a1 + 2),
                            *(unsigned __int16 *)(*(_QWORD *)(v55 + 19928) + 6998LL),
                            DpiForSystem);
    v58 = W32GetUserSessionState(v57, v56);
    *((_DWORD *)a1 + 3) = EngMulDiv(
                            *((_DWORD *)a1 + 3),
                            *(unsigned __int16 *)(*(_QWORD *)(v58 + 19928) + 6998LL),
                            DpiForSystem);
    v61 = W32GetUserSessionState(v60, v59);
    *((_DWORD *)a1 + 1) = EngMulDiv(
                            *((_DWORD *)a1 + 1),
                            *(unsigned __int16 *)(*(_QWORD *)(v61 + 19928) + 6998LL),
                            DpiForSystem);
    v64 = W32GetUserSessionState(v63, v62);
    *((_DWORD *)a1 + 125) = EngMulDiv(
                              *((_DWORD *)a1 + 125),
                              *(unsigned __int16 *)(*(_QWORD *)(v64 + 19928) + 6998LL),
                              DpiForSystem);
  }
}

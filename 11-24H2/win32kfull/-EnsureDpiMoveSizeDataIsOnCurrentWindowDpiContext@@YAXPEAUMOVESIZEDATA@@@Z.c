/*
 * XREFs of ?EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1401D933C
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x140186E8C (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140211468 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z @ 0x1402189EC (-xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z.c)
 *     _lambda_dcff6b42735babe5bbfdec74d1bb422f_::operator() @ 0x1402A51E8 (_lambda_dcff6b42735babe5bbfdec74d1bb422f_--operator().c)
 */

void __fastcall EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext(struct MOVESIZEDATA *a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 *v4; // rbx
  unsigned int v5; // edi
  unsigned int v6; // esi
  unsigned int v7; // edi
  bool v8; // r14
  bool v9; // r12
  __int64 v10; // rbx
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rdx
  char v16; // r12
  char v17; // r13
  int v18; // edi
  int v19; // r14d
  int v20; // ebx
  int v21; // esi
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // edi
  int v25; // esi
  bool v26; // bl
  bool v27; // r14
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  __int64 v31; // [rsp+40h] [rbp-29h]
  __int64 v32; // [rsp+48h] [rbp-21h]
  __int64 v33; // [rsp+50h] [rbp-19h]
  _QWORD v34[10]; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v35; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v36; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v37; // [rsp+E0h] [rbp+77h] BYREF

  v2 = *((_DWORD *)a1 + 70);
  v4 = (__int64 *)*((_QWORD *)a1 + 2);
  v35 = v2;
  v5 = *(_DWORD *)(v4[5] + 288);
  v36 = v5;
  if ( v2 != v5 && (*(_BYTE *)(v4[5] + 288) & 0xF) == 3 )
  {
    v6 = v2 >> 8;
    *((_DWORD *)a1 + 70) = v5;
    v7 = v5 >> 8;
    v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = *v4;
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v12) = v9;
      LOBYTE(v13) = v8;
      WPP_RECORDER_AND_TRACE_SF_qdd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 69416),
        4,
        1,
        95,
        (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
        v10,
        v7,
        v6);
    }
    v14 = *((_QWORD *)a1 + 2);
    *(_OWORD *)((char *)a1 + 120) = *(_OWORD *)(*(_QWORD *)(v14 + 40) + 88LL);
    *(_OWORD *)((char *)a1 + 24) = *(_OWORD *)(*(_QWORD *)(v14 + 40) + 88LL);
    *(_OWORD *)((char *)a1 + 56) = *(_OWORD *)(*(_QWORD *)(v14 + 40) + 88LL);
    xxxGetMinMaxTrackInfo(a1, a2);
    v37 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 256LL));
    v34[0] = &v35;
    v34[1] = &v37;
    v34[2] = &v36;
    LogicalToPhysicalDPIRect((char *)a1 + 136, (char *)a1 + 136, v35, &v37);
    PhysicalToLogicalDPIRect((char *)a1 + 136, (char *)a1 + 136, v36, &v37);
    v16 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v16 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v18 = *((_DWORD *)a1 + 37);
      v19 = *((_DWORD *)a1 + 35);
      v20 = *((_DWORD *)a1 + 36);
      v21 = *((_DWORD *)a1 + 34);
      v22 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v15);
      LODWORD(v33) = v20;
      LODWORD(v32) = v19;
      LODWORD(v31) = v21;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v16,
        v17,
        *(_QWORD *)(v22 + 69416),
        4u,
        1u,
        0x60u,
        (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
        v31,
        v32,
        v33,
        v18,
        v20 - v21,
        v18 - v19);
    }
    lambda_dcff6b42735babe5bbfdec74d1bb422f_::operator()(v34, (char *)a1 + 252);
    lambda_dcff6b42735babe5bbfdec74d1bb422f_::operator()(v34, (char *)a1 + 188);
    if ( *((_DWORD *)a1 + 44) == 9 )
    {
      v24 = *((_DWORD *)a1 + 30) - *((_DWORD *)a1 + 63);
      v25 = *((_DWORD *)a1 + 31) - *((_DWORD *)a1 + 64);
      *((_DWORD *)a1 + 43) = v25;
      *((_DWORD *)a1 + 42) = v24;
      v26 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v26 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v28 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v23);
        LOBYTE(v29) = v27;
        LOBYTE(v30) = v26;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v30,
          v29,
          *(_QWORD *)(v28 + 69416),
          4,
          1,
          97,
          (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
          v24,
          v25);
      }
    }
  }
}

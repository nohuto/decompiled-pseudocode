/*
 * XREFs of ?ivrInitAllwin32knsDelayLoads@@YAXPEAX@Z @ 0x140217914
 * Callers:
 *     ?ivrInitialize@@YAJXZ @ 0x140217B2C (-ivrInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ivrInitAllwin32knsDelayLoads(_QWORD *a1)
{
  __int64 ExportedRoutineByName; // rbx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rcx

  if ( a1 )
  {
    ExportedRoutineByName = RtlFindExportedRoutineByName(a1[2], "IVInitialize");
    *(_QWORD *)(W32GetUserSessionState(v3) + 19568) = ExportedRoutineByName;
    v4 = RtlFindExportedRoutineByName(a1[2], "IVUninitialize");
    *(_QWORD *)(W32GetUserSessionState(v5) + 19576) = v4;
    v6 = RtlFindExportedRoutineByName(a1[2], "IVRegisterChildLifetimeNotifications");
    *(_QWORD *)(W32GetUserSessionState(v7) + 19584) = v6;
    v8 = RtlFindExportedRoutineByName(a1[2], "IVUnregisterChildLifetimeNotifications");
    *(_QWORD *)(W32GetUserSessionState(v9) + 19592) = v8;
    v10 = RtlFindExportedRoutineByName(a1[2], "IVSend");
    *(_QWORD *)(W32GetUserSessionState(v11) + 19624) = v10;
    v12 = RtlFindExportedRoutineByName(a1[2], "IVRecv");
    *(_QWORD *)(W32GetUserSessionState(v13) + 19632) = v12;
    v14 = RtlFindExportedRoutineByName(a1[2], "IVBroadcast");
    *(_QWORD *)(W32GetUserSessionState(v15) + 19640) = v14;
    v16 = RtlFindExportedRoutineByName(a1[2], "IVFreeIVSRContext");
    *(_QWORD *)(W32GetUserSessionState(v17) + 19648) = v16;
    v18 = RtlFindExportedRoutineByName(a1[2], "IVResolveContainerId");
    *(_QWORD *)(W32GetUserSessionState(v19) + 19616) = v18;
    v20 = RtlFindExportedRoutineByName(a1[2], "IVChildReInitialize");
    *(_QWORD *)(W32GetUserSessionState(v21) + 19600) = v20;
    v22 = RtlFindExportedRoutineByName(a1[2], "IVCloseChildChannel");
    *(_QWORD *)(W32GetUserSessionState(v23) + 19608) = v22;
  }
}

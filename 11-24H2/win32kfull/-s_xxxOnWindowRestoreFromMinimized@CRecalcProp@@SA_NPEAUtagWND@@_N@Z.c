/*
 * XREFs of ?s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_N@Z @ 0x1402C50DC
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x1401BF74C (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     ?SetPendingStateToProcessed@CRecalcProp@@AEAAXXZ @ 0x1402C40F0 (-SetPendingStateToProcessed@CRecalcProp@@AEAAXXZ.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1402C55A8 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qds @ 0x1402C79EC (WPP_RECORDER_AND_TRACE_SF_qds.c)
 */

char __fastcall CRecalcProp::s_xxxOnWindowRestoreFromMinimized(struct tagWND *a1, __int64 a2)
{
  char v2; // bl
  struct CRecalcProp *RecalcProperty; // rax
  __int64 v5; // rdx
  CRecalcProp *v6; // rbp
  char v7; // si
  bool v8; // r14
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  bool v13; // bp
  bool v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  HWND v19; // rcx
  _DWORD v20[2]; // [rsp+60h] [rbp-38h] BYREF
  char v21; // [rsp+68h] [rbp-30h]
  int v22; // [rsp+6Ch] [rbp-2Ch]
  int v23; // [rsp+70h] [rbp-28h]
  __int64 v24; // [rsp+78h] [rbp-20h]
  int v25; // [rsp+80h] [rbp-18h]

  v2 = a2;
  RecalcProperty = CRecalcProp::GetRecalcProperty(a1, a2);
  v6 = RecalcProperty;
  if ( !RecalcProperty )
    return 0;
  v7 = 1;
  if ( *((_DWORD *)RecalcProperty + 6) != 1 || (*((_DWORD *)a1 + 95) & 0x10) != 0 || (*((_DWORD *)a1 + 96) & 0x10) != 0 )
    return 0;
  if ( v2 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v7 = 0;
    }
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)(*((_QWORD *)RecalcProperty + 4) + 16LL), v5);
      LOBYTE(v10) = v8;
      LOBYTE(v11) = v7;
      WPP_RECORDER_AND_TRACE_SF_qds(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v11,
        v10,
        *(_QWORD *)(UserSessionState + 69416),
        4);
    }
    CRecalcProp::SetPendingStateToProcessed(v6);
    return 0;
  }
  v13 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v15 = *(_QWORD *)a1;
    v16 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
    LOBYTE(v17) = v14;
    LOBYTE(v18) = v13;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v18,
      v17,
      *(_QWORD *)(v16 + 69416),
      4,
      7,
      87,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v15);
  }
  v20[0] = 0;
  v20[1] = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0LL;
  v19 = *(HWND *)a1;
  v21 = 0;
  v25 = 3;
  CRecalcProp::s_xxxProcessTopologyChange(v19, (struct CRecalcContext *)v20);
  return 1;
}

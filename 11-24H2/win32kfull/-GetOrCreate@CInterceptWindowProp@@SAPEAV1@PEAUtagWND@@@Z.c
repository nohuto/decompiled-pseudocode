/*
 * XREFs of ?GetOrCreate@CInterceptWindowProp@@SAPEAV1@PEAUtagWND@@@Z @ 0x1402C9BEC
 * Callers:
 *     ?ClearPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@@Z @ 0x1402C91A0 (-ClearPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@@Z.c)
 *     ?ReserveSystemOperationDataSlot@WindowActions@@YA_NPEAUtagWND@@@Z @ 0x1402CA564 (-ReserveSystemOperationDataSlot@WindowActions@@YA_NPEAUtagWND@@@Z.c)
 *     ?RestorePendingDisplayChangeInfo@CInterceptWindowProp@@SA_NPEAUtagWND@@_NIPEAVCWindowAction@AdvancedWindowPos@@PEAW4ApplyWindowActionError@4@@Z @ 0x1402CAB58 (-RestorePendingDisplayChangeInfo@CInterceptWindowProp@@SA_NPEAUtagWND@@_NIPEAVCWindowAction@Adva.c)
 *     ?RestorePendingDisplayChangeInfoOld@CInterceptWindowProp@@SAXPEAUtagWND@@PEAUWindowAction@AdvancedWindowPos@@@Z @ 0x1402CAD28 (-RestorePendingDisplayChangeInfoOld@CInterceptWindowProp@@SAXPEAUtagWND@@PEAUWindowAction@Advanc.c)
 *     ?SaveSystemOperationData@@YA_NPEAUtagWND@@AEBUSystemOperationData@AdvancedWindowPos@@@Z @ 0x1402CAEEC (-SaveSystemOperationData@@YA_NPEAUtagWND@@AEBUSystemOperationData@AdvancedWindowPos@@@Z.c)
 *     ?SetPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@PEBUWindowAction@AdvancedWindowPos@@@Z @ 0x1402CB318 (-SetPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@PEBUWindowAction@AdvancedWindo.c)
 *     ?SetPendingWorkAreaMove@CInterceptWindowProp@@SAXPEAUtagWND@@@Z @ 0x1402CB394 (-SetPendingWorkAreaMove@CInterceptWindowProp@@SAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1400312D0 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??$CreateWindowProp@VCInterceptWindowProp@@@CWindowProp@@SAJPEAPEAVCInterceptWindowProp@@@Z @ 0x1402C8EDC (--$CreateWindowProp@VCInterceptWindowProp@@@CWindowProp@@SAJPEAPEAVCInterceptWindowProp@@@Z.c)
 *     ??$GetProp@VCInterceptWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInterceptWindowProp@@@Z @ 0x1402C8F48 (--$GetProp@VCInterceptWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInterceptWindowProp@@@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

struct CInterceptWindowProp *__fastcall CInterceptWindowProp::GetOrCreate(struct tagWND *a1)
{
  int v2; // eax
  char v3; // si
  unsigned int *v4; // rcx
  bool v5; // di
  bool v6; // bl
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  CWindowProp *v11; // rsi
  bool v12; // di
  bool v13; // bp
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  CWindowProp *v18; // [rsp+68h] [rbp+10h] BYREF

  v18 = 0LL;
  if ( CWindowProp::GetProp<CInterceptWindowProp>((__int64)a1, (__int64 *)&v18) )
    return v18;
  v2 = CWindowProp::CreateWindowProp<CInterceptWindowProp>(&v18);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = &WPP_GLOBAL_Control;
    v5 = 0;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
    {
      v4 = (unsigned int *)*(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
      if ( ((unsigned __int8)v4 & 8) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u )
        v5 = 1;
    }
    v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(v4, *(_QWORD *)&WPP_GLOBAL_Control);
      LOBYTE(v8) = v6;
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v9,
        v8,
        *(_QWORD *)(UserSessionState + 69416),
        2,
        4,
        16,
        (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
        v3);
    }
    return 0LL;
  }
  v11 = v18;
  if ( !(unsigned int)CWindowProp::SetProp(v18, (unsigned __int64)a1) )
  {
    v12 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v14 = *(_QWORD *)a1;
      v15 = W32GetUserSessionState(&WPP_GLOBAL_Control, *(_QWORD *)&WPP_GLOBAL_Control);
      LOBYTE(v16) = v13;
      LOBYTE(v17) = v12;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v17,
        v16,
        *(_QWORD *)(v15 + 69416),
        2,
        4,
        17,
        (__int64)&WPP_9fb880626b093ada35a87c290f7fa346_Traceguids,
        v14);
    }
    (**(void (__fastcall ***)(CWindowProp *))v11)(v11);
    return 0LL;
  }
  return v11;
}

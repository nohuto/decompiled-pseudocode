/*
 * XREFs of ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@KAXAEBU_InputHitTestResult@@@Z @ 0x14011FEC8
 * Callers:
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x14005FAA0 (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 * Callees:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z @ 0x1400470F0 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUHWND__@@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14004A450 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void __fastcall CSpatialProcessor::SatisfyNonPointerInputSinkInfoRequest(const struct _InputHitTestResult *a1)
{
  void *v2; // rcx
  bool v3; // di
  bool v4; // bl
  __int64 v5; // rax
  int v6; // r8d
  int v7; // edx
  char v8; // di
  CTouchProcessor *v9; // rcx
  bool v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // edx
  int v14; // r8d
  __int64 v15; // rax
  _QWORD *v16; // r12
  __int64 v17; // rbx
  int v18; // edx
  char v19; // r15
  bool v20; // bp
  bool v21; // r14
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  bool v25; // bp
  __int64 v26; // rbx
  __int64 UserSessionState; // rax
  int v28; // r8d
  int v29; // edx
  __int64 v30; // [rsp+80h] [rbp+8h] BYREF
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  v2 = (void *)*((_QWORD *)a1 + 1);
  if ( v2 )
  {
    Object = 0LL;
    v8 = 1;
    if ( (int)CompositionInputObject::ResolveHandle(v2, 1u, 1, (struct CompositionInputObject **)&Object) < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v8 = 0;
      }
      v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = *((_QWORD *)a1 + 1);
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v28) = v25;
        LOBYTE(v29) = v8;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v29,
          v28,
          *(_QWORD *)(UserSessionState + 69400),
          3,
          2,
          22,
          (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
          v26);
      }
    }
    else
    {
      v9 = WPP_GLOBAL_Control;
      v10 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      LOBYTE(v30) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = *((_QWORD *)a1 + 1);
        v12 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v13) = v10;
        LOBYTE(v14) = v30;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v13,
          v14,
          *(_QWORD *)(v12 + 69400),
          4,
          2,
          20,
          (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
          v11);
      }
      v15 = W32GetUserSessionState(v9);
      v16 = Object;
      v17 = v15 + 19016;
      v18 = *(_DWORD *)(v15 + 19016);
      if ( (v18 & 1) != 0 )
        *(_QWORD *)(v15 + 19036) = *((_QWORD *)Object + 2);
      if ( (v18 & 4) != 0 )
      {
        *(_OWORD *)(v15 + 19056) = *((_OWORD *)a1 + 1);
        *(_OWORD *)(v15 + 19072) = *((_OWORD *)a1 + 2);
        *(_OWORD *)(v15 + 19088) = *((_OWORD *)a1 + 3);
        *(_OWORD *)(v15 + 19104) = *((_OWORD *)a1 + 4);
      }
      if ( (v18 & 8) != 0 )
        *(_DWORD *)(v15 + 19120) = *((_DWORD *)a1 + 22);
      if ( (v18 & 2) != 0 && *(_DWORD *)(v15 + 19028) == 6 )
      {
        v30 = 0LL;
        CompositionInputObject::GetWindowForInputType(v16, 5, &v30);
        v19 = v30;
        if ( v30 )
        {
          *(_QWORD *)(v17 + 32) = v30;
          v20 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v22 = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v23) = v21;
            LOBYTE(v24) = v20;
            WPP_RECORDER_AND_TRACE_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v24,
              v23,
              *(_QWORD *)(v22 + 69400),
              4,
              2,
              21,
              (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
              v19);
          }
        }
      }
      ObfDereferenceObject(v16);
      *(_DWORD *)(v17 + 16) = 1;
    }
  }
  else
  {
    v3 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v6) = v4;
      LOBYTE(v7) = v3;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v7,
        v6,
        *(_QWORD *)(v5 + 69400),
        3,
        2,
        23,
        (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids);
    }
  }
}

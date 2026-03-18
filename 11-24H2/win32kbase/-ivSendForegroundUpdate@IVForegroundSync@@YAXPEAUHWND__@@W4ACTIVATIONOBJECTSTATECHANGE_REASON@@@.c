/*
 * XREFs of ?ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x1402182E0
 * Callers:
 *     ?NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJECT_NOTIFICATION_ACTION@@U_tagActivationObjectNotificationForegroundData@@@Z @ 0x1400E1514 (-NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJE.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddd @ 0x1400D0CB0 (WPP_RECORDER_AND_TRACE_SF_ddd.c)
 *     ValidateHbwnd @ 0x14011F5D0 (ValidateHbwnd.c)
 *     IVForegroundSync::_anonymous_namespace_::ivBroadcastSetNullForeground @ 0x140217FD4 (IVForegroundSync--_anonymous_namespace_--ivBroadcastSetNullForeground.c)
 *     IVForegroundSync::_anonymous_namespace_::ivSyncForegroundToContainer @ 0x140218714 (IVForegroundSync--_anonymous_namespace_--ivSyncForegroundToContainer.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x14021B14C (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

void __fastcall IVForegroundSync::ivSendForegroundUpdate(__int64 a1, int a2)
{
  bool v4; // si
  bool v5; // bl
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  bool v9; // bl
  bool v10; // di
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  const struct CONTAINER_ID *v14; // rdx
  int v15; // ecx
  __int64 v16; // rax
  struct CONTAINER_ID *v17; // r13
  int v18; // ebx
  CTouchProcessor *v19; // rcx
  char v20; // si
  bool v21; // al
  int v22; // ebx
  int v23; // edi
  __int64 v24; // rax
  bool v25; // di
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  bool v29; // si
  bool v30; // di
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  bool v34; // si
  bool v35; // di
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  int v39; // [rsp+50h] [rbp-58h]
  int v40; // [rsp+60h] [rbp-48h]
  char v41; // [rsp+C0h] [rbp+18h]
  char v42; // [rsp+C8h] [rbp+20h]

  if ( !CIVChannel::ContainerConnected(3u) )
  {
    v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v7) = v5;
      LOBYTE(v8) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v7,
        *(_QWORD *)(UserSessionState + 69400),
        4,
        13,
        10,
        (__int64)&WPP_b62f9cf1c4903e8cd4543b7f28a8c611_Traceguids);
    }
    return;
  }
  if ( !a1 )
  {
    v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(v11 + 69400),
        4,
        13,
        11,
        (__int64)&WPP_b62f9cf1c4903e8cd4543b7f28a8c611_Traceguids);
    }
    v14 = 0LL;
    v15 = 1;
LABEL_47:
    IVForegroundSync::_anonymous_namespace_::ivBroadcastSetNullForeground(v15, v14);
    return;
  }
  v16 = ValidateHbwnd(a1);
  if ( v16 )
  {
    v17 = *(struct CONTAINER_ID **)(v16 + 136);
    v18 = 3 - (a2 != 0);
    v40 = v18;
    if ( v17 )
    {
      v19 = WPP_GLOBAL_Control;
      v20 = 1;
      v21 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v41 = v21;
      v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = *((__int16 *)v17 + 1);
        v23 = *(__int16 *)v17;
        LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        v24 = W32GetUserSessionState(v19);
        v39 = v22;
        v18 = v40;
        WPP_RECORDER_AND_TRACE_SF_ddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v41,
          v42,
          *(_QWORD *)(v24 + 69400),
          4u,
          0xDu,
          0xCu,
          (__int64)&WPP_b62f9cf1c4903e8cd4543b7f28a8c611_Traceguids,
          v40,
          v23,
          v39);
      }
      IVForegroundSync::_anonymous_namespace_::ivSyncForegroundToContainer(v17);
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v20 = 0;
      }
      v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v27) = v25;
        LOBYTE(v28) = v20;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v28,
          v27,
          *(_QWORD *)(v26 + 69400),
          4,
          13,
          13,
          (__int64)&WPP_b62f9cf1c4903e8cd4543b7f28a8c611_Traceguids,
          v18);
      }
    }
    else
    {
      v29 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v31 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v32) = v30;
        LOBYTE(v33) = v29;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v33,
          v32,
          *(_QWORD *)(v31 + 69400),
          4,
          13,
          14,
          (__int64)&WPP_b62f9cf1c4903e8cd4543b7f28a8c611_Traceguids);
      }
      v17 = 0LL;
    }
    v14 = v17;
    v15 = v18;
    goto LABEL_47;
  }
  v34 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v36 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v37) = v35;
    LOBYTE(v38) = v34;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v38,
      v37,
      *(_QWORD *)(v36 + 69400),
      4,
      13,
      15,
      (__int64)&WPP_b62f9cf1c4903e8cd4543b7f28a8c611_Traceguids,
      a1);
  }
}

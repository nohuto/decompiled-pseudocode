/*
 * XREFs of ?ivReceiveForegroundUpdate@IVForegroundSync@@YAXPEBU_IVForegroundPacket@@@Z @ 0x140218114
 * Callers:
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x140217380 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1401366D8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x140192280 (ApiSetEditionInternalSetCursorPos.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall IVForegroundSync::ivReceiveForegroundUpdate(
        IVForegroundSync *this,
        const struct _IVForegroundPacket *a2)
{
  CTouchProcessor *v3; // rdx
  char v4; // bp
  char v5; // r14
  int v6; // ebx
  __int64 v7; // rdi
  __int64 UserSessionState; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  char v11; // di
  char v12; // r14
  __int64 v13; // rax
  __int64 v14; // rbx
  void (__fastcall *v15)(__int64); // rax
  __int64 v16; // [rsp+40h] [rbp-38h]
  __int64 v17; // [rsp+48h] [rbp-30h]

  v3 = WPP_GLOBAL_Control;
  v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = *((_DWORD *)this + 2);
    v7 = *(_QWORD *)this;
    UserSessionState = W32GetUserSessionState(this);
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v4,
      v5,
      *(_QWORD *)(UserSessionState + 69400),
      4u,
      0xDu,
      0x11u,
      (__int64)&WPP_b62f9cf1c4903e8cd4543b7f28a8c611_Traceguids,
      v7,
      v6);
  }
  v9 = *(_QWORD *)((char *)this + 12);
  v10 = 4294935296LL;
  if ( v9 != 0xFFFF8300FFFF8300uLL )
  {
    v11 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LODWORD(v17) = HIDWORD(v9);
      LODWORD(v16) = v9;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v12,
        *(_QWORD *)(v13 + 69400),
        4u,
        0xDu,
        0x12u,
        (__int64)&WPP_b62f9cf1c4903e8cd4543b7f28a8c611_Traceguids,
        v16,
        v17);
    }
    ApiSetEditionInternalSetCursorPos((unsigned int)v9, HIDWORD(v9), 2u);
  }
  v14 = 0LL;
  if ( *((_DWORD *)this + 2) != 1 )
    v14 = *(_QWORD *)this;
  v15 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v10, v3) + 48) + 5240LL);
  if ( v15 )
    v15(v14);
}

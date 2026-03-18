/*
 * XREFs of ?JITThaw@tagPROCESSINFO@@AEAA_NXZ @ 0x1401A3374
 * Callers:
 *     ?SyncAndTestFreeze@tagPROCESSINFO@@QEAA_NXZ @ 0x1401A3980 (-SyncAndTestFreeze@tagPROCESSINFO@@QEAA_NXZ.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140042D50 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qD @ 0x140141E88 (WPP_RECORDER_AND_TRACE_SF_qD.c)
 *     ?Thaw@tagPROCESSINFO@@AEAAXXZ @ 0x1401A39F8 (-Thaw@tagPROCESSINFO@@AEAAXXZ.c)
 */

char __fastcall tagPROCESSINFO::JITThaw(tagPROCESSINFO *this)
{
  char v2; // di
  char v3; // si
  char v4; // r14
  __int64 UserSessionState; // rax
  bool v7; // bl
  __int64 v8; // rax
  int v9; // r8d
  int v10; // edx
  int v11; // [rsp+20h] [rbp-48h]

  v2 = 1;
  v3 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(this);
    WPP_RECORDER_AND_TRACE_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v3,
      v4,
      *(_QWORD *)(UserSessionState + 69400),
      v11,
      0xEu,
      0x22u,
      (__int64)&WPP_ab198495905d31ffcdd691cf04187f1c_Traceguids);
  }
  if ( IS_USERCRIT_OWNED_EXCLUSIVE() )
  {
    tagPROCESSINFO::Thaw(this);
    return 1;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v2 = 0;
    }
    v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v9) = v7;
      LOBYTE(v10) = v2;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v9,
        *(_QWORD *)(v8 + 69400),
        4,
        14,
        35,
        (__int64)&WPP_ab198495905d31ffcdd691cf04187f1c_Traceguids);
    }
    return 0;
  }
}

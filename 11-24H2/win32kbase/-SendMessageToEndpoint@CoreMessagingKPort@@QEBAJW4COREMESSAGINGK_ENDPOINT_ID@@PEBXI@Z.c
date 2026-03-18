/*
 * XREFs of ?SendMessageToEndpoint@CoreMessagingKPort@@QEBAJW4COREMESSAGINGK_ENDPOINT_ID@@PEBXI@Z @ 0x1401A80B4
 * Callers:
 *     W32ExecuteUsingSessionGlobal__lambda_13a60f6c58f1bec3f4c8886e1ca56822___ @ 0x1401A5EEC (W32ExecuteUsingSessionGlobal__lambda_13a60f6c58f1bec3f4c8886e1ca56822___.c)
 * Callees:
 *     CoreMsgSend @ 0x140049098 (CoreMsgSend.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

__int64 __fastcall CoreMessagingKPort::SendMessageToEndpoint(__int64 a1, __int64 a2, const void *a3)
{
  __int64 v3; // rbx
  void *v6; // rsi
  bool v7; // di
  bool v8; // si
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  NTSTATUS v12; // edi
  char v14; // dl
  unsigned int v15; // ebx
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  v3 = a1 + 8;
  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)(a1 + 8), 0);
  v6 = *(void **)(a1 + 16);
  if ( !v6 )
  {
    v7 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v10) = v8;
      LOBYTE(v11) = v7;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v10,
        *(_QWORD *)(UserSessionState + 69400),
        4,
        3,
        10,
        (__int64)&WPP_dcb43fac889439a026fbb51f02dc5fc0_Traceguids,
        0);
    }
    v12 = -2147020579;
    goto LABEL_12;
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(v6, 0, 0LL, 0, &Object, 0LL);
  if ( v12 < 0 )
  {
LABEL_12:
    ExReleasePushLockSharedEx(v3, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v12;
  }
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  v15 = CoreMsgSend(v6, v14, a3, 0x18u);
  ObfDereferenceObject(Object);
  return v15;
}

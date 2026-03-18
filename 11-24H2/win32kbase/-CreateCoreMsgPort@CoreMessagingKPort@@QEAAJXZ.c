/*
 * XREFs of ?CreateCoreMsgPort@CoreMessagingKPort@@QEAAJXZ @ 0x1401A7CA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     CoreMsgCreatePort @ 0x1400FC1D4 (CoreMsgCreatePort.c)
 */

__int64 __fastcall CoreMessagingKPort::CreateCoreMsgPort(void **this)
{
  struct W32_PUSH_LOCK *v1; // rbx
  char v4; // di
  int Port; // esi
  char v6; // cl
  bool v7; // bp
  __int64 v8; // rax
  int v9; // r8d
  int v10; // edx
  bool v11; // bl
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  v1 = (struct W32_PUSH_LOCK *)(this + 1);
  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)(this + 1), 0);
  if ( *this )
  {
    ExReleasePushLockSharedEx(v1, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    ExReleasePushLockSharedEx(v1, 0LL);
    KeLeaveCriticalRegion();
    P = 0LL;
    v4 = 1;
    Port = SeConvertStringSecurityDescriptorToSecurityDescriptor(
             L"D:(A;;GA;;;SY)(A;;0x001F0000;;;WD)(A;;0x001F0000;;;AC)",
             1LL,
             &P);
    if ( Port < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v4 = 0;
      }
      v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v13) = v11;
        LOBYTE(v14) = v4;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v14,
          v13,
          *(_QWORD *)(UserSessionState + 69400),
          2,
          3,
          12,
          (__int64)&WPP_dcb43fac889439a026fbb51f02dc5fc0_Traceguids,
          Port);
      }
    }
    else
    {
      W32AcquirePushLockExclusiveEx(v1, 0);
      Port = CoreMsgCreatePort(v6, P, L"Kernel\\SystemCoreMessagingPort", this);
      if ( Port < 0 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v4 = 0;
        }
        v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v8 = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v9) = v7;
          LOBYTE(v10) = v4;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v10,
            v9,
            *(_QWORD *)(v8 + 69400),
            2,
            3,
            11,
            (__int64)&WPP_dcb43fac889439a026fbb51f02dc5fc0_Traceguids,
            Port);
        }
      }
      W32ReleasePushLockExclusiveEx(v1, 0LL);
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    return (unsigned int)Port;
  }
}

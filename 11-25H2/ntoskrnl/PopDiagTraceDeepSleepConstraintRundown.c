/*
 * XREFs of PopDiagTraceDeepSleepConstraintRundown @ 0x1404B1AA4
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140A32540 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void PopDiagTraceDeepSleepConstraintRundown()
{
  unsigned __int16 v0; // bx
  KIRQL v1; // al
  unsigned int v2; // r8d
  unsigned __int16 v3; // dx
  KIRQL v4; // di
  ULONG UserDataCount; // r9d
  bool v6; // zf
  unsigned int v7; // ecx
  __int64 v8; // rcx
  _DWORD *v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned __int16 v12; // [rsp+40h] [rbp-118h] BYREF
  _DWORD v13[14]; // [rsp+48h] [rbp-110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-D8h] BYREF
  _QWORD v15[22]; // [rsp+90h] [rbp-C8h]

  v0 = 0;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_DEEP_SLEEP_CONSTRAINT_RUNDOWN) )
  {
    v1 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
    v2 = PopDeepSleepDisengageReasonMask;
    v3 = __popcnt((unsigned int)PopDeepSleepDisengageReasonMask);
    v4 = v1;
    UserDataCount = v3 + 1;
    v12 = v3;
    v6 = !_BitScanForward(&v7, PopDeepSleepDisengageReasonMask);
    *(_QWORD *)&UserData.Size = 2LL;
    v13[0] = v7;
    UserData.Ptr = (ULONGLONG)&v12;
    if ( !v6 )
    {
      v8 = 0LL;
      v9 = v13;
      do
      {
        v10 = 2 * v8;
        ++v0;
        v2 &= v2 - 1;
        v6 = !_BitScanForward(&v11, v2);
        v15[v10] = v9;
        v15[v10 + 1] = 4LL;
        v8 = v0;
        v9 = &v13[v0];
        *v9 = v11;
      }
      while ( !v6 );
    }
    EtwWriteEx(PopDiagHandle, &POP_ETW_DEEP_SLEEP_CONSTRAINT_RUNDOWN, 0LL, 0, 0LL, 0LL, UserDataCount, &UserData);
    KeReleaseSpinLock(&PopDeepSleepDisengageReasonLock, v4);
  }
}

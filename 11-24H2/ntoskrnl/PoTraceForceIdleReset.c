/*
 * XREFs of PoTraceForceIdleReset @ 0x1405D4358
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14033B0A0 (KiCallInterruptServiceRoutine.c)
 *     KiResetForceIdle @ 0x14040C2A4 (KiResetForceIdle.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall PoTraceForceIdleReset(int a1)
{
  int v1; // r8d
  int v2; // [rsp+40h] [rbp-19h] BYREF
  __int64 v3; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  GUID v5; // [rsp+60h] [rbp+7h] BYREF
  int *v6; // [rsp+80h] [rbp+27h]
  int v7; // [rsp+88h] [rbp+2Fh]
  int v8; // [rsp+8Ch] [rbp+33h]
  __int64 *v9; // [rsp+90h] [rbp+37h]
  int v10; // [rsp+98h] [rbp+3Fh]
  int v11; // [rsp+9Ch] [rbp+43h]
  int v12; // [rsp+C0h] [rbp+67h] BYREF

  v12 = a1;
  if ( (unsigned int)dword_140E076F0 > 5 && tlgKeywordOn((__int64)&dword_140E076F0, 0x400000000000LL) )
  {
    v8 = 0;
    v11 = 0;
    v6 = &v2;
    v2 = v1;
    v9 = &v3;
    v7 = 4;
    v3 = 0x1000000LL;
    v10 = 8;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E076F0,
      (unsigned __int8 *)byte_140049901,
      0LL,
      0LL,
      4u,
      (PEVENT_DATA_DESCRIPTOR)&v5);
  }
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_FORCEIDLE_RESET) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v12;
      UserData.Size = 4;
      EtwWriteEx(PopDiagHandle, &POP_ETW_FORCEIDLE_RESET, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}

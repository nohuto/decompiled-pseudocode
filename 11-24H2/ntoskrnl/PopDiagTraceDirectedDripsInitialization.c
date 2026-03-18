/*
 * XREFs of PopDiagTraceDirectedDripsInitialization @ 0x140755ED0
 * Callers:
 *     PopDirectedDripsInitializePhase3 @ 0x140C2E174 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceDirectedDripsInitialization(int a1)
{
  int v1; // r8d
  int v2; // [rsp+30h] [rbp-9h] BYREF
  int v3; // [rsp+34h] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-1h] BYREF
  int *v5; // [rsp+48h] [rbp+Fh]
  int v6; // [rsp+50h] [rbp+17h]
  int v7; // [rsp+54h] [rbp+1Bh]
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+58h] [rbp+1Fh] BYREF
  int *v9; // [rsp+78h] [rbp+3Fh]
  int v10; // [rsp+80h] [rbp+47h]
  int v11; // [rsp+84h] [rbp+4Bh]
  int v12; // [rsp+A0h] [rbp+67h] BYREF

  v12 = a1;
  if ( PopTriggerDiagHandleRegistered
    && (unsigned int)dword_140E076F0 > 5
    && tlgKeywordOn((__int64)&dword_140E076F0, 0x400000000000LL) )
  {
    v11 = 0;
    v9 = &v2;
    v2 = v1;
    v10 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E076F0, (unsigned __int8 *)&dword_140049714, 0LL, 0LL, 3u, &v8);
  }
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_INITIALIZATION) )
    {
      v3 = 0;
      UserData.Reserved = 0;
      v7 = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      v5 = &v12;
      UserData.Size = 4;
      v6 = 4;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_ENGAGED, 0LL, 2u, &UserData);
    }
  }
}

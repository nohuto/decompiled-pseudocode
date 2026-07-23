/*
 * XREFs of PopDiagTraceAdaptiveBootOverride @ 0x140C31280
 * Callers:
 *     PopAdaptiveInitializeBootContext @ 0x140C3570C (PopAdaptiveInitializeBootContext.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceAdaptiveBootOverride(int a1, char a2)
{
  char v3; // [rsp+40h] [rbp-49h] BYREF
  BOOL v4; // [rsp+44h] [rbp-45h] BYREF
  int v5; // [rsp+48h] [rbp-41h] BYREF
  __int64 v6; // [rsp+50h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-31h] BYREF
  BOOL *v8; // [rsp+68h] [rbp-21h]
  int v9; // [rsp+70h] [rbp-19h]
  int v10; // [rsp+74h] [rbp-15h]
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+80h] [rbp-9h] BYREF
  int *v12; // [rsp+A0h] [rbp+17h]
  int v13; // [rsp+A8h] [rbp+1Fh]
  int v14; // [rsp+ACh] [rbp+23h]
  char *v15; // [rsp+B0h] [rbp+27h]
  int v16; // [rsp+B8h] [rbp+2Fh]
  int v17; // [rsp+BCh] [rbp+33h]
  __int64 *v18; // [rsp+C0h] [rbp+37h]
  int v19; // [rsp+C8h] [rbp+3Fh]
  int v20; // [rsp+CCh] [rbp+43h]
  int v21; // [rsp+F0h] [rbp+67h] BYREF

  v21 = a1;
  v4 = 0;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ADAPTIVE_OVERRIDE_BOOT_STATE) )
  {
    UserData.Size = 4;
    v9 = 4;
    UserData.Reserved = 0;
    v10 = 0;
    v4 = a2 != 0;
    UserData.Ptr = (ULONGLONG)&v21;
    v8 = &v4;
    EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_ADAPTIVE_OVERRIDE_BOOT_STATE, 0LL, 0, 0LL, 0LL, 2u, &UserData);
  }
  if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
  {
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v5 = v21;
    v12 = &v5;
    v15 = &v3;
    v18 = &v6;
    v13 = 4;
    v3 = a2;
    v16 = 1;
    v6 = 0x1000000LL;
    v19 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)byte_14004BCFB, 0LL, 0LL, 5u, &v11);
  }
}

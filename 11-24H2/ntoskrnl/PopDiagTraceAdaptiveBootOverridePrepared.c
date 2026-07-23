/*
 * XREFs of PopDiagTraceAdaptiveBootOverridePrepared @ 0x1407535BC
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x1405D8174 (PopAdaptivePersistSystemInitatedRebootState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceAdaptiveBootOverridePrepared(int a1, char a2, int a3)
{
  _UNKNOWN **v3; // rax
  char v6; // [rsp+38h] [rbp-69h] BYREF
  BOOL v7; // [rsp+3Ch] [rbp-65h] BYREF
  int v8; // [rsp+40h] [rbp-61h] BYREF
  int v9; // [rsp+44h] [rbp-5Dh] BYREF
  __int64 v10; // [rsp+48h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-51h] BYREF
  BOOL *v12; // [rsp+60h] [rbp-41h]
  int v13; // [rsp+68h] [rbp-39h]
  int v14; // [rsp+6Ch] [rbp-35h]
  int *v15; // [rsp+70h] [rbp-31h]
  int v16; // [rsp+78h] [rbp-29h]
  int v17; // [rsp+7Ch] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+88h] [rbp-19h] BYREF
  int *v19; // [rsp+A8h] [rbp+7h]
  int v20; // [rsp+B0h] [rbp+Fh]
  int v21; // [rsp+B4h] [rbp+13h]
  char *v22; // [rsp+B8h] [rbp+17h]
  int v23; // [rsp+C0h] [rbp+1Fh]
  int v24; // [rsp+C4h] [rbp+23h]
  int *v25; // [rsp+C8h] [rbp+27h]
  int v26; // [rsp+D0h] [rbp+2Fh]
  int v27; // [rsp+D4h] [rbp+33h]
  __int64 *v28; // [rsp+D8h] [rbp+37h]
  int v29; // [rsp+E0h] [rbp+3Fh]
  int v30; // [rsp+E4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+5Fh] BYREF
  int v32; // [rsp+108h] [rbp+67h] BYREF
  int v33; // [rsp+118h] [rbp+77h] BYREF

  v3 = &retaddr;
  v33 = a3;
  v32 = a1;
  v7 = 0;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_INITIATED_REBOOT_PREPARE);
    if ( (_BYTE)v3 )
    {
      UserData.Size = 4;
      v13 = 4;
      v16 = 4;
      UserData.Reserved = 0;
      v14 = 0;
      v17 = 0;
      v7 = a2 != 0;
      UserData.Ptr = (ULONGLONG)&v32;
      v12 = &v7;
      v15 = &v33;
      LOBYTE(v3) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_INITIATED_REBOOT_PREPARE, 0LL, 3u, &UserData);
    }
  }
  if ( (unsigned int)dword_140E07680 > 5 )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL);
    if ( (_BYTE)v3 )
    {
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v8 = v32;
      v19 = &v8;
      v22 = &v6;
      v9 = v33;
      v25 = &v9;
      v28 = &v10;
      v20 = 4;
      v6 = a2;
      v23 = 1;
      v26 = 4;
      v10 = 0x1000000LL;
      v29 = 8;
      LOBYTE(v3) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140E07680,
                     (unsigned __int8 *)byte_14004BC41,
                     0LL,
                     0LL,
                     6u,
                     &v18);
    }
  }
  return (char)v3;
}

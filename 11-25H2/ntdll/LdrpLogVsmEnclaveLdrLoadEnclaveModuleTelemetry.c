/*
 * XREFs of LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x1801202D8
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800D8840 (LdrLoadEnclaveModule.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180003870 (RtlRunOnceExecuteOnce.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18000D714 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18010FC38 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

char __fastcall LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry(int a1, char a2)
{
  struct _PEB *v2; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  char v9; // [rsp+30h] [rbp-19h] BYREF
  int v10; // [rsp+34h] [rbp-15h] BYREF
  _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-9h] BYREF
  const char *v12; // [rsp+60h] [rbp+17h]
  int v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+6Ch] [rbp+23h]
  int *v15; // [rsp+70h] [rbp+27h]
  int v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+7Ch] [rbp+33h]
  char *v18; // [rsp+80h] [rbp+37h]
  int v19; // [rsp+88h] [rbp+3Fh]
  int v20; // [rsp+8Ch] [rbp+43h]

  v2 = NtCurrentPeb();
  if ( v2->ProcessHeap )
  {
    LOBYTE(v2) = RtlRunOnceExecuteOnce(&VsmEnclaveTelemetryInitRunOnce, VsmEnclaveTelemetryInitOnce, 0LL, 0LL);
    if ( (unsigned int)dword_1801CE9B8 > 4 )
    {
      LOBYTE(v2) = tlgKeywordOn((__int64)&dword_1801CE9B8, 0x400000000000LL);
      if ( (_BYTE)v2 )
      {
        v14 = 0;
        v17 = 0;
        v20 = 0;
        v12 = "LdrLoadEnclaveModule";
        v15 = &v10;
        v18 = &v9;
        v13 = 21;
        v10 = a1;
        v16 = 4;
        v9 = a2;
        v19 = 1;
        LOBYTE(v2) = tlgWriteTransfer_EtwEventWriteTransfer(v5, (unsigned __int8 *)dword_1801A4795, v6, v7, 5u, &v11);
      }
    }
  }
  return (char)v2;
}

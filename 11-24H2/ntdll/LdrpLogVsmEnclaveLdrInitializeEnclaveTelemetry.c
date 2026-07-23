/*
 * XREFs of LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800D4218
 * Callers:
 *     LdrInitializeEnclave @ 0x1800D3F10 (LdrInitializeEnclave.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18002D050 (RtlRunOnceExecuteOnce.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800676B4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1801081C8 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

int __fastcall LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry(int a1)
{
  struct _PEB *v1; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v7; // [rsp+30h] [rbp-68h] BYREF
  _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-58h] BYREF
  const char *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  int *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  v1 = NtCurrentPeb();
  if ( v1->ProcessHeap )
  {
    LODWORD(v1) = RtlRunOnceExecuteOnce(&VsmEnclaveTelemetryInitRunOnce, VsmEnclaveTelemetryInitOnce, 0LL, 0LL);
    if ( (unsigned int)dword_1801CB9B8 > 4 )
    {
      LODWORD(v1) = tlgKeywordOn(&dword_1801CB9B8, 0x400000000000LL);
      if ( (_BYTE)v1 )
      {
        v11 = 0;
        v14 = 0;
        v9 = "LdrInitializeEnclave";
        v12 = &v7;
        v10 = 21;
        v7 = a1;
        v13 = v5;
        LODWORD(v1) = tlgWriteTransfer_EtwEventWriteTransfer(v3, (unsigned __int8 *)dword_1801A1F45, v4, v5, v5, &v8);
      }
    }
  }
  return (int)v1;
}

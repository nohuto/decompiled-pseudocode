/*
 * XREFs of LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800D8E48
 * Callers:
 *     LdrInitializeEnclave @ 0x1800D8B40 (LdrInitializeEnclave.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180003870 (RtlRunOnceExecuteOnce.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18000D714 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18010FC38 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

struct _PEB *__fastcall LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry(int a1)
{
  struct _PEB *result; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v7[32]; // [rsp+40h] [rbp-58h] BYREF
  const char *v8; // [rsp+60h] [rbp-38h]
  int v9; // [rsp+68h] [rbp-30h]
  int v10; // [rsp+6Ch] [rbp-2Ch]
  int *v11; // [rsp+70h] [rbp-28h]
  int v12; // [rsp+78h] [rbp-20h]
  int v13; // [rsp+7Ch] [rbp-1Ch]

  result = NtCurrentPeb();
  if ( result->ProcessHeap )
  {
    result = (struct _PEB *)RtlRunOnceExecuteOnce(
                              &VsmEnclaveTelemetryInitRunOnce,
                              (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))VsmEnclaveTelemetryInitOnce,
                              0LL,
                              0LL);
    if ( (unsigned int)dword_1801CE9B8 > 4 )
    {
      result = (struct _PEB *)tlgKeywordOn(&dword_1801CE9B8, 0x400000000000LL);
      if ( (_BYTE)result )
      {
        v10 = 0;
        v13 = 0;
        v8 = "LdrInitializeEnclave";
        v11 = &v6;
        v9 = 21;
        v6 = a1;
        v12 = v5;
        return (struct _PEB *)tlgWriteTransfer_EtwEventWriteTransfer(v3, byte_1801A4DED, v4, v5, v5, (__int64)v7);
      }
    }
  }
  return result;
}

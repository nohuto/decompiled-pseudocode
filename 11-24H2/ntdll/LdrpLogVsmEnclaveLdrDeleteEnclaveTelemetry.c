/*
 * XREFs of LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x180160874
 * Callers:
 *     LdrDeleteEnclave @ 0x180132C60 (LdrDeleteEnclave.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180051AD4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlRunOnceExecuteOnce @ 0x180098200 (RtlRunOnceExecuteOnce.c)
 *     _tlgKeywordOn @ 0x18010D208 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

char __fastcall LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry(int a1)
{
  struct _PEB *v1; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v7; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v8[32]; // [rsp+40h] [rbp-58h] BYREF
  const char *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  int *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  v1 = NtCurrentPeb();
  if ( v1->ProcessHeap )
  {
    LOBYTE(v1) = RtlRunOnceExecuteOnce(
                   &VsmEnclaveTelemetryInitRunOnce,
                   (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))VsmEnclaveTelemetryInitOnce,
                   0LL,
                   0LL);
    if ( (unsigned int)dword_1801CC9F0 > 4 )
    {
      LOBYTE(v1) = tlgKeywordOn((__int64)&dword_1801CC9F0, 0x400000000000LL);
      if ( (_BYTE)v1 )
      {
        v11 = 0;
        v14 = 0;
        v9 = "LdrDeleteEnclave";
        v12 = &v7;
        v10 = 17;
        v7 = a1;
        v13 = v5;
        LOBYTE(v1) = tlgWriteTransfer_EtwEventWriteTransfer(v3, byte_1801A2961, v4, v5, v5, (__int64)v8);
      }
    }
  }
  return (char)v1;
}

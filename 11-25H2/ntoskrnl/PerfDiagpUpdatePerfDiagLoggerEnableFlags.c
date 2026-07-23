/*
 * XREFs of PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14079167C
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140791390 (PerfDiagpProxyWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x1407912AC (PerfDiagpInitializeLoggerInfo.c)
 *     NtTraceControl @ 0x140895400 (NtTraceControl.c)
 *     RtlpQueryRegistryValues @ 0x1409B3FD0 (RtlpQueryRegistryValues.c)
 */

NTSTATUS __fastcall PerfDiagpUpdatePerfDiagLoggerEnableFlags(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  unsigned int v4; // ebx
  ULONG OutputBufferLength; // [rsp+20h] [rbp-79h]
  ULONG ReturnLength[4]; // [rsp+30h] [rbp-69h] BYREF
  int v7[4]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v8; // [rsp+50h] [rbp-49h]
  _OWORD *v9; // [rsp+58h] [rbp-41h]
  int v10; // [rsp+60h] [rbp-39h]
  _OWORD Src[3]; // [rsp+B0h] [rbp+17h] BYREF

  ReturnLength[0] = 0;
  memset(Src, 0, sizeof(Src));
  memset_0(v7, 0, 0x70uLL);
  v7[2] = 32;
  v8 = a2;
  v9 = Src;
  v10 = 3;
  LODWORD(Src[0]) = 48;
  result = RtlpQueryRegistryValues(
             2,
             (int)L"Diagnostics\\Performance\\BootCKCLSettings",
             (int)v7,
             0,
             OutputBufferLength,
             1);
  if ( result >= 0 )
  {
    if ( DWORD1(Src[0]) == 3 )
    {
      v4 = Src[0];
      if ( LODWORD(Src[0]) <= 0x28 )
      {
        memmove(&unk_140EFF4A8, (char *)Src + 8, LODWORD(Src[0]));
        PerfDiagpInitializeLoggerInfo(1, v4 >> 2);
        return NtTraceControl(
                 EtwUpdateLoggerCode,
                 &OutputBuffer,
                 OutputBuffer,
                 &OutputBuffer,
                 OutputBuffer,
                 ReturnLength);
      }
      else
      {
        return -1073741789;
      }
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}

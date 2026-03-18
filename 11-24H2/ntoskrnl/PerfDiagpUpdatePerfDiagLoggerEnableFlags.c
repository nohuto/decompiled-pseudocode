/*
 * XREFs of PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x1407A0A4C
 * Callers:
 *     PerfDiagpProxyWorker @ 0x1407A0750 (PerfDiagpProxyWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x1407A066C (PerfDiagpInitializeLoggerInfo.c)
 *     NtTraceControl @ 0x140834A80 (NtTraceControl.c)
 *     RtlpQueryRegistryValues @ 0x1409CC350 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall PerfDiagpUpdatePerfDiagLoggerEnableFlags(int a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  ULONG v6; // [rsp+20h] [rbp-79h]
  _DWORD v7[4]; // [rsp+30h] [rbp-69h] BYREF
  int v8[4]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v9; // [rsp+50h] [rbp-49h]
  _OWORD *v10; // [rsp+58h] [rbp-41h]
  int v11; // [rsp+60h] [rbp-39h]
  _OWORD Src[3]; // [rsp+B0h] [rbp+17h] BYREF

  v7[0] = 0;
  memset(Src, 0, sizeof(Src));
  memset_0(v8, 0, 0x70uLL);
  v8[2] = 32;
  v9 = a2;
  v10 = Src;
  v11 = 3;
  LODWORD(Src[0]) = 48;
  result = RtlpQueryRegistryValues(2, a1, (int)v8, 0, v6, 1);
  if ( (int)result >= 0 )
  {
    if ( DWORD1(Src[0]) == 3 )
    {
      v5 = Src[0];
      if ( LODWORD(Src[0]) <= 0x28 )
      {
        memmove(&unk_140EFF848, (char *)Src + 8, LODWORD(Src[0]));
        PerfDiagpInitializeLoggerInfo(1, v5 >> 2);
        return NtTraceControl(
                 4LL,
                 &dword_140EFF790,
                 (unsigned int)dword_140EFF790,
                 &dword_140EFF790,
                 dword_140EFF790,
                 v7);
      }
      else
      {
        return 3221225507LL;
      }
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}

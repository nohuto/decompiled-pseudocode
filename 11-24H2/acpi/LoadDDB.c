/*
 * XREFs of LoadDDB @ 0x14006B644
 * Callers:
 *     LoadFieldUnitDDB @ 0x14006B76C (LoadFieldUnitDDB.c)
 *     LoadMemDDB @ 0x14006B950 (LoadMemDDB.c)
 *     LoadTable @ 0x14006F600 (LoadTable.c)
 *     AMLILoadDDB @ 0x1400C8044 (AMLILoadDDB.c)
 * Callees:
 *     PushFrame @ 0x140009A30 (PushFrame.c)
 *     FreeContext @ 0x14000AF70 (FreeContext.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     RtlStringCchCopyNA @ 0x140025B80 (RtlStringCchCopyNA.c)
 */

__int64 __fastcall LoadDDB(char *Entry, const char *a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // esi
  __int64 v10; // rcx
  char pszSrc[24]; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)pszSrc = 0LL;
  if ( gdwfAMLIInit >= 0 && !strncmp(a2 + 28, "MSFT", 4uLL) && *((_DWORD *)a2 + 8) < 0x1000000u )
  {
    v8 = -1072431079;
    LogError(-1072431079);
    AcpiDiagTraceAmlError((__int64)Entry, -1072431079);
    *(_DWORD *)pszSrc = *(_DWORD *)a2;
    RtlStringCchCopyNA(byte_140088D78, 5uLL, pszSrc, 4uLL);
    PrintDebugMessage(0x50u, byte_140088D78, a2, 0LL, 0LL);
  }
  else
  {
    v8 = PushFrame(Entry, 1179927628, 0x40u, (__int64)ParseLoad, pszSrc);
    if ( !v8 )
    {
      v10 = *(_QWORD *)pszSrc;
      *(_QWORD *)(*(_QWORD *)pszSrc + 32LL) = a3;
      *(_QWORD *)(v10 + 48) = a4;
      *(_QWORD *)(v10 + 56) = a2;
      return v8;
    }
  }
  *((_QWORD *)Entry + 11) = 0LL;
  FreeContext(Entry);
  return v8;
}

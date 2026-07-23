/*
 * XREFs of EtwpCaptureString @ 0x1409D28F8
 * Callers:
 *     EtwpAcquireLoggerContext @ 0x140928E1C (EtwpAcquireLoggerContext.c)
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 *     EtwpFlushTrace @ 0x1409D2420 (EtwpFlushTrace.c)
 *     EtwpSetSoftRestartInformation @ 0x140A39DC4 (EtwpSetSoftRestartInformation.c)
 *     EtwpUpdateTrace @ 0x140ADA038 (EtwpUpdateTrace.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     RtlCreateUnicodeString @ 0x1409D2A00 (RtlCreateUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCaptureString(unsigned __int16 *a1, UNICODE_STRING *a2)
{
  unsigned int v4; // esi
  char PreviousMode; // bl
  WCHAR *Pool2; // rax
  WCHAR *v7; // rbx

  v4 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  RtlInitUnicodeString(a2, 0LL);
  if ( PreviousMode && *a1 && (*((_QWORD *)a1 + 1) & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL, *a1 + 2LL, 0x50777445u);
  v7 = Pool2;
  if ( !Pool2
    || (memmove(Pool2, *((const void **)a1 + 1), *a1),
        v7[(unsigned __int64)*a1 >> 1] = 0,
        !RtlCreateUnicodeString(a2, v7)) )
  {
    v4 = -1073741801;
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return v4;
}

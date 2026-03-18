/*
 * XREFs of EtwpCaptureString @ 0x140893884
 * Callers:
 *     EtwpUpdateTrace @ 0x140893BB4 (EtwpUpdateTrace.c)
 *     EtwpFlushTrace @ 0x140894628 (EtwpFlushTrace.c)
 *     EtwpAcquireLoggerContext @ 0x14093263C (EtwpAcquireLoggerContext.c)
 *     EtwpStartLogger @ 0x140A374DC (EtwpStartLogger.c)
 *     EtwpSetSoftRestartInformation @ 0x140A3FC08 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     RtlCreateUnicodeString @ 0x140893990 (RtlCreateUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL);
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

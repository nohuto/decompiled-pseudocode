/*
 * XREFs of EtwpCaptureString @ 0x140832F00
 * Callers:
 *     EtwpStartLogger @ 0x140831694 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x14083311C (EtwpUpdateTrace.c)
 *     EtwpFlushTrace @ 0x140833B94 (EtwpFlushTrace.c)
 *     EtwpAcquireLoggerContext @ 0x140926CDC (EtwpAcquireLoggerContext.c)
 *     EtwpSetSoftRestartInformation @ 0x140A44534 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     RtlCreateUnicodeString @ 0x140833010 (RtlCreateUnicodeString.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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

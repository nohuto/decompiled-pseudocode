/*
 * XREFs of PerfDiagpStartPerfDiagLogger @ 0x1407915A4
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140791390 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140436640 (RtlStringCbCopyW.c)
 *     RtlStringCbCatW @ 0x14044D218 (RtlStringCbCatW.c)
 *     EtwStartAutoLogger @ 0x14079EA28 (EtwStartAutoLogger.c)
 *     PerfDiagpIsTracingAllowed @ 0x140AB2F30 (PerfDiagpIsTracingAllowed.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PerfDiagpStartPerfDiagLogger(NTSTRSAFE_PCWSTR pszSrc)
{
  __int64 v1; // rax
  size_t v3; // rsi
  wchar_t *Pool2; // rax
  wchar_t *v5; // rdi
  unsigned int started; // ebx

  v1 = -1LL;
  do
    ++v1;
  while ( pszSrc[v1] );
  v3 = (unsigned int)(2 * v1 + 104);
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  v5 = Pool2;
  if ( Pool2 )
  {
    RtlStringCbCopyW(Pool2, v3, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\");
    RtlStringCbCatW(v5, v3, pszSrc);
    if ( (unsigned int)PerfDiagpIsTracingAllowed() )
    {
      wcscpy(&xmmword_140EFF3CC, L"PerfDiag Logger");
      started = EtwStartAutoLogger(&xmmword_140EFF3CC);
    }
    else
    {
      started = -1073741823;
    }
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return started;
}

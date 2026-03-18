/*
 * XREFs of PerfDiagpStartPerfDiagLogger @ 0x1407A0974
 * Callers:
 *     PerfDiagpProxyWorker @ 0x1407A0750 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140433420 (RtlStringCbCopyW.c)
 *     RtlStringCbCatW @ 0x14044CE48 (RtlStringCbCatW.c)
 *     EtwStartAutoLogger @ 0x1407ADDF8 (EtwStartAutoLogger.c)
 *     PerfDiagpIsTracingAllowed @ 0x140AB7A58 (PerfDiagpIsTracingAllowed.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
      wcscpy(&xmmword_140EFF76C, L"PerfDiag Logger");
      started = EtwStartAutoLogger(&xmmword_140EFF76C);
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

/*
 * XREFs of PerfDiagpStartPerfDiagLogger @ 0x1407A0A84
 * Callers:
 *     PerfDiagpProxyWorker @ 0x1407A0860 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140425B00 (RtlStringCbCopyW.c)
 *     RtlStringCbCatW @ 0x140443D48 (RtlStringCbCatW.c)
 *     EtwStartAutoLogger @ 0x1407AE248 (EtwStartAutoLogger.c)
 *     PerfDiagpIsTracingAllowed @ 0x140AB1E0C (PerfDiagpIsTracingAllowed.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PerfDiagpStartPerfDiagLogger(NTSTRSAFE_PCWSTR pszSrc)
{
  __int64 v1; // rax
  ULONG_PTR v3; // rsi
  wchar_t *Pool2; // rax
  wchar_t *v5; // rdi
  unsigned int started; // ebx

  v1 = -1LL;
  do
    ++v1;
  while ( pszSrc[v1] );
  v3 = (unsigned int)(2 * v1 + 104);
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v3, 0x64465250u);
  v5 = Pool2;
  if ( Pool2 )
  {
    RtlStringCbCopyW(Pool2, v3, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\");
    RtlStringCbCatW(v5, v3, pszSrc);
    if ( (unsigned int)PerfDiagpIsTracingAllowed() )
    {
      wcscpy(&xmmword_140EFFA4C, L"PerfDiag Logger");
      started = EtwStartAutoLogger(&xmmword_140EFFA4C);
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

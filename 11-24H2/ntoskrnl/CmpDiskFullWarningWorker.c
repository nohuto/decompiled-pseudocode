/*
 * XREFs of CmpDiskFullWarningWorker @ 0x1407D5A80
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseHardError @ 0x140A4E2E0 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpDiskFullWarningWorker(void *a1)
{
  int v2; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  ExFreePoolWithTag(a1, 0);
  return ExRaiseHardError(3221225599LL, 0LL, 0LL, 0LL, 1, &v2);
}

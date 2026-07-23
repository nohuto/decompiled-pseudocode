/*
 * XREFs of CmpQuotaWarningWorker @ 0x1407D2870
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseHardError @ 0x140A44F60 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpQuotaWarningWorker(void *a1)
{
  int v2; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  ExFreePoolWithTag(a1, 0);
  return ExRaiseHardError(3221226070LL, 0LL, 0LL, 0LL, 1, &v2);
}

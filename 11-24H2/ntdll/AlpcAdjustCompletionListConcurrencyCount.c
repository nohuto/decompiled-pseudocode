/*
 * XREFs of AlpcAdjustCompletionListConcurrencyCount @ 0x18010FF40
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcSetInformation @ 0x180162E60 (NtAlpcSetInformation.c)
 */

__int64 __fastcall AlpcAdjustCompletionListConcurrencyCount(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return NtAlpcSetInformation(a1, 8LL, &v3);
}

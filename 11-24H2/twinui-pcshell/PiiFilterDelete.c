/*
 * XREFs of PiiFilterDelete @ 0x1802CD4EC
 * Callers:
 *     ??1IsGameManager@@UEAA@XZ @ 0x18010AAE0 (--1IsGameManager@@UEAA@XZ.c)
 *     PiiFilterCreate @ 0x180136DFC (PiiFilterCreate.c)
 * Callees:
 *     ?Free@RtlNameValueArray@@QEAAXXZ @ 0x180136D10 (-Free@RtlNameValueArray@@QEAAXXZ.c)
 *     AslFree @ 0x180139254 (AslFree.c)
 */

BOOLEAN __fastcall PiiFilterDelete(__int64 a1)
{
  BOOLEAN result; // al

  if ( a1 )
  {
    RtlNameValueArray::Free((RtlNameValueArray *)a1);
    RtlNameValueArray::Free((RtlNameValueArray *)(a1 + 48));
    return AslFree(NtCurrentPeb()->ProcessHeap, (void *)a1);
  }
  return result;
}

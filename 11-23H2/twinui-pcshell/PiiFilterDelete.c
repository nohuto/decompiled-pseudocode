/*
 * XREFs of PiiFilterDelete @ 0x1800EDB2C
 * Callers:
 *     PiiFilterCreate @ 0x18008DAB8 (PiiFilterCreate.c)
 *     ??1IsGameManager@@UEAA@XZ @ 0x18019B64C (--1IsGameManager@@UEAA@XZ.c)
 * Callees:
 *     ?Free@RtlNameValueArray@@QEAAXXZ @ 0x1800EE0FC (-Free@RtlNameValueArray@@QEAAXXZ.c)
 */

BOOLEAN __fastcall PiiFilterDelete(char *P)
{
  BOOLEAN result; // al

  if ( P )
  {
    RtlNameValueArray::Free((RtlNameValueArray *)P);
    RtlNameValueArray::Free((RtlNameValueArray *)(P + 48));
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  return result;
}

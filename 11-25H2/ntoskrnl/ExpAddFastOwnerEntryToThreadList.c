/*
 * XREFs of ExpAddFastOwnerEntryToThreadList @ 0x140293050
 * Callers:
 *     ExAcquireFastResourceShared @ 0x140294520 (ExAcquireFastResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceWithFlags @ 0x14064A280 (ExAcquireFastResourceWithFlags.c)
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x14064AB90 (ExTryToConvertFastResourceSharedToExclusive.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ExpAddFastOwnerEntryToThreadList(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  _QWORD *result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( a3 )
  {
    v6 = a1 + 1744;
    result = *(_QWORD **)v6;
    if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 )
LABEL_3:
      __fastfail(3u);
    *a4 = result;
    a4[1] = v6;
    result[1] = a4;
    *(_QWORD *)v6 = a4;
  }
  else
  {
    result = (_QWORD *)(a1 + 1720);
    v5 = *(_QWORD *)(a1 + 1720);
    if ( *(_QWORD **)(v5 + 8) != result )
      goto LABEL_3;
    *a4 = v5;
    a4[1] = result;
    *(_QWORD *)(v5 + 8) = a4;
    *result = a4;
  }
  return result;
}

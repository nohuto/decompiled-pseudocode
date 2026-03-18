/*
 * XREFs of CmpFreezeHive @ 0x140AA4E94
 * Callers:
 *     CmpPerformUnloadKey @ 0x14097B52C (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpRecordUnloadEventForHive @ 0x1407DA7EC (CmpRecordUnloadEventForHive.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14087B450 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpEnumerateAllOpenSubKeys @ 0x14097BE20 (CmpEnumerateAllOpenSubKeys.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14099E750 (CmpDereferenceKeyControlBlockUnsafe.c)
 */

__int64 __fastcall CmpFreezeHive(__int64 a1, void *a2)
{
  __int64 v2; // rsi
  int v5; // edi
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)a1);
  if ( a2 && (v5 = CmpRecordUnloadEventForHive(v2, a2), v5 < 0) )
  {
    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)a1);
  }
  else
  {
    v7[1] = 0LL;
    v7[2] = 0LL;
    v7[0] = a1;
    CmpEnumerateAllOpenSubKeys(a1, 0, (__int64)CmpSearchAndTagNoDelayCloseWorker, (__int64)v7);
    *(_WORD *)(a1 + 8) |= 0x20u;
    v5 = 0;
    *(_BYTE *)(v2 + 2944) = 1;
    *(_QWORD *)(v2 + 2936) = a1;
  }
  return (unsigned int)v5;
}

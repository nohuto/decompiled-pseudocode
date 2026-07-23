/*
 * XREFs of MiUpdateHugeRangeZeroFreeBitmap @ 0x140672F30
 * Callers:
 *     MiInsertHugeRangeInList @ 0x1404EE760 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x1404EEA38 (MiUnlinkHugeRange.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiUpdateHugeRangeZeroFreeBitmap(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v4; // r10
  unsigned __int64 result; // rax
  __int64 v6; // rcx

  v4 = (unsigned __int64)(unsigned __int8)a3 >> 6;
  result = 1LL << (a3 & 0x3F);
  v6 = *(_QWORD *)(a1 + 16 * ((a3 >> 20) & 1) + 15048);
  if ( a4 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v6 + 8 * v4), result);
  }
  else
  {
    result = ~result;
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 8 * v4), result);
  }
  return result;
}

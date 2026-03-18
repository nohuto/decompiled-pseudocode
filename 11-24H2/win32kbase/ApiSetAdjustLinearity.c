/*
 * XREFs of ApiSetAdjustLinearity @ 0x1400ACE48
 * Callers:
 *     RIMTransformCoordinates @ 0x1400AD1C0 (RIMTransformCoordinates.c)
 * Callees:
 *     AdjustLinearity @ 0x14013CDAC (AdjustLinearity.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetAdjustLinearity(__int64 a1, __int64 a2, __int64 a3, __int64 a4))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4672LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
      return (__int64 (*)(void))AdjustLinearity(a1, a2, a3, a4);
  }
  return result;
}

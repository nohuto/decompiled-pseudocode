/*
 * XREFs of SetVacb @ 0x1403571D0
 * Callers:
 *     CcPinFileData @ 0x1402282C0 (CcPinFileData.c)
 *     CcReferenceFileOffset @ 0x1404C8C90 (CcReferenceFileOffset.c)
 *     CcDereferenceFileOffset @ 0x1404CF5BC (CcDereferenceFileOffset.c)
 * Callees:
 *     CcSetVacbLargeOffset @ 0x140357260 (CcSetVacbLargeOffset.c)
 */

__int64 __fastcall SetVacb(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int8 v5; // r8
  __int64 result; // rax

  v5 = 1;
  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    v5 = CcSetVacbLargeOffset(a1, a2, a3, a4);
  }
  else if ( a3 < 0xFFFFFFFFFFFFFFFEuLL )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)a2 >> 18)) = a3;
    goto LABEL_7;
  }
  if ( a3 == -1LL || a3 == -2LL )
    return v5;
LABEL_7:
  result = v5;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 548));
  else
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 548));
  return result;
}

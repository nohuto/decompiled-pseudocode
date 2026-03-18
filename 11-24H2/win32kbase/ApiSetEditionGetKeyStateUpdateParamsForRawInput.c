/*
 * XREFs of ApiSetEditionGetKeyStateUpdateParamsForRawInput @ 0x1400C1B48
 * Callers:
 *     UpdateKeyStateForMessage @ 0x1400C18C0 (UpdateKeyStateForMessage.c)
 * Callees:
 *     EditionGetKeyStateUpdateParamsForRawInput @ 0x1400E7864 (EditionGetKeyStateUpdateParamsForRawInput.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionGetKeyStateUpdateParamsForRawInput(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5))(void)
{
  int v7; // esi
  int v8; // ebp
  __int64 (*result)(void); // rax

  v7 = a2;
  v8 = a1;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 5680LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
      return (__int64 (*)(void))EditionGetKeyStateUpdateParamsForRawInput(v8, v7, a3, a4, a5);
  }
  return result;
}

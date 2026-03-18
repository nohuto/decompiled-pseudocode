/*
 * XREFs of ApiSetEditionKeyboardInputDelegationChanged @ 0x140221EC4
 * Callers:
 *     SetInputDelegationModeImpl @ 0x14018980C (SetInputDelegationModeImpl.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionKeyboardInputDelegationChanged(__int64 a1, __int64 a2))(void)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  __int64 (*result)(void); // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = a2;
  v3 = a1;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 5936LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 48) + 5944LL);
      if ( result )
        return (__int64 (*)(void))((__int64 (__fastcall *)(_QWORD, _QWORD))result)(v3, v2);
    }
  }
  return result;
}

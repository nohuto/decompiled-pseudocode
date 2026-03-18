/*
 * XREFs of NtUserShowCaret @ 0x140095090
 * Callers:
 *     <none>
 * Callees:
 *     zzzShowCaret @ 0x1400952E0 (zzzShowCaret.c)
 */

__int64 __fastcall NtUserShowCaret(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax

  EnterCrit(0LL, 0LL);
  v2 = 0;
  if ( !a1 )
  {
    v3 = 0LL;
    goto LABEL_5;
  }
  v3 = ValidateHwnd(a1);
  if ( v3 )
LABEL_5:
    v2 = zzzShowCaret(v3);
  UserSessionSwitchLeaveCrit();
  return v2;
}

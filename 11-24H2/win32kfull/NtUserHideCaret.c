/*
 * XREFs of NtUserHideCaret @ 0x140094FC0
 * Callers:
 *     <none>
 * Callees:
 *     zzzInternalHideCaret @ 0x1400357EC (zzzInternalHideCaret.c)
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x140095308 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserHideCaret(__int64 a1)
{
  __int64 v2; // rbx
  struct tagWND *v3; // rax

  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  if ( a1 )
  {
    v3 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v3 )
      goto LABEL_3;
  }
  else
  {
    v3 = 0LL;
  }
  if ( (unsigned int)UT_CaretSet(v3) )
  {
    zzzInternalHideCaret();
    v2 = 1LL;
  }
LABEL_3:
  UserSessionSwitchLeaveCrit();
  return v2;
}

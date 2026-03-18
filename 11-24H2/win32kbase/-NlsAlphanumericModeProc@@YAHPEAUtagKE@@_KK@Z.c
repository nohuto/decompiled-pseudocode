/*
 * XREFs of ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1402146E0
 * Callers:
 *     ?GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x140214544 (-GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 *     ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x140214598 (-GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 * Callees:
 *     xxxKeyEventEx @ 0x14014BF54 (xxxKeyEventEx.c)
 *     ?NlsClearKeyStateToggle@@YAXE@Z @ 0x14019CC90 (-NlsClearKeyStateToggle@@YAXE@Z.c)
 *     ?NlsGetCurrentInputMode@@YAEPEBE@Z @ 0x14019DAA4 (-NlsGetCurrentInputMode@@YAEPEBE@Z.c)
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x140214F34 (-NlsTestKeyStateToggle@@YAHE@Z.c)
 *     NlsKbdSendIMEProc @ 0x140214FB8 (NlsKbdSendIMEProc.c)
 */

__int64 __fastcall NlsAlphanumericModeProc(struct tagKE *a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v5; // rcx
  unsigned __int8 CurrentInputMode; // al
  __int16 v7; // bx
  __int64 v8; // rcx

  v2 = *((_WORD *)a1 + 1);
  if ( v2 < 0 )
    return 0LL;
  *((_WORD *)a1 + 1) = v2 & 0x8F00;
  if ( !(unsigned int)NlsTestKeyStateToggle(0xF0u) )
  {
    CurrentInputMode = NlsGetCurrentInputMode((unsigned __int8 *)&byte_1402707A0);
    v7 = CurrentInputMode;
    LOBYTE(v8) = CurrentInputMode;
    NlsClearKeyStateToggle(v8);
    xxxKeyEventEx(
      (unsigned __int16)(*((_WORD *)a1 + 1) | v7) | 0x8000u,
      *(unsigned __int8 *)a1,
      *((_DWORD *)a1 + 1),
      a2,
      *((void **)a1 + 1),
      (unsigned __int16 *)a1 + 8,
      (unsigned __int16)(*((_WORD *)a1 + 8) + 3) <= 1u,
      0,
      0LL,
      0LL);
  }
  *((_WORD *)a1 + 1) |= 0xF0u;
  if ( !*(_DWORD *)(W32GetUserSessionState(v5) + 14284) )
  {
    if ( (unsigned int)NlsTestKeyStateToggle(0x15u) )
      NlsKbdSendIMEProc(1LL, 2LL);
  }
  return 1LL;
}

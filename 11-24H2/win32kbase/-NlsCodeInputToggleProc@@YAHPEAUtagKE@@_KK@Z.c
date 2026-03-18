/*
 * XREFs of ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x140214800
 * Callers:
 *     ?GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x140214544 (-GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 *     ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x140214598 (-GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 * Callees:
 *     xxxKeyEventEx @ 0x14014BF54 (xxxKeyEventEx.c)
 *     ?NlsClearKeyStateToggle@@YAXE@Z @ 0x14019CC90 (-NlsClearKeyStateToggle@@YAXE@Z.c)
 *     ?NlsGetCurrentInputMode@@YAEPEBE@Z @ 0x14019DAA4 (-NlsGetCurrentInputMode@@YAEPEBE@Z.c)
 */

__int64 __fastcall NlsCodeInputToggleProc(struct tagKE *a1, __int64 a2)
{
  unsigned __int8 CurrentInputMode; // al
  int v5; // ebx
  __int64 v6; // rcx

  if ( *((__int16 *)a1 + 1) < 0 )
    return 0LL;
  CurrentInputMode = NlsGetCurrentInputMode((unsigned __int8 *)&byte_140270798);
  v5 = CurrentInputMode;
  *((_WORD *)a1 + 1) &= 0x8F00u;
  LOBYTE(v6) = CurrentInputMode;
  NlsClearKeyStateToggle(v6);
  if ( v5 == 250 )
  {
    xxxKeyEventEx(
      *((_WORD *)a1 + 1) | 0x80FAu,
      *(unsigned __int8 *)a1,
      *((_DWORD *)a1 + 1),
      a2,
      *((void **)a1 + 1),
      (unsigned __int16 *)a1 + 8,
      0,
      0,
      0LL,
      0LL);
    *((_WORD *)a1 + 1) |= 0xFBu;
  }
  else if ( v5 == 251 )
  {
    xxxKeyEventEx(
      *((_WORD *)a1 + 1) | 0x80FBu,
      *(unsigned __int8 *)a1,
      *((_DWORD *)a1 + 1),
      a2,
      *((void **)a1 + 1),
      (unsigned __int16 *)a1 + 8,
      0,
      0,
      0LL,
      0LL);
    *((_WORD *)a1 + 1) |= 0xFAu;
  }
  return 1LL;
}

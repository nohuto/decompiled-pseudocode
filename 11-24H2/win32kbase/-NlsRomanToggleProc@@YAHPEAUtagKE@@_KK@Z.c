/*
 * XREFs of ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x140214E00
 * Callers:
 *     ?GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x140214544 (-GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 *     ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x140214598 (-GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 * Callees:
 *     xxxKeyEventEx @ 0x14014BF54 (xxxKeyEventEx.c)
 *     ?NlsClearKeyStateToggle@@YAXE@Z @ 0x14019CC90 (-NlsClearKeyStateToggle@@YAXE@Z.c)
 *     ?NlsGetCurrentInputMode@@YAEPEBE@Z @ 0x14019DAA4 (-NlsGetCurrentInputMode@@YAEPEBE@Z.c)
 */

__int64 __fastcall NlsRomanToggleProc(struct tagKE *a1, __int64 a2)
{
  unsigned __int8 CurrentInputMode; // al
  int v5; // ebx
  __int64 v6; // rcx

  if ( *((__int16 *)a1 + 1) < 0 )
    return 0LL;
  CurrentInputMode = NlsGetCurrentInputMode((unsigned __int8 *)&byte_14027079C);
  v5 = CurrentInputMode;
  *((_WORD *)a1 + 1) &= 0x8F00u;
  LOBYTE(v6) = CurrentInputMode;
  NlsClearKeyStateToggle(v6);
  if ( v5 == 245 )
  {
    xxxKeyEventEx(
      *((_WORD *)a1 + 1) | 0x80F5u,
      *(unsigned __int8 *)a1,
      *((_DWORD *)a1 + 1),
      a2,
      *((void **)a1 + 1),
      (unsigned __int16 *)a1 + 8,
      0,
      0,
      0LL,
      0LL);
    *((_WORD *)a1 + 1) |= 0xF6u;
  }
  else if ( v5 == 246 )
  {
    xxxKeyEventEx(
      *((_WORD *)a1 + 1) | 0x80F6u,
      *(unsigned __int8 *)a1,
      *((_DWORD *)a1 + 1),
      a2,
      *((void **)a1 + 1),
      (unsigned __int16 *)a1 + 8,
      0,
      0,
      0LL,
      0LL);
    *((_WORD *)a1 + 1) |= 0xF5u;
  }
  return 1LL;
}

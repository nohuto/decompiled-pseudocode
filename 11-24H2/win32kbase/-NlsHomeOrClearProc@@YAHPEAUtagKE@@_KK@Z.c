/*
 * XREFs of ?NlsHomeOrClearProc@@YAHPEAUtagKE@@_KK@Z @ 0x140214B10
 * Callers:
 *     ?GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x140214544 (-GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 *     ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x140214598 (-GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NlsHomeOrClearProc(struct tagKE *a1)
{
  __int16 v1; // ax
  bool v3; // zf
  __int16 v4; // ax
  __int16 v5; // ax

  v1 = *((_WORD *)a1 + 1);
  if ( (v1 & 0x800) == 0 )
  {
    *((_WORD *)a1 + 1) = v1 & 0x8F00;
    v3 = (*(_BYTE *)(W32GetUserSessionState(36608LL) + 14333) & 4) == 0;
    v4 = *((_WORD *)a1 + 1);
    if ( v3 )
      v5 = v4 | 0xC;
    else
      v5 = v4 | 0x24;
    *((_WORD *)a1 + 1) = v5;
  }
  return 1LL;
}

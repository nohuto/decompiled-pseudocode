/*
 * XREFs of ?NlsHelpOrEndProc@@YAHPEAUtagKE@@_KK@Z @ 0x140214950
 * Callers:
 *     ?GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x140214544 (-GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 *     ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x140214598 (-GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x140214F34 (-NlsTestKeyStateToggle@@YAHE@Z.c)
 */

__int64 __fastcall NlsHelpOrEndProc(struct tagKE *a1)
{
  __int16 v1; // ax
  __int64 v3; // rcx
  int v4; // eax
  __int16 v5; // cx
  __int16 v6; // cx

  v1 = *((_WORD *)a1 + 1);
  if ( (v1 & 0x800) == 0 )
  {
    *((_WORD *)a1 + 1) = v1 & 0x8F00;
    if ( (*(_BYTE *)(W32GetUserSessionState(36608LL) + 14333) & 1) != 0 )
    {
      if ( (*(_BYTE *)(W32GetUserSessionState(v3) + 14333) & 2) != 0 )
      {
        *((_WORD *)a1 + 1) |= (unsigned int)NlsTestKeyStateToggle(0x15u) != 0 ? 47 : 35;
      }
      else
      {
        v4 = NlsTestKeyStateToggle(0x15u);
        v5 = *((_WORD *)a1 + 1);
        if ( v4 )
          v6 = v5 | 0x23;
        else
          v6 = v5 | 0x2F;
        *((_WORD *)a1 + 1) = v6;
      }
    }
    else
    {
      *((_WORD *)a1 + 1) |= (*(_BYTE *)(W32GetUserSessionState(v3) + 14333) & 2) != 0 ? 35 : 47;
    }
  }
  return 1LL;
}

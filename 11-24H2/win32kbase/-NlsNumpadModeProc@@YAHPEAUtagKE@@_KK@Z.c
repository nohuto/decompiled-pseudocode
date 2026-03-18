/*
 * XREFs of ?NlsNumpadModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x140214D20
 * Callers:
 *     ?GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x140214544 (-GenerateNlsVkAltKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 *     ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x140214598 (-GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x140214F34 (-NlsTestKeyStateToggle@@YAHE@Z.c)
 */

__int64 __fastcall NlsNumpadModeProc(struct tagKE *a1)
{
  unsigned int v1; // edi
  __int64 v3; // rcx
  __int16 v4; // dx
  __int16 v5; // dx

  v1 = *((unsigned __int8 *)a1 + 2);
  if ( !(unsigned int)NlsTestKeyStateToggle(0x90u) || (*(_BYTE *)(W32GetUserSessionState(v3) + 14404) & 1) != 0 )
  {
    v4 = *((_WORD *)a1 + 1) & 0x8F00;
    *((_WORD *)a1 + 1) = v4;
    if ( v1 <= 0x65 )
    {
      switch ( v1 )
      {
        case 'e':
          v5 = v4 | 0xC;
          goto LABEL_26;
        case '`':
          v5 = v4 | 0x2D;
          goto LABEL_26;
        case 'a':
          v5 = v4 | 0x23;
          goto LABEL_26;
        case 'b':
          v5 = v4 | 0x28;
          goto LABEL_26;
        case 'c':
          v5 = v4 | 0x22;
          goto LABEL_26;
        case 'd':
          v5 = v4 | 0x25;
          goto LABEL_26;
      }
    }
    else
    {
      switch ( v1 )
      {
        case 'f':
          v5 = v4 | 0x27;
          goto LABEL_26;
        case 'g':
          v5 = v4 | 0x24;
          goto LABEL_26;
        case 'h':
          v5 = v4 | 0x26;
          goto LABEL_26;
        case 'i':
          v5 = v4 | 0x21;
          goto LABEL_26;
        case 'n':
          v5 = v4 | 0x2E;
LABEL_26:
          *((_WORD *)a1 + 1) = v5;
          break;
      }
    }
  }
  return 1LL;
}

/*
 * XREFs of SmmSetAdlPageArray @ 0x14003A594
 * Callers:
 *     ?SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z @ 0x140039F40 (-SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

int __fastcall SmmSetAdlPageArray(__int64 a1, __int64 a2, unsigned int a3)
{
  int result; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx

  result = *(_DWORD *)(a1 + 44) & 0x1E;
  if ( result == 4 )
  {
    v5 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    if ( result != 2 && result != 8 )
    {
      WdLogSingleEntry0(1LL);
      v6 = 0LL;
      WdLogGlobalForLineNumber = 736;
      result = DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"0", 736LL, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_4;
    }
    v5 = *(_QWORD *)(a1 + 56);
  }
  v6 = v5 + 8 * (a3 + 6LL);
LABEL_4:
  *(_QWORD *)(a2 + 16) = v6;
  return result;
}

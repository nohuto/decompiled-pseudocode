/*
 * XREFs of SmmSetAdlPageArray @ 0x14003AD34
 * Callers:
 *     ?SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z @ 0x14003A6E0 (-SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall SmmSetAdlPageArray(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx

  result = *(_DWORD *)(a1 + 44) & 0x1E;
  if ( (_DWORD)result == 4 )
  {
    v5 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    if ( (_DWORD)result != 2 && (_DWORD)result != 8 )
    {
      WdLogSingleEntry0(1LL);
      v6 = 0LL;
      WdLogGlobalForLineNumber = 736;
      result = DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"0", 736LL, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_4;
    }
    v5 = *(_QWORD *)(a1 + 56);
  }
  v6 = v5 + 8 * (a3 + 6LL);
LABEL_4:
  *(_QWORD *)(a2 + 16) = v6;
  return result;
}

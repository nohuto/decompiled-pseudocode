/*
 * XREFs of SmmSetAdlBaseAddress @ 0x14003AC68
 * Callers:
 *     ?SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z @ 0x14003A6E0 (-SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14003ADD4 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 */

unsigned __int64 __fastcall SmmSetAdlBaseAddress(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  const struct SYSMM_LOGICAL_BLOCK *v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rbx

  v4 = *(const struct SYSMM_LOGICAL_BLOCK **)(a1 + 24);
  v5 = 0LL;
  v6 = a4;
  if ( v4 )
  {
    result = SmmGetLogicalAddress(v4);
    v9 = result >> 12;
  }
  else
  {
    result = *(_DWORD *)(a2 + 44) & 0x1E;
    if ( (_DWORD)result == 10 )
    {
      result = MmGetPhysicalAddress(*(PVOID *)(a2 + 8)).QuadPart;
      v5 = result;
    }
    else if ( (_DWORD)result == 6 )
    {
      v5 = *(_QWORD *)(a2 + 8);
    }
    else
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 682;
      result = DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"0", 682LL, 0LL, 0LL, 0LL, 0LL);
    }
    v9 = v5 >> 12;
  }
  *(_QWORD *)(a3 + 16) = v9 + v6;
  return result;
}

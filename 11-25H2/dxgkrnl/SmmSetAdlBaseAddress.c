/*
 * XREFs of SmmSetAdlBaseAddress @ 0x14003A4C8
 * Callers:
 *     ?SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z @ 0x140039F40 (-SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14003A634 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 */

DWORD __fastcall SmmSetAdlBaseAddress(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  const struct SYSMM_LOGICAL_BLOCK *v4; // rcx
  __int64 QuadPart; // rbx
  __int64 v6; // rdi
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned __int64 v9; // rbx

  v4 = *(const struct SYSMM_LOGICAL_BLOCK **)(a1 + 24);
  QuadPart = 0LL;
  v6 = a4;
  if ( v4 )
  {
    PhysicalAddress.QuadPart = SmmGetLogicalAddress(v4);
    v9 = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
  }
  else
  {
    PhysicalAddress.LowPart = *(_DWORD *)(a2 + 44) & 0x1E;
    if ( PhysicalAddress.LowPart == 10 )
    {
      PhysicalAddress = MmGetPhysicalAddress(*(PVOID *)(a2 + 8));
      QuadPart = PhysicalAddress.QuadPart;
    }
    else if ( PhysicalAddress.LowPart == 6 )
    {
      QuadPart = *(_QWORD *)(a2 + 8);
    }
    else
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 682;
      PhysicalAddress.LowPart = DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"0", 682LL, 0LL, 0LL, 0LL, 0LL);
    }
    v9 = QuadPart >> 12;
  }
  *(_QWORD *)(a3 + 16) = v9 + v6;
  return PhysicalAddress.LowPart;
}

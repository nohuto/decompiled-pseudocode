/*
 * XREFs of KiConfigureAmdTprLowerInterruptDelayWorkaround @ 0x140B59F84
 * Callers:
 *     KiInitializeKernel @ 0x140B5A930 (KiInitializeKernel.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14049E730 (HviIsAnyHypervisorPresent.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall KiConfigureAmdTprLowerInterruptDelayWorkaround(ULONG_PTR BugCheckParameter1, int a2)
{
  char v4; // cl
  unsigned __int64 v5; // rax

  v4 = *(_BYTE *)(BugCheckParameter1 + 64);
  LODWORD(v5) = v4 == 23 && (unsigned __int8)(*(_BYTE *)(BugCheckParameter1 + 67) - 48) <= 0xFu
             || v4 == 25 && *(_BYTE *)(BugCheckParameter1 + 67) <= 0xFu;
  if ( (_DWORD)v5 )
  {
    LOBYTE(v5) = HviIsAnyHypervisorPresent();
    if ( !(_BYTE)v5 && KiAmdTprLowerInterruptDelayConfig != 2 )
    {
      if ( !a2 )
      {
        v5 = __readmsr(0xC0010015);
        if ( (v5 & 0x100000000LL) != 0 )
        {
          KiAmdTprLowerInterruptDelayConfig = 2;
          return v5;
        }
        __writemsr(0xC0010015, v5 | 0x100000000LL);
        __writemsr(0xC0010015, v5);
      }
      if ( a2 )
      {
        v5 = __readmsr(0xC0010015);
        if ( (v5 & 0x100000000LL) != 0 )
          KeBugCheckEx(0x3Eu, BugCheckParameter1, v5, 0LL, 0LL);
      }
      if ( KiAmdTprLowerInterruptDelayConfig == 1 )
      {
        v5 = __readmsr(0xC0010015) | 0x100000000LL;
        __writemsr(0xC0010015, v5);
      }
      else if ( !a2 )
      {
        KiAmdTprLowerInterruptDelayDynamicWorkaround = 1;
      }
    }
  }
  return v5;
}

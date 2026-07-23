/*
 * XREFs of RtlpConvertFunctionEntry @ 0x140406840
 * Callers:
 *     KiLockExtendedServiceTable @ 0x140505B38 (KiLockExtendedServiceTable.c)
 *     RtlIsSpecialUnwind @ 0x1405EDF58 (RtlIsSpecialUnwind.c)
 *     KiLockServiceTable @ 0x1406964A8 (KiLockServiceTable.c)
 *     RtlMarkExceptionHandlingPages @ 0x140A152BC (RtlMarkExceptionHandlingPages.c)
 *     CcInitializeBcbProfiler @ 0x140BE0C74 (CcInitializeBcbProfiler.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

unsigned __int64 __fastcall RtlpConvertFunctionEntry(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax

  if ( a1 )
  {
    v2 = *(unsigned int *)(a1 + 8);
    if ( (v2 & 1) != 0 )
    {
      a1 = a2 + v2 - 1;
      if ( a2 <= 0x7FFFFFFEFFFFLL && (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
  }
  return a1;
}

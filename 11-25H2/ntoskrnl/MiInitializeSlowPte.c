/*
 * XREFs of MiInitializeSlowPte @ 0x14066C9DC
 * Callers:
 *     MiSlowRotateCopy @ 0x14066CA94 (MiSlowRotateCopy.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x140224530 (MiMakeProtectionPfnCompatible.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 */

ULONG_PTR __fastcall MiInitializeSlowPte(
        ULONG_PTR *BugCheckParameter2,
        unsigned __int64 a2,
        int ProtectionPfnCompatible)
{
  __int64 v3; // r9
  ULONG_PTR result; // rax
  ULONG_PTR v6; // rbx

  v3 = a2;
  if ( a2 <= qword_140E2D9A0 && ((*(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, 48 * a2 - 0x220000000000LL);
  result = MiMakeValidPte((unsigned __int64)BugCheckParameter2, v3, ProtectionPfnCompatible | 0xA0000000);
  v6 = result;
  if ( _bittest64(&MiFlags, 0x24u) )
  {
    if ( (result & 0x20) == 0 )
    {
      result = 0xFFFFF6C000000000uLL;
      if ( (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6C000000000uLL )
        result = MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)BugCheckParameter2, v6, 128);
    }
  }
  *BugCheckParameter2 = v6;
  return result;
}

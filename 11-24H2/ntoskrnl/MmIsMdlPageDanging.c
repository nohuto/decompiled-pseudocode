/*
 * XREFs of MmIsMdlPageDanging @ 0x140673290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MmIsMdlPageDanging(unsigned __int64 a1)
{
  __int64 v1; // rdx
  int v2; // ecx

  v1 = 48 * a1;
  if ( a1 > qword_140E2DD20 || ((*(_QWORD *)(v1 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
    NT_ASSERT("MiIsPfn (PageFrameIndex)");
  if ( (*(_QWORD *)(v1 - 0x220000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    NT_ASSERT("(MiReadPfnBlink (Pfn1).ShareCount) == 1");
  if ( (*(_QWORD *)(v1 - 0x220000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
    || (*(_BYTE *)(v1 - 0x220000000000LL + 34) & 7) != 6
    || (*(_QWORD *)(v1 - 0x220000000000LL + 40) & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL )
  {
    NT_ASSERT(
      "(((MiReadPfnBlink (Pfn1).ShareCount) != 0) && (Pfn1->u3.e1.PageLocation == ActiveAndValid) && ((MiGetPfnContaining"
      "Frame (Pfn1) == (((((PFN_NUMBER) 1) << (50 - 12)) - 1) - 1))))");
  }
  v2 = *(_DWORD *)(v1 - 0x220000000000LL + 32);
  if ( (unsigned __int16)v2 < 2u )
    NT_ASSERT("ReferenceCount >= 2");
  return (unsigned __int16)v2 > 2u;
}

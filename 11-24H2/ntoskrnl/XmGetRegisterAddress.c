/*
 * XREFs of XmGetRegisterAddress @ 0x140469318
 * Callers:
 *     XmMoveRegImmediate @ 0x140468BA0 (XmMoveRegImmediate.c)
 *     XmMoveGeneral @ 0x140468C90 (XmMoveGeneral.c)
 *     XmGroup1General @ 0x140468D00 (XmGroup1General.c)
 *     XmEvaluateAddressSpecifier @ 0x140468DC4 (XmEvaluateAddressSpecifier.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmGetRegisterAddress(__int64 a1, unsigned int a2)
{
  if ( *(_DWORD *)(a1 + 120) || a2 < 4 )
    return a1 + 4 * (a2 + 6LL);
  else
    return a1 + 25 + 4LL * (a2 - 4);
}

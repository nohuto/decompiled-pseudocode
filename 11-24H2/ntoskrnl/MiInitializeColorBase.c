/*
 * XREFs of MiInitializeColorBase @ 0x1403A671C
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x1403A62E0 (MiMakeZeroedPageTablesEx.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140683AC8 (MiDemoteValidLargePageOneLevel.c)
 *     MmCreateShadowMapping @ 0x1407F674C (MmCreateShadowMapping.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 */

char __fastcall MiInitializeColorBase(unsigned __int64 a1, int a2, __int64 a3)
{
  struct _LIST_ENTRY **p_Blink; // rcx

  if ( a1 > 0x7FFFFFFEFFFFLL
    && (a1 < qword_140E2F280 || a1 > qword_140E2F290)
    && (a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    p_Blink = 0LL;
  }
  else
  {
    p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  }
  return MiInitializePageColorBase((__int64)p_Blink, 3, a2, a3);
}

/*
 * XREFs of MiInitializeColorBase @ 0x14038F9B8
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x14038F57C (MiMakeZeroedPageTablesEx.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140678274 (MiDemoteValidLargePageOneLevel.c)
 *     MmCreateShadowMapping @ 0x1407E68BC (MmCreateShadowMapping.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 */

char __fastcall MiInitializeColorBase(unsigned __int64 a1, int a2, __int64 a3)
{
  struct _LIST_ENTRY **p_Blink; // rcx

  if ( a1 > 0x7FFFFFFEFFFFLL
    && (a1 < qword_140E2F040 || a1 > qword_140E2F050)
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

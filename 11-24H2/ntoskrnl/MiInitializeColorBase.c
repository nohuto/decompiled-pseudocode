/*
 * XREFs of MiInitializeColorBase @ 0x14026DA0C
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x14026D5D0 (MiMakeZeroedPageTablesEx.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140684C24 (MiDemoteValidLargePageOneLevel.c)
 *     MmCreateShadowMapping @ 0x1407F6EC0 (MmCreateShadowMapping.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 */

__int64 __fastcall MiInitializeColorBase(unsigned __int64 a1, unsigned int a2, __int64 a3)
{
  struct _LIST_ENTRY **p_Blink; // rcx

  if ( a1 > 0x7FFFFFFEFFFFLL
    && (a1 < qword_140E2F3C0 || a1 > qword_140E2F3D0)
    && (a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    p_Blink = 0LL;
  }
  else
  {
    p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  }
  return MiInitializePageColorBase(p_Blink, 3LL, a2, a3);
}

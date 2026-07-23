/*
 * XREFs of MiReuseUltraPageTable @ 0x1404622AC
 * Callers:
 *     MiGetUltraMapping @ 0x1403361B0 (MiGetUltraMapping.c)
 * Callees:
 *     MI_PAGE_TO_FULL_COLOR @ 0x140250420 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiManageUltraSpacePageTable @ 0x140352F3C (MiManageUltraSpacePageTable.c)
 */

unsigned __int64 __fastcall MiReuseUltraPageTable(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  ULONG_PTR v4; // rbx
  unsigned int v5; // eax
  unsigned __int64 result; // rax

  v2 = a2;
  v4 = *(_QWORD *)(a1 + 8LL * a2 + 8);
  v5 = MI_PAGE_TO_FULL_COLOR(v4);
  result = MiManageUltraSpacePageTable((__int64 *)(48 * v4 - 0x220000000000LL), v5, 0);
  if ( result != v4 )
    *(_QWORD *)(a1 + 8 * v2 + 8) = result;
  return result;
}

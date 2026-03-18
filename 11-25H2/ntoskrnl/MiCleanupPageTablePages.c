/*
 * XREFs of MiCleanupPageTablePages @ 0x14038FA38
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x14038F57C (MiMakeZeroedPageTablesEx.c)
 *     MmCreateShadowMapping @ 0x1407E68BC (MmCreateShadowMapping.c)
 * Callees:
 *     MiReturnSystemCharges @ 0x140377DD8 (MiReturnSystemCharges.c)
 *     MiFreeLargeZeroPages @ 0x14038FA8C (MiFreeLargeZeroPages.c)
 */

unsigned __int64 __fastcall MiCleanupPageTablePages(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdx

  result = MiFreeLargeZeroPages(*(_QWORD *)(a1 + 96), a1, 0LL);
  v3 = *(_QWORD *)(a1 + 104);
  if ( v3 )
  {
    result = *(_QWORD *)(a1 + 112);
    if ( result != v3 )
      result = MiReturnSystemCharges(*(_QWORD *)(a1 + 96), v3 - result, v3 - result, *(_DWORD *)(a1 + 120));
  }
  *(_QWORD *)(a1 + 104) = 0LL;
  return result;
}

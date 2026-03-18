/*
 * XREFs of DXGADAPTER_SetMockDriverState @ 0x14006BFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z @ 0x1400767F0 (-SetMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z.c)
 */

__int64 __fastcall DXGADAPTER_SetMockDriverState(__int64 a1)
{
  return MOCKDRIVERSTATE::SetMockDriverState(*(_QWORD *)(a1 + 4968));
}

/*
 * XREFs of DXGADAPTER_SetMockDriverState @ 0x14006C280
 * Callers:
 *     <none>
 * Callees:
 *     ?SetMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z @ 0x140075D50 (-SetMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z.c)
 */

__int64 __fastcall DXGADAPTER_SetMockDriverState(__int64 a1)
{
  return MOCKDRIVERSTATE::SetMockDriverState(*(_QWORD *)(a1 + 4968));
}

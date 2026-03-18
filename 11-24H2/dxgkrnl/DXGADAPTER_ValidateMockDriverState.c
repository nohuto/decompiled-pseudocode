/*
 * XREFs of DXGADAPTER_ValidateMockDriverState @ 0x14006BFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z @ 0x140076AF8 (-ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z.c)
 */

__int64 __fastcall DXGADAPTER_ValidateMockDriverState(__int64 a1)
{
  return MOCKDRIVERSTATE::ValidateMockDriverState(*(_QWORD *)(a1 + 4968));
}

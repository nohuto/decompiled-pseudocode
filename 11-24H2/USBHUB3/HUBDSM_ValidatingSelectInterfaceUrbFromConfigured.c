/*
 * XREFs of HUBDSM_ValidatingSelectInterfaceUrbFromConfigured @ 0x140025E40
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_ValidateSelectInterfaceUrb @ 0x14001C420 (HUBPDO_ValidateSelectInterfaceUrb.c)
 */

__int64 __fastcall HUBDSM_ValidatingSelectInterfaceUrbFromConfigured(__int64 a1)
{
  return HUBPDO_ValidateSelectInterfaceUrb(*(_QWORD *)(a1 + 960));
}

/*
 * XREFs of CmCreateKeyCallout @ 0x1406F3150
 * Callers:
 *     <none>
 * Callees:
 *     CmCreateKey @ 0x140A1B2F4 (CmCreateKey.c)
 */

void __fastcall CmCreateKeyCallout(_QWORD *Parameter)
{
  *(_DWORD *)Parameter = CmCreateKey(Parameter[1], *((unsigned int *)Parameter + 4), Parameter[3]);
}

/*
 * XREFs of CmCreateKeyCallout @ 0x1407BFBD0
 * Callers:
 *     NtCreateKeyTransacted @ 0x140AD2B50 (NtCreateKeyTransacted.c)
 * Callees:
 *     CmCreateKey @ 0x140AD24C0 (CmCreateKey.c)
 */

void __fastcall CmCreateKeyCallout(_QWORD *Parameter)
{
  *(_DWORD *)Parameter = CmCreateKey(Parameter[1], *((unsigned int *)Parameter + 4), Parameter[3]);
}

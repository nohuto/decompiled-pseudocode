/*
 * XREFs of SeDeleteClientSecurity @ 0x14088D080
 * Callers:
 *     AlpcpQueryTokenModifiedIdMessage @ 0x1407417E0 (AlpcpQueryTokenModifiedIdMessage.c)
 *     EtwpUpdateTrace @ 0x14083311C (EtwpUpdateTrace.c)
 *     AlpcpDeletePort @ 0x14088B9B0 (AlpcpDeletePort.c)
 *     EtwpFreeLoggerContext @ 0x1409D77E0 (EtwpFreeLoggerContext.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall SeDeleteClientSecurity(__int64 a1)
{
  _DWORD *v1; // rcx
  LONG_PTR result; // rax

  v1 = *(_DWORD **)(a1 + 16);
  if ( v1[48] == 1 || v1 )
    return ObfDereferenceObjectWithTag(v1, 0x63436553u);
  return result;
}

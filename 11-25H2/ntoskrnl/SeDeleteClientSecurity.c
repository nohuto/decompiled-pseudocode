/*
 * XREFs of SeDeleteClientSecurity @ 0x14098D0C0
 * Callers:
 *     AlpcpQueryTokenModifiedIdMessage @ 0x1407357C0 (AlpcpQueryTokenModifiedIdMessage.c)
 *     EtwpUpdateTrace @ 0x140893BB4 (EtwpUpdateTrace.c)
 *     AlpcpDeletePort @ 0x14098B9F0 (AlpcpDeletePort.c)
 *     EtwpFreeLoggerContext @ 0x14098EB6C (EtwpFreeLoggerContext.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
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

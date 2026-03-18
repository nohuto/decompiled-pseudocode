/*
 * XREFs of Endpoint_SM_WasDoorbellRungSinceMappingStart @ 0x14002ED9C
 * Callers:
 *     ESM_CheckingIfEndpointShouldBeStopped @ 0x14002ED80 (ESM_CheckingIfEndpointShouldBeStopped.c)
 * Callees:
 *     TR_WasDoorbellRungSinceMappingStart @ 0x14002EE24 (TR_WasDoorbellRungSinceMappingStart.c)
 */

__int64 __fastcall Endpoint_SM_WasDoorbellRungSinceMappingStart(__int64 a1)
{
  __int64 v3; // rsi
  int v4; // edi

  if ( !*(_BYTE *)(a1 + 37) )
    return (unsigned __int8)TR_WasDoorbellRungSinceMappingStart(*(_QWORD *)(a1 + 88)) != 0 ? 33 : 21;
  v3 = *(_QWORD *)(a1 + 144);
  v4 = 1;
  *(_DWORD *)(v3 + 20) = 0;
  if ( !*(_DWORD *)(v3 + 8) )
    return 21LL;
  while ( !(unsigned __int8)TR_WasDoorbellRungSinceMappingStart(*(_QWORD *)(104LL * (unsigned int)(v4 - 1)
                                                                          + *(_QWORD *)(a1 + 144)
                                                                          + 48)) )
  {
    if ( (unsigned int)++v4 > *(_DWORD *)(v3 + 8) )
      return 21LL;
  }
  return 33LL;
}

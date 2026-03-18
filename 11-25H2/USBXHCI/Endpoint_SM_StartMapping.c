/*
 * XREFs of Endpoint_SM_StartMapping @ 0x14002BEE4
 * Callers:
 *     ESM_StartingMapping @ 0x14002BEC0 (ESM_StartingMapping.c)
 * Callees:
 *     TR_StartMapping @ 0x14002BF60 (TR_StartMapping.c)
 */

__int64 __fastcall Endpoint_SM_StartMapping(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdi
  unsigned int v4; // esi

  v1 = (__int64 *)(a1 + 136);
  _InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
  if ( !*(_BYTE *)(a1 + 37) )
    return TR_StartMapping(*(_QWORD *)(a1 + 88));
  result = *v1;
  *(_DWORD *)(*v1 + 24) = 0;
  if ( !*(_BYTE *)(a1 + 37) )
    return TR_StartMapping(*(_QWORD *)(a1 + 88));
  v3 = *v1;
  v4 = 1;
  for ( *(_DWORD *)(v3 + 20) = 0; v4 <= *(_DWORD *)(v3 + 8); ++v4 )
    result = TR_StartMapping(*(_QWORD *)(104LL * (v4 - 1) + *v1 + 48));
  return result;
}

/*
 * XREFs of Bulk_EP_StopMapping @ 0x14002C310
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEsmEvent @ 0x140005BC0 (ESM_AddEsmEvent.c)
 */

__int64 __fastcall Bulk_EP_StopMapping(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx

  result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 108), 1);
  if ( (_DWORD)result == 2 )
  {
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 0, 1);
    if ( (_DWORD)result == 1 )
    {
      v2 = *(_QWORD *)(a1 + 56);
      if ( !*(_BYTE *)(v2 + 37) )
        return ESM_AddEsmEvent(v2);
      v3 = *(_QWORD *)(v2 + 144);
      result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v3 + 20));
      if ( (_DWORD)result == *(_DWORD *)(v3 + 8) )
        return ESM_AddEsmEvent(v2);
    }
  }
  return result;
}

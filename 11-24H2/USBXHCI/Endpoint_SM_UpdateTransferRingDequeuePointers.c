/*
 * XREFs of Endpoint_SM_UpdateTransferRingDequeuePointers @ 0x1400097B4
 * Callers:
 *     ESM_UpdatingTransferRingDequeuePointers @ 0x140009790 (ESM_UpdatingTransferRingDequeuePointers.c)
 * Callees:
 *     ESM_AddEsmEvent @ 0x140005BC0 (ESM_AddEsmEvent.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x14000AB48 (Endpoint_OnCancelSetDequeuePointer.c)
 *     XilEndpoint_FetchStreamContextArray @ 0x14002D2A4 (XilEndpoint_FetchStreamContextArray.c)
 */

__int64 __fastcall Endpoint_SM_UpdateTransferRingDequeuePointers(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  unsigned int i; // edi

  if ( !*(_BYTE *)(a1 + 37) )
    return Endpoint_OnCancelSetDequeuePointer(a1, 0LL);
  v3 = *(_QWORD *)(a1 + 144);
  *(_DWORD *)(v3 + 20) = 0;
  if ( (int)XilEndpoint_FetchStreamContextArray(v3) < 0 )
  {
    _m_prefetchw((const void *)(a1 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 32), 2u);
    if ( (result & 2) == 0 )
      return ESM_AddEsmEvent(a1);
  }
  else
  {
    result = *(_QWORD *)(a1 + 144);
    for ( i = 1; i <= *(_DWORD *)(result + 8); ++i )
    {
      Endpoint_OnCancelSetDequeuePointer(a1, i);
      result = *(_QWORD *)(a1 + 144);
    }
  }
  return result;
}

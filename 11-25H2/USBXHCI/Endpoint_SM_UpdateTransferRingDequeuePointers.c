/*
 * XREFs of Endpoint_SM_UpdateTransferRingDequeuePointers @ 0x1400101F4
 * Callers:
 *     ESM_UpdatingTransferRingDequeuePointers @ 0x1400101D0 (ESM_UpdatingTransferRingDequeuePointers.c)
 * Callees:
 *     XilEndpoint_FetchStreamContextArray @ 0x14000F694 (XilEndpoint_FetchStreamContextArray.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x140010288 (Endpoint_OnCancelSetDequeuePointer.c)
 *     ESM_AddEsmEvent @ 0x140012218 (ESM_AddEsmEvent.c)
 */

__int64 __fastcall Endpoint_SM_UpdateTransferRingDequeuePointers(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  unsigned int i; // edi

  if ( !*(_BYTE *)(a1 + 37) )
    return Endpoint_OnCancelSetDequeuePointer(a1, 0LL);
  v3 = *(_QWORD *)(a1 + 136);
  *(_DWORD *)(v3 + 20) = 0;
  if ( (int)XilEndpoint_FetchStreamContextArray(v3) < 0 )
  {
    _m_prefetchw((const void *)(a1 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 32), 2u);
    if ( (result & 2) == 0 )
      return ESM_AddEsmEvent(a1, 12LL);
  }
  else
  {
    result = *(_QWORD *)(a1 + 136);
    for ( i = 1; i <= *(_DWORD *)(result + 8); ++i )
    {
      Endpoint_OnCancelSetDequeuePointer(a1, i);
      result = *(_QWORD *)(a1 + 136);
    }
  }
  return result;
}

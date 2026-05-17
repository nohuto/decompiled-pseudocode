/*
 * XREFs of TppWorkCancelPendingCallbacks @ 0x180043B40
 * Callers:
 *     TppWorkCallbackPrologRelease @ 0x180043350 (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x1801144BC (TppETWCallbackCancel.c)
 */

unsigned __int64 __fastcall TppWorkCancelPendingCallbacks(__int64 a1)
{
  unsigned __int64 result; // rax
  int v3; // ett
  unsigned int v4; // edi
  __int64 v5; // rcx

  _m_prefetchw((const void *)(a1 + 232));
  result = *(unsigned int *)(a1 + 232);
  if ( (unsigned int)result >= 2 )
  {
    _m_prefetchw((const void *)(a1 + 232));
    LODWORD(result) = *(_DWORD *)(a1 + 232);
    do
    {
      v3 = result;
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 232), result & 1, result);
    }
    while ( v3 != (_DWORD)result );
    v4 = (unsigned int)result >> 1;
    if ( (unsigned int)result >> 1 )
    {
      TppBarrierAdjust((volatile signed __int64 *)(a1 + 56), -v4, 0);
      result = (unsigned __int64)RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = (unsigned __int64)NtCurrentPeb();
        v5 = *(_QWORD *)(result + 144) + 556LL;
      }
      else
      {
        v5 = 2147353478LL;
      }
      if ( *(_BYTE *)v5 )
        return TppETWCallbackCancel(
                 *(_QWORD *)(a1 + 144),
                 (int)a1 + 200,
                 *(_QWORD *)(a1 + 80),
                 *(_QWORD *)(a1 + 88),
                 *(_QWORD *)(a1 + 104),
                 v4);
    }
  }
  return result;
}

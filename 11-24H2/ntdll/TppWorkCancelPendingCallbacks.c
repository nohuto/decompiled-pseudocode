/*
 * XREFs of TppWorkCancelPendingCallbacks @ 0x180022AB0
 * Callers:
 *     TppWorkCallbackPrologRelease @ 0x1800222C0 (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     TppBarrierAdjust @ 0x180011D50 (TppBarrierAdjust.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     TppETWCallbackCancel @ 0x18006A664 (TppETWCallbackCancel.c)
 */

__int64 __fastcall TppWorkCancelPendingCallbacks(__int64 a1)
{
  __int64 result; // rax
  int v3; // ett
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx

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
      result = RtlGetCurrentServiceSessionId(v6, v5, v7, v8);
      if ( (_DWORD)result )
      {
        result = (__int64)NtCurrentPeb();
        v9 = *(_QWORD *)(result + 144) + 556LL;
      }
      else
      {
        v9 = 2147353478LL;
      }
      if ( *(_BYTE *)v9 )
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

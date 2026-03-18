/*
 * XREFs of VidSchSetQueuedPresentLimit @ 0x1400D85B0
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1400D80E0 (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VidSchSetQueuedPresentLimit(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // rcx

  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 32);
    if ( *(_BYTE *)(a1 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 200), 0, 0) )
    {
      WdLogSingleEntry2(3LL, a1, -1071775232LL);
      result = 3223192064LL;
      WdLogGlobalForLineNumber = 4785;
    }
    else
    {
      if ( !a2 )
        a2 = *(_DWORD *)(v2 + 2812);
      *(_DWORD *)(a1 + 244) = a2;
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 4771;
    DxgkLogInternalTriageEvent(v4, 0x40000LL);
    return 3221225485LL;
  }
  return result;
}

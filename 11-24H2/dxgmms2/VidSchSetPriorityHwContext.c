/*
 * XREFs of VidSchSetPriorityHwContext @ 0x140101BA0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchiUpdateDdiHwContextPriority @ 0x140101C64 (VidSchiUpdateDdiHwContextPriority.c)
 */

__int64 __fastcall VidSchSetPriorityHwContext(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rcx

  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v5 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 200), 0, 0) )
    {
      WdLogSingleEntry2(3LL, v5, -1071775232LL);
      result = 3223192064LL;
      WdLogGlobalForLineNumber = 6027;
    }
    else
    {
      *(_DWORD *)(a1 + 68) = a2;
      *(_DWORD *)(a1 + 76) = a4;
      VidSchiUpdateDdiHwContextPriority(a1);
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6013;
    DxgkLogInternalTriageEvent(v7, 0x40000LL);
    return 3221225485LL;
  }
  return result;
}

/*
 * XREFs of VidSchSetInProcessPriorityHwContext @ 0x140102B80
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchiUpdateDdiHwContextPriority @ 0x140102D04 (VidSchiUpdateDdiHwContextPriority.c)
 */

__int64 __fastcall VidSchSetInProcessPriorityHwContext(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rcx

  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v3 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 200), 0, 0) )
    {
      WdLogSingleEntry2(3LL, v3, -1071775232LL);
      result = 3223192064LL;
      WdLogGlobalForLineNumber = 6063;
    }
    else
    {
      *(_DWORD *)(a1 + 72) = a2;
      VidSchiUpdateDdiHwContextPriority(a1);
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6049;
    DxgkLogInternalTriageEvent(v5, 0x40000LL);
    return 3221225485LL;
  }
  return result;
}

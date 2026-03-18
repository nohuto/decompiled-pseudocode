/*
 * XREFs of VidSchiMonitorRefreshPeriodFromNode @ 0x14003B668
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1400090A0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x14000F7D0 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14003B55C (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiMonitorRefreshPeriodFromNode(__int64 a1)
{
  __int64 v1; // rdi
  ULONGLONG v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(unsigned int *)(a1 + 1888);
  if ( !v3 )
  {
    result = *(unsigned int *)(*(_QWORD *)(v1 + 3432) + 83104LL);
    if ( (_DWORD)result )
      return result;
    WdLogSingleEntry1(3LL, 0LL);
    WdLogGlobalForLineNumber = 6018;
    return 16LL;
  }
  v4 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 16LL * (unsigned int)RtlFindMostSignificantBit(v3) + 2184) + 96LL)
                       + 504LL);
  if ( (unsigned int)v4 > *(_DWORD *)(v1 + 40) )
    v4 = 0LL;
  v5 = (unsigned int)v4;
  result = *(unsigned int *)(*(_QWORD *)(v1 + 8 * v4 + 3432) + 83104LL);
  if ( !(_DWORD)result )
  {
    WdLogSingleEntry1(3LL, v5);
    WdLogGlobalForLineNumber = 6042;
    return 16LL;
  }
  return result;
}

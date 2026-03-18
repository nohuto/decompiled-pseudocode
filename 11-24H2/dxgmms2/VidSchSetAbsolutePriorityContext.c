/*
 * XREFs of VidSchSetAbsolutePriorityContext @ 0x1400A7560
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchiSetPriorityContext @ 0x140047D78 (VidSchiSetPriorityContext.c)
 *     ?VidSchiCheckProcessGPUPriorityPrivilege@@YAJPEAU_VIDSCH_PROCESS@@I@Z @ 0x14004EC04 (-VidSchiCheckProcessGPUPriorityPrivilege@@YAJPEAU_VIDSCH_PROCESS@@I@Z.c)
 */

__int64 __fastcall VidSchSetAbsolutePriorityContext(struct _VIDSCH_CONTEXT *a1, unsigned int a2, char a3)
{
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 result; // rax
  __int64 v13; // rax

  if ( !a1 )
  {
    v6 = -1073741811;
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6149;
    DxgkLogInternalTriageEvent(v7, 0x40000LL);
    return v6;
  }
  if ( a2 > 0x1E )
  {
    WdLogSingleEntry2(1LL, a2, -1073741811LL);
    WdLogGlobalForLineNumber = 6160;
    DxgkLogInternalTriageEvent(v8, 0x40000LL);
  }
  v9 = *((_QWORD *)a1 + 13);
  if ( *(_BYTE *)(v9 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 200), 0, 0) )
  {
    v6 = -1071775232;
    WdLogSingleEntry2(3LL, v9, -1071775232LL);
    WdLogGlobalForLineNumber = 6171;
    return v6;
  }
  v10 = *((_QWORD *)a1 + 13);
  v11 = *(_QWORD *)(v10 + 40);
  if ( a2 < 0x1E
    || a3
    || (result = VidSchiCheckProcessGPUPriorityPrivilege(*(struct _VIDSCH_PROCESS **)(v10 + 40)), (int)result >= 0) )
  {
    if ( !*(_BYTE *)(*(_QWORD *)(v9 + 32) + 7064LL)
      || *(_BYTE *)(v11 + 2632)
      || (v13 = *(_QWORD *)(v11 + 8)) == 0
      || (*(_DWORD *)(v13 + 408) & 2) != 0 )
    {
      VidSchiSetPriorityContext(a1, a2);
    }
    return 0LL;
  }
  return result;
}

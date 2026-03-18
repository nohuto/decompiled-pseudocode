/*
 * XREFs of VidSchSetAbsolutePriorityHwContext @ 0x140117220
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?VidSchiCheckProcessGPUPriorityPrivilege@@YAJPEAU_VIDSCH_PROCESS@@I@Z @ 0x14004F274 (-VidSchiCheckProcessGPUPriorityPrivilege@@YAJPEAU_VIDSCH_PROCESS@@I@Z.c)
 *     VidSchiUpdateDdiHwContextPriority @ 0x140102D04 (VidSchiUpdateDdiHwContextPriority.c)
 */

__int64 __fastcall VidSchSetAbsolutePriorityHwContext(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rax

  if ( a1 )
  {
    if ( a2 > 0x1E )
    {
      WdLogSingleEntry2(1LL, a2, -1073741811LL);
      WdLogGlobalForLineNumber = 7865;
      DxgkLogInternalTriageEvent(v8, 0x40000LL);
    }
    v9 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v9 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 200), 0, 0) )
    {
      WdLogSingleEntry2(3LL, v9, -1071775232LL);
      result = 3223192064LL;
      WdLogGlobalForLineNumber = 7876;
    }
    else
    {
      v10 = *(_QWORD *)(v9 + 40);
      if ( a2 < 0x1E
        || a3
        || (result = VidSchiCheckProcessGPUPriorityPrivilege(*(struct _VIDSCH_PROCESS **)(v9 + 40)), (int)result >= 0) )
      {
        if ( !*(_BYTE *)(*(_QWORD *)(v9 + 32) + 7064LL)
          || *(_BYTE *)(v10 + 2632)
          || (v11 = *(_QWORD *)(v10 + 8)) == 0
          || (*(_DWORD *)(v11 + 408) & 2) != 0 )
        {
          *(_BYTE *)(a1 + 140) = 1;
          *(_DWORD *)(a1 + 136) = a2;
          VidSchiUpdateDdiHwContextPriority(a1);
        }
        return 0LL;
      }
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 7854;
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
    return 3221225485LL;
  }
  return result;
}

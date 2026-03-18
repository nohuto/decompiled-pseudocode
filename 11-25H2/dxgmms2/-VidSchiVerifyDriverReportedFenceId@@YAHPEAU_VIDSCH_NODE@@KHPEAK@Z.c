/*
 * XREFs of ?VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z @ 0x140005B3C
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x140006B60 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiVerifyDriverReportedFenceId(
        struct _VIDSCH_NODE *a1,
        unsigned int a2,
        int a3,
        unsigned int *a4)
{
  __int64 v4; // r10
  unsigned __int32 v5; // r8d
  __int64 v6; // r9
  unsigned __int32 v7; // eax
  __int64 result; // rax
  __int64 v9; // rcx

  v4 = *((_QWORD *)a1 + 3);
  if ( a3 )
  {
    v5 = *((_DWORD *)a1 + 28);
    v6 = 160LL;
  }
  else
  {
    *a4 = a2;
    v5 = *((_DWORD *)a1 + 16);
    if ( a2 == v5 || a2 == *((_DWORD *)a1 + 18) )
      return 1LL;
    v6 = 152LL;
  }
  v7 = _InterlockedCompareExchange((volatile signed __int32 *)((char *)a1 + v6), 0, 0);
  if ( v7 < v5 )
  {
    if ( a2 <= v7 )
      return 1LL;
  }
  else if ( a2 > v7 )
  {
    goto LABEL_12;
  }
  if ( a2 >= v5 )
    return 1LL;
LABEL_12:
  if ( !*(_BYTE *)(v4 + 53) )
  {
    v9 = *(_QWORD *)(v4 + 16);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 1LL, a2, v5, v9);
    WdLogGlobalForLineNumber = 906;
    JUMPOUT(0x140005BF3LL);
  }
  *((_DWORD *)a1 + 538) = 1;
  result = 0LL;
  *((_BYTE *)a1 + 2145) = 1;
  return result;
}

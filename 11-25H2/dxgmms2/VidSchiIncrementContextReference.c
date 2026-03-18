/*
 * XREFs of VidSchiIncrementContextReference @ 0x140032DF0
 * Callers:
 *     VidSchiSetTransferContextRunningTime @ 0x140023890 (VidSchiSetTransferContextRunningTime.c)
 *     ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x140031490 (-VidSchiSwitchNodeFromDevice@@YAXPEAX@Z.c)
 *     VidSchiNeedToForcePreemptNode @ 0x140031564 (VidSchiNeedToForcePreemptNode.c)
 *     VidSchiCreateContextInternal @ 0x140032228 (VidSchiCreateContextInternal.c)
 *     VidSchiReportHwHang @ 0x140046CF8 (VidSchiReportHwHang.c)
 *     VidSchiRun_PriorityTable @ 0x1400AE500 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiIncrementContextReference(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 72));
  if ( (_DWORD)result == 1 )
  {
    if ( !*(_BYTE *)(a1 + 908) )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 3840LL, a1, 0LL, 0LL);
      WdLogGlobalForLineNumber = 906;
      JUMPOUT(0x140032E5ELL);
    }
    result = *(_QWORD *)(a1 + 104);
    _InterlockedIncrement64((volatile signed __int64 *)(result + 24));
  }
  return result;
}

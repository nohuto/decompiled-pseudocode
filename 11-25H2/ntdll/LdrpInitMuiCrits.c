/*
 * XREFs of LdrpInitMuiCrits @ 0x18001FC84
 * Callers:
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x18001FBF0 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x18001FDF0 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180020030 (LdrRemoveLoadAsDataTable.c)
 *     LdrpGetLoadAsEntry @ 0x18002037C (LdrpGetLoadAsEntry.c)
 * Callees:
 *     RtlpRunOnceWaitForInit @ 0x180002444 (RtlpRunOnceWaitForInit.c)
 *     RtlReportCriticalFailure @ 0x1800041B0 (RtlReportCriticalFailure.c)
 *     RtlRunOnceComplete @ 0x180004290 (RtlRunOnceComplete.c)
 *     RtlInitializeCriticalSectionEx @ 0x1800073E0 (RtlInitializeCriticalSectionEx.c)
 */

signed __int64 __fastcall LdrpInitMuiCrits(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 result; // rax
  char v5; // bl
  signed __int64 v6; // rcx
  signed __int64 v7; // rcx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  result = LdrpInitOnceLoadAsDataCrits;
  v5 = 0;
  LOBYTE(v8) = 0;
  if ( (LdrpInitOnceLoadAsDataCrits & 3) != 2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = result & 3;
        if ( (result & 3) != 0 )
          break;
        v7 = result;
        result = _InterlockedCompareExchange64(&LdrpInitOnceLoadAsDataCrits, 1LL, result);
        if ( result == v7 )
        {
          RtlInitializeCriticalSectionEx((__int64)&LoadAsDataCrits, 0, 0LL, a4);
          result = RtlRunOnceComplete(&LdrpInitOnceLoadAsDataCrits, 0, 0LL);
          if ( (int)result >= 0 )
            return result;
          v5 = 1;
          goto LABEL_9;
        }
      }
      if ( v6 != 1 )
        break;
      result = RtlpRunOnceWaitForInit(result, &LdrpInitOnceLoadAsDataCrits);
    }
    if ( v6 != 3 )
      return result;
    LODWORD(result) = -1073741584;
LABEL_9:
    LOBYTE(v8) = v5;
    return RtlReportCriticalFailure(result, (__int64)&v8, 1);
  }
  return result;
}

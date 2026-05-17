/*
 * XREFs of LdrpInitMuiCrits @ 0x180064024
 * Callers:
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180063F90 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x180064190 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800643D0 (LdrRemoveLoadAsDataTable.c)
 *     LdrpGetLoadAsEntry @ 0x18006471C (LdrpGetLoadAsEntry.c)
 * Callees:
 *     RtlpRunOnceWaitForInit @ 0x180096DD8 (RtlpRunOnceWaitForInit.c)
 *     RtlReportCriticalFailure @ 0x180098B40 (RtlReportCriticalFailure.c)
 *     RtlRunOnceComplete @ 0x180098C20 (RtlRunOnceComplete.c)
 *     RtlInitializeCriticalSectionEx @ 0x18009BD70 (RtlInitializeCriticalSectionEx.c)
 */

signed __int64 __fastcall LdrpInitMuiCrits(__int64 a1, __int64 a2)
{
  signed __int64 result; // rax
  char v3; // bl
  signed __int64 v4; // rcx
  signed __int64 v5; // rcx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  result = LdrpInitOnceLoadAsDataCrits;
  v3 = 0;
  LOBYTE(v6) = 0;
  if ( (LdrpInitOnceLoadAsDataCrits & 3) != 2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = result & 3;
        if ( (result & 3) != 0 )
          break;
        v5 = result;
        result = _InterlockedCompareExchange64(&LdrpInitOnceLoadAsDataCrits, 1LL, result);
        if ( result == v5 )
        {
          RtlInitializeCriticalSectionEx(&LoadAsDataCrits, 0LL, 0LL);
          result = RtlRunOnceComplete(&LdrpInitOnceLoadAsDataCrits, 0LL, 0LL);
          if ( (int)result >= 0 )
            return result;
          v3 = 1;
          goto LABEL_9;
        }
      }
      if ( v4 != 1 )
        break;
      result = RtlpRunOnceWaitForInit(result, &LdrpInitOnceLoadAsDataCrits);
    }
    if ( v4 != 3 )
      return result;
    LODWORD(result) = -1073741584;
LABEL_9:
    LOBYTE(v6) = v3;
    return RtlReportCriticalFailure((unsigned int)result, &v6, 1LL);
  }
  return result;
}

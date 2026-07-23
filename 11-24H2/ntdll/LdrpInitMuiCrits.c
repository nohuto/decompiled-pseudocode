/*
 * XREFs of LdrpInitMuiCrits @ 0x180079C04
 * Callers:
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180079B70 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x180079D70 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180079FB0 (LdrRemoveLoadAsDataTable.c)
 *     LdrpGetLoadAsEntry @ 0x18007A2FC (LdrpGetLoadAsEntry.c)
 * Callees:
 *     RtlReportCriticalFailure @ 0x18002D990 (RtlReportCriticalFailure.c)
 *     RtlRunOnceComplete @ 0x18002DA70 (RtlRunOnceComplete.c)
 *     RtlInitializeCriticalSectionEx @ 0x180030BC0 (RtlInitializeCriticalSectionEx.c)
 *     RtlpRunOnceWaitForInit @ 0x1800E5590 (RtlpRunOnceWaitForInit.c)
 */

int __fastcall LdrpInitMuiCrits(__int64 a1, __int64 a2)
{
  _RTL_RUN_ONCE v2; // rax
  char v3; // bl
  __int64 v4; // rcx
  _RTL_RUN_ONCE v5; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v2.Ptr = LdrpInitOnceLoadAsDataCrits.Ptr;
  v3 = 0;
  LOBYTE(v7) = 0;
  if ( ((__int64)LdrpInitOnceLoadAsDataCrits.Ptr & 3) != 2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = (__int64)v2.Ptr & 3;
        if ( ((__int64)v2.Ptr & 3) != 0 )
          break;
        v5.Ptr = v2.Ptr;
        v2.Value = _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&LdrpInitOnceLoadAsDataCrits,
                     1LL,
                     (signed __int64)v2.Ptr);
        if ( v2.Value == v5.Value )
        {
          RtlInitializeCriticalSectionEx(&LoadAsDataCrits, 0, 0);
          LODWORD(v2.Ptr) = RtlRunOnceComplete(&LdrpInitOnceLoadAsDataCrits, 0, 0LL);
          if ( SLODWORD(v2.Ptr) >= 0 )
            return (int)v2.Ptr;
          v3 = 1;
          goto LABEL_9;
        }
      }
      if ( v4 != 1 )
        break;
      v2.Value = ((__int64 (__fastcall *)(_QWORD, _QWORD))RtlpRunOnceWaitForInit)(
                   (_RTL_RUN_ONCE)v2.Value,
                   &LdrpInitOnceLoadAsDataCrits);
    }
    if ( v4 != 3 )
      return (int)v2.Ptr;
    LODWORD(v2.Ptr) = -1073741584;
LABEL_9:
    LOBYTE(v7) = v3;
    LODWORD(v2.Ptr) = RtlReportCriticalFailure((int)v2.Ptr, (__int64)&v7, 1);
  }
  return (int)v2.Ptr;
}

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

int __fastcall LdrpInitMuiCrits(__int64 a1, __int64 a2)
{
  signed __int64 Value; // rax
  char v3; // bl
  signed __int64 v4; // rcx
  signed __int64 v5; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  Value = LdrpInitOnceLoadAsDataCrits.Value;
  v3 = 0;
  LOBYTE(v7) = 0;
  if ( ((__int64)LdrpInitOnceLoadAsDataCrits.Ptr & 3) != 2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = Value & 3;
        if ( (Value & 3) != 0 )
          break;
        v5 = Value;
        Value = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpInitOnceLoadAsDataCrits, 1LL, Value);
        if ( Value == v5 )
        {
          RtlInitializeCriticalSectionEx(&LoadAsDataCrits, 0, 0);
          LODWORD(Value) = RtlRunOnceComplete(&LdrpInitOnceLoadAsDataCrits, 0, 0LL);
          if ( (int)Value >= 0 )
            return Value;
          v3 = 1;
          goto LABEL_9;
        }
      }
      if ( v4 != 1 )
        break;
      Value = RtlpRunOnceWaitForInit(Value, (volatile signed __int64 *)&LdrpInitOnceLoadAsDataCrits);
    }
    if ( v4 != 3 )
      return Value;
    LODWORD(Value) = -1073741584;
LABEL_9:
    LOBYTE(v7) = v3;
    LODWORD(Value) = RtlReportCriticalFailure(Value, (__int64)&v7, 1);
  }
  return Value;
}

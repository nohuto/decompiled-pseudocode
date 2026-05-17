/*
 * XREFs of RtlRegisterFeatureConfigurationChangeNotification @ 0x180003190
 * Callers:
 *     RtlpFtInitialize @ 0x1801474CC (RtlpFtInitialize.c)
 * Callees:
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x18000322C (RtlpFcEnsureSubscriptionManagerStarted.c)
 *     RtlpFcAllocateChangeRegistration @ 0x180003278 (RtlpFcAllocateChangeRegistration.c)
 *     RtlpFcInsertChangeRegistration @ 0x180003314 (RtlpFcInsertChangeRegistration.c)
 *     TpPostWork @ 0x18003EF70 (TpPostWork.c)
 */

__int64 __fastcall RtlRegisterFeatureConfigurationChangeNotification(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx

  if ( byte_1801D4988 )
    return 3221226238LL;
  result = RtlpFcEnsureSubscriptionManagerStarted();
  if ( (int)result >= 0 )
  {
    v9 = RtlpFcAllocateChangeRegistration(a1, a2);
    v11 = v9;
    if ( v9 )
    {
      RtlpFcInsertChangeRegistration(v10, v9);
      if ( a3 )
      {
        if ( MEMORY[0x7FFE0720] != *a3 )
          TpPostWork(*(_QWORD *)(v11 + 40));
      }
      *a4 = v11;
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}

/*
 * XREFs of RtlRegisterFeatureConfigurationChangeNotification @ 0x180097B20
 * Callers:
 *     RtlpFtInitialize @ 0x180145F1C (RtlpFtInitialize.c)
 * Callees:
 *     RtlpFcEnsureSubscriptionManagerStarted @ 0x180097BBC (RtlpFcEnsureSubscriptionManagerStarted.c)
 *     RtlpFcAllocateChangeRegistration @ 0x180097C08 (RtlpFcAllocateChangeRegistration.c)
 *     RtlpFcInsertChangeRegistration @ 0x180097CA4 (RtlpFcInsertChangeRegistration.c)
 *     TpPostWork @ 0x1800D6E00 (TpPostWork.c)
 */

__int64 __fastcall RtlRegisterFeatureConfigurationChangeNotification(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  if ( byte_1801D2908 )
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
          TpPostWork(*(_QWORD *)(v11 + 40), v12, v13, v14);
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

/*
 * XREFs of RtlpFcReferenceFeatureConfigurationBuffers @ 0x18009F69C
 * Callers:
 *     RtlNotifyFeatureUsage @ 0x18009F110 (RtlNotifyFeatureUsage.c)
 *     RtlQueryFeatureConfiguration @ 0x18009F560 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryAllFeatureConfigurations @ 0x1800A02B0 (RtlQueryAllFeatureConfigurations.c)
 *     RtlQueryFeatureUsageNotificationSubscriptions @ 0x1800A0430 (RtlQueryFeatureUsageNotificationSubscriptions.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x18011E080 (RtlQueryInternalFeatureConfiguration.c)
 *     RtlQueryAllInternalFeatureConfigurations @ 0x180148850 (RtlQueryAllInternalFeatureConfigurations.c)
 *     RtlQueryAllInternalRuntimeFeatureConfigurations @ 0x180148900 (RtlQueryAllInternalRuntimeFeatureConfigurations.c)
 * Callees:
 *     RtlBackoff @ 0x18009EE30 (RtlBackoff.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18009F7F0 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x18009F820 (RtlpFcUpdateLocalConfiguration.c)
 */

__int64 __fastcall RtlpFcReferenceFeatureConfigurationBuffers(__int64 a1, __int64 a2, unsigned __int64 *a3, _QWORD *a4)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // rtt
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8
  char *v10; // rax
  __int64 result; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rtt
  unsigned __int64 v14; // rcx
  unsigned int v15[10]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int i; // [rsp+50h] [rbp+8h] BYREF
  int v17; // [rsp+54h] [rbp+Ch]

  v17 = HIDWORD(a1);
  for ( i = 0; ; RtlBackoff(&i) )
  {
    _m_prefetchw(&xmmword_1801D5CE8);
    v6 = xmmword_1801D5CE8 & 1 | ((xmmword_1801D5CE8 & 0xFFFFFFFFFFFFFFFEuLL) + 2);
    if ( v6 < 2 )
LABEL_14:
      __fastfail(0xEu);
    v7 = xmmword_1801D5CE8;
    if ( v7 == _InterlockedCompareExchange64((volatile signed __int64 *)&xmmword_1801D5CE8, v6, xmmword_1801D5CE8) )
      break;
  }
  v8 = v6 & 1;
  v9 = *((_QWORD *)&RtlpFcProcessManager + v8 + 28);
  v10 = (char *)&unk_1801D5D00 + 96 * v8;
  if ( v9 >= MEMORY[0x7FFE0720] )
    goto LABEL_5;
  RtlpFcBufferManagerDereferenceBuffers(&xmmword_1801D5CE8, (char *)&unk_1801D5D00 + 96 * v8);
  result = RtlpFcUpdateLocalConfiguration(&RtlpFcProcessManager);
  if ( (int)result >= 0 )
  {
    v15[0] = 0;
    while ( 1 )
    {
      _m_prefetchw(&xmmword_1801D5CE8);
      v12 = xmmword_1801D5CE8 & 1 | ((xmmword_1801D5CE8 & 0xFFFFFFFFFFFFFFFEuLL) + 2);
      if ( v12 < 2 )
        goto LABEL_14;
      v13 = xmmword_1801D5CE8;
      if ( v13 == _InterlockedCompareExchange64((volatile signed __int64 *)&xmmword_1801D5CE8, v12, xmmword_1801D5CE8) )
        break;
      RtlBackoff(v15);
    }
    v14 = v12 & 1;
    v9 = *((_QWORD *)&RtlpFcProcessManager + v14 + 28);
    v10 = (char *)&unk_1801D5D00 + 96 * v14;
LABEL_5:
    *a4 = v10;
    result = 0LL;
    *a3 = v9;
  }
  return result;
}

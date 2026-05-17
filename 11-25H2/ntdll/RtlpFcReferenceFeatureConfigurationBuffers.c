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

__int64 __fastcall RtlpFcReferenceFeatureConfigurationBuffers(__int64 a1, char a2, unsigned __int64 *a3, _QWORD *a4)
{
  unsigned __int64 v7; // rcx
  __int64 v8; // rtt
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  __int64 v11; // rbx
  char *v12; // rax
  __int64 result; // rax
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  __int64 v16; // rtt
  unsigned __int64 v17; // rcx
  unsigned int v18[10]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int i; // [rsp+50h] [rbp+8h] BYREF
  int v20; // [rsp+54h] [rbp+Ch]

  v20 = HIDWORD(a1);
  for ( i = 0; ; RtlBackoff(&i) )
  {
    _m_prefetchw(&xmmword_1801D5CE8);
    v7 = xmmword_1801D5CE8 & 1 | ((xmmword_1801D5CE8 & 0xFFFFFFFFFFFFFFFEuLL) + 2);
    if ( v7 < 2 )
LABEL_14:
      __fastfail(0xEu);
    v8 = xmmword_1801D5CE8;
    if ( v8 == _InterlockedCompareExchange64((volatile signed __int64 *)&xmmword_1801D5CE8, v7, xmmword_1801D5CE8) )
      break;
  }
  v9 = v7 & 1;
  v10 = RtlpFcProcessManager[v9 + 28];
  v11 = MEMORY[0x7FFE0720];
  v12 = (char *)&unk_1801D5D00 + 96 * v9;
  if ( v10 >= MEMORY[0x7FFE0720] )
    goto LABEL_5;
  RtlpFcBufferManagerDereferenceBuffers(&xmmword_1801D5CE8, (char *)&unk_1801D5D00 + 96 * v9);
  LOBYTE(v14) = a2;
  result = RtlpFcUpdateLocalConfiguration(RtlpFcProcessManager, v11, v14);
  if ( (int)result >= 0 )
  {
    v18[0] = 0;
    while ( 1 )
    {
      _m_prefetchw(&xmmword_1801D5CE8);
      v15 = xmmword_1801D5CE8 & 1 | ((xmmword_1801D5CE8 & 0xFFFFFFFFFFFFFFFEuLL) + 2);
      if ( v15 < 2 )
        goto LABEL_14;
      v16 = xmmword_1801D5CE8;
      if ( v16 == _InterlockedCompareExchange64((volatile signed __int64 *)&xmmword_1801D5CE8, v15, xmmword_1801D5CE8) )
        break;
      RtlBackoff(v18);
    }
    v17 = v15 & 1;
    v10 = RtlpFcProcessManager[v17 + 28];
    v12 = (char *)&unk_1801D5D00 + 96 * v17;
LABEL_5:
    *a4 = v12;
    result = 0LL;
    *a3 = v10;
  }
  return result;
}

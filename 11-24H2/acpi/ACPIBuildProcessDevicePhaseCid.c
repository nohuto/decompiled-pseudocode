/*
 * XREFs of ACPIBuildProcessDevicePhaseCid @ 0x140020890
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x14001E380 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIConvertStringDelimitation @ 0x140020580 (ACPIConvertStringDelimitation.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseCid(__int64 a1)
{
  char *v1; // rdi
  __int64 v3; // rbx
  unsigned int i; // esi
  __int64 v5; // r14
  const char *v6; // rdx
  const char *v7; // rax
  int v8; // r14d
  __int64 v9; // rsi
  const char *v10; // rax
  __int64 v11; // rdx
  const char *v12; // rcx

  v1 = *(char **)(a1 + 128);
  v3 = *(_QWORD *)(a1 + 40);
  ACPIConvertStringDelimitation((__int64)v1);
  if ( v1 )
  {
    for ( i = 0; ; ++i )
    {
      v5 = 4LL * i;
      v6 = (&AcpiInternalDeviceFlagTable)[v5];
      if ( !v6 )
        break;
      if ( strstr(v1, v6) )
      {
        _InterlockedOr64((volatile signed __int64 *)(v3 + 8), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v5 + 1]);
        _InterlockedOr64(
          (volatile signed __int64 *)(v3 + 1120),
          (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v5 + 2]);
        break;
      }
    }
  }
  if ( _bittest64((const signed __int64 *)(v3 + 8), 0x2Du) )
  {
    if ( *(_QWORD *)(v3 + 608) )
    {
      v7 = AcpiInternalDeviceFlagTable;
      v8 = 0;
      if ( AcpiInternalDeviceFlagTable )
      {
        v9 = 0LL;
        do
        {
          if ( strstr(*(const char **)(v3 + 608), v7) )
            _InterlockedAnd64((volatile signed __int64 *)(v3 + 8), ~(__int64)(&AcpiInternalDeviceFlagTable)[v9 + 3]);
          v9 = 4LL * (unsigned int)++v8;
          v7 = (&AcpiInternalDeviceFlagTable)[v9];
        }
        while ( v7 );
      }
    }
  }
  if ( ((*(_DWORD *)(v3 + 8) & 0x2000000) == 0
     || _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 200), (signed __int64)v1, 0LL))
    && v1 )
  {
    ExFreePoolWithTag(v1, 0);
  }
  *(_DWORD *)(a1 + 32) = 10;
  v10 = byte_1400753E8;
  v11 = *(_QWORD *)(v3 + 8);
  v12 = byte_1400753E8;
  if ( (v11 & 0x200000000000LL) != 0 )
  {
    v10 = *(const char **)(v3 + 608);
    if ( (v11 & 0x400000000000LL) != 0 )
      v12 = *(const char **)(v3 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x22u,
      (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
      0,
      v3,
      v10,
      v12);
  ACPIBuildCompleteMustSucceed(0LL, 0, 0LL, a1);
  return 0LL;
}

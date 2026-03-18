/*
 * XREFs of ACPIBuildProcessSynchronizationList @ 0x14002AB4C
 * Callers:
 *     ACPIBuildDeviceDpc @ 0x14002A280 (ACPIBuildDeviceDpc.c)
 * Callees:
 *     ACPIBuildProcessGenericComplete @ 0x14002AC50 (ACPIBuildProcessGenericComplete.c)
 *     WPP_RECORDER_SF_sqss @ 0x1400441C4 (WPP_RECORDER_SF_sqss.c)
 */

__int64 ACPIBuildProcessSynchronizationList()
{
  PVOID *v0; // rbx
  char v1; // di
  PVOID *v3; // rsi
  PVOID v4; // rax
  const char *v5; // rdx
  __int64 v6; // rcx

  v0 = (PVOID *)AcpiBuildSynchronizationList;
  v1 = 1;
  while ( v0 != &AcpiBuildSynchronizationList )
  {
    v3 = v0;
    v0 = (PVOID *)*v0;
    if ( *(PVOID *)v3[10] == v3[10] )
    {
      v4 = v3[5];
      v5 = byte_1400753E8;
      if ( v4 )
      {
        v6 = *((_QWORD *)v4 + 1);
        if ( (v6 & 0x200000000000LL) != 0 && (v6 & 0x400000000000LL) != 0 )
          v5 = (const char *)*((_QWORD *)v4 + 77);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_sqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v5, 6, 71);
      }
      ACPIBuildProcessGenericComplete(v3);
    }
    else
    {
      v1 = 0;
    }
  }
  return v1 == 0 ? 0x103 : 0;
}

/*
 * XREFs of NdisIfDeregisterProvider @ 0x1400C9100
 * Callers:
 *     ?ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ @ 0x140148824 (-ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __stdcall NdisIfDeregisterProvider(NDIS_HANDLE NdisProviderHandle)
{
  KIRQL v2; // di
  NDIS_HANDLE *v3; // r9
  NDIS_HANDLE *v4; // r8

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      12,
      (struct _GUID *)&WPP_05716c62bb2536c54c77dd3b41b95439_Traceguids,
      (char)NdisProviderHandle);
  if ( *((NDIS_HANDLE *)NdisProviderHandle + 3) != (char *)NdisProviderHandle + 24 )
    ndisBugCheckEx(0x17uLL, (ULONG_PTR)NdisProviderHandle, 0LL, 0LL);
  *(_BYTE *)NdisProviderHandle = ~*(_BYTE *)NdisProviderHandle;
  v2 = KeAcquireSpinLockRaiseToDpc(&qword_14011CA88);
  v3 = (NDIS_HANDLE *)*((_QWORD *)NdisProviderHandle + 1);
  if ( v3[1] != (char *)NdisProviderHandle + 8
    || (v4 = (NDIS_HANDLE *)*((_QWORD *)NdisProviderHandle + 2), *v4 != (char *)NdisProviderHandle + 8) )
  {
    __fastfail(3u);
  }
  *v4 = v3;
  v3[1] = v4;
  ExFreePoolWithTag(NdisProviderHandle, 0);
  KeReleaseSpinLock(&qword_14011CA88, v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      13,
      (struct _GUID *)&WPP_05716c62bb2536c54c77dd3b41b95439_Traceguids,
      (char)NdisProviderHandle);
}

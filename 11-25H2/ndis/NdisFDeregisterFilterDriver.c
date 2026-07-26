/*
 * XREFs of NdisFDeregisterFilterDriver @ 0x1400A3DC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1400187A0 (-ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     ?ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z @ 0x1400860B0 (-ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z.c)
 *     ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x14014E244 (-SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __stdcall NdisFDeregisterFilterDriver(NDIS_HANDLE NdisFilterDriverHandle)
{
  enum CallRunMode v2; // r8d

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      24,
      (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
      (char)NdisFilterDriverHandle);
  ndisWaitForKernelObject(&ndisPnPMutex);
  NDIS_BIND_FILTER_DRIVER::SetRunningDriver(*((NDIS_BIND_FILTER_DRIVER **)NdisFilterDriverHandle + 42), 0LL, v2);
  if ( ndisCloseRef((PKSPIN_LOCK)NdisFilterDriverHandle + 9) )
    ndisDereferenceFilterDriver((struct _NDIS_FILTER_DRIVER_BLOCK *)NdisFilterDriverHandle, 0, 0xFFu);
  KeReleaseMutex(&ndisPnPMutex, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      25,
      (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
      (char)NdisFilterDriverHandle);
}

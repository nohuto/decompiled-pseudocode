/*
 * XREFs of DpiFdoGetVirtualGpuType @ 0x14040C6E4
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x14006176C (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?DpiSetPartitionFlexIovVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x14007C90C (-DpiSetPartitionFlexIovVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     DpiLiveMigrationWaitForFence @ 0x14007D154 (DpiLiveMigrationWaitForFence.c)
 *     DpiFdoDispatchIoctl @ 0x140237020 (DpiFdoDispatchIoctl.c)
 *     DpiFlexIovMitigationUpdate @ 0x140241FF4 (DpiFlexIovMitigationUpdate.c)
 *     DpiSriovAttach @ 0x1402425B8 (DpiSriovAttach.c)
 *     DpiSriovNotification @ 0x140242A44 (DpiSriovNotification.c)
 *     DpiFdoDispatchCleanupAndClose @ 0x1402BA580 (DpiFdoDispatchCleanupAndClose.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiFdoGetVirtualGpuType(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 v3; // rcx
  unsigned int v4; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\GPUPARAV");
  v3 = *(_QWORD *)(v1 + 48);
  v4 = 0;
  if ( !v3 )
    return 0LL;
  LOBYTE(v2) = 1;
  LOBYTE(v4) = RtlFindUnicodeSubstring(v3 + 88, &DestinationString, v2) != 0;
  return v4;
}

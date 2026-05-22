/*
 * XREFs of _Init_thread_footer @ 0x18009D928
 * Callers:
 *     ?GetInstance@KernelContextProvider@@SAPEAV1@XZ @ 0x18000D544 (-GetInstance@KernelContextProvider@@SAPEAV1@XZ.c)
 *     ?GetInstance@InputConfigContextProvider@@SAPEAV1@XZ @ 0x18000F93C (-GetInstance@InputConfigContextProvider@@SAPEAV1@XZ.c)
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x18001CD30 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 *     NotifyInputSinkTransformChanged @ 0x180048CA0 (NotifyInputSinkTransformChanged.c)
 *     ?GetInstance@InputSinkDataCache@@SAAEAV1@XZ @ 0x18004B940 (-GetInstance@InputSinkDataCache@@SAAEAV1@XZ.c)
 *     ?CalculateElapsedMicroseconds@InputETW@@SA_K_K0@Z @ 0x180082380 (-CalculateElapsedMicroseconds@InputETW@@SA_K_K0@Z.c)
 *     ?GetInstance@CUIHierarchy@@SAAEAV1@XZ @ 0x18009AFA4 (-GetInstance@CUIHierarchy@@SAAEAV1@XZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E817C (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?GetPanelIdFromDeviceInterfaceId@PanelHelper@@SAJPEBG_KPEAG@Z @ 0x180109E74 (-GetPanelIdFromDeviceInterfaceId@PanelHelper@@SAJPEBG_KPEAG@Z.c)
 *     ?Initialize@RotationWatcher@@SAJXZ @ 0x18010B6BC (-Initialize@RotationWatcher@@SAJXZ.c)
 *     ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x1801A12E8 (-GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ.c)
 *     ?GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ @ 0x1801A1DC0 (-GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_footer(_DWORD *a1)
{
  __int64 v2; // rdx

  EnterCriticalSection(&CriticalSection);
  v2 = (unsigned int)tls_index;
  *a1 = ++Init_global_epoch;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v2) + 32LL) = Init_global_epoch;
  LeaveCriticalSection(&CriticalSection);
  return Init_thread_notify();
}

/*
 * XREFs of _Init_thread_header @ 0x18009D7C0
 * Callers:
 *     ?GetInstance@KernelContextProvider@@SAPEAV1@XZ @ 0x18000CDE4 (-GetInstance@KernelContextProvider@@SAPEAV1@XZ.c)
 *     ?GetInstance@InputConfigContextProvider@@SAPEAV1@XZ @ 0x18000F1DC (-GetInstance@InputConfigContextProvider@@SAPEAV1@XZ.c)
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x18001C760 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 *     NotifyInputSinkTransformChanged @ 0x18004C210 (NotifyInputSinkTransformChanged.c)
 *     ?GetInstance@InputSinkDataCache@@SAAEAV1@XZ @ 0x18004F4C0 (-GetInstance@InputSinkDataCache@@SAAEAV1@XZ.c)
 *     ?CalculateElapsedMicroseconds@InputETW@@SA_K_K0@Z @ 0x1800822E0 (-CalculateElapsedMicroseconds@InputETW@@SA_K_K0@Z.c)
 *     ?GetInstance@CUIHierarchy@@SAAEAV1@XZ @ 0x18009AE04 (-GetInstance@CUIHierarchy@@SAAEAV1@XZ.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800E6D0C (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?GetPanelIdFromDeviceInterfaceId@PanelHelper@@SAJPEBG_KPEAG@Z @ 0x180107F6C (-GetPanelIdFromDeviceInterfaceId@PanelHelper@@SAJPEBG_KPEAG@Z.c)
 *     ?Initialize@RotationWatcher@@SAJXZ @ 0x1801097AC (-Initialize@RotationWatcher@@SAJXZ.c)
 *     ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x180199CF8 (-GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ.c)
 *     ?GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ @ 0x18019A7D0 (-GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ.c)
 * Callees:
 *     _Init_thread_wait_v2 @ 0x18009D870 (_Init_thread_wait_v2.c)
 */

void __fastcall Init_thread_header(_DWORD *a1)
{
  EnterCriticalSection(&CriticalSection);
  while ( 1 )
  {
    if ( !*a1 )
    {
      *a1 = -1;
      goto LABEL_7;
    }
    if ( *a1 != -1 )
      break;
    Init_thread_wait_v2();
  }
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 32LL) = Init_global_epoch;
LABEL_7:
  LeaveCriticalSection(&CriticalSection);
}

/*
 * XREFs of ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x1800A24AC
 * Callers:
 *     ??1ResultException@wil@@UEAA@XZ @ 0x18009F528 (--1ResultException@wil@@UEAA@XZ.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x1800A1910 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z @ 0x1800A2414 (-assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z.c)
 *     ?what@ResultException@wil@@UEBAPEBDXZ @ 0x1800A2510 (-what@ResultException@wil@@UEBAPEBDXZ.c)
 *     ??_GStoredFailureInfo@wil@@QEAAPEAXI@Z @ 0x1800A45FC (--_GStoredFailureInfo@wil@@QEAAPEAXI@Z.c)
 *     ??1?$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800D1FC0 (--1-$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 *     ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x180106250 (-NotifyFailure@-$test_watcher@V-$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@V.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::shared_buffer::reset(volatile signed __int32 **this)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rbx
  HANDLE ProcessHeap; // rax

  v2 = *this;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *this;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, (LPVOID)v3);
    }
    *this = 0LL;
    this[1] = 0LL;
  }
}

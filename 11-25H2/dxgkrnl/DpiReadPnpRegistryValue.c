/*
 * XREFs of DpiReadPnpRegistryValue @ 0x140384310
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018D7A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     DxgkCheckGpuVirtualizationCaps @ 0x14019DC50 (DxgkCheckGpuVirtualizationCaps.c)
 *     ?DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HPEAI@Z @ 0x1401D6334 (-DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HPEAI@Z.c)
 *     DpiAddDevice @ 0x1402329D0 (DpiAddDevice.c)
 *     DpiFdoHandleStartDevice @ 0x14023ADA0 (DpiFdoHandleStartDevice.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x14023D608 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     DpiFdoQuerySysMmAdapterCaps @ 0x14023E0DC (DpiFdoQuerySysMmAdapterCaps.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1403827C0 (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x140382BE0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?OemSpecifiedViewDist@@YAIQEAX@Z @ 0x1403842A8 (-OemSpecifiedViewDist@@YAIQEAX@Z.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1403845FC (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14038F660 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1403A6D68 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 * Callees:
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DpiOpenPnpRegistryKey @ 0x1403844B0 (DpiOpenPnpRegistryKey.c)
 */

__int64 __fastcall DpiReadPnpRegistryValue(__int64 a1, const WCHAR *a2, char *a3, unsigned int a4, unsigned int a5)
{
  __int64 v8; // r9
  unsigned int *Pool2; // rsi
  int v10; // ebx
  NTSTATUS v11; // eax
  __int64 v13; // rbx
  size_t v14; // r8
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-28h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+8h] BYREF
  ULONG Length; // [rsp+78h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  Length = a4 + 16;
  Pool2 = (unsigned int *)ExAllocatePool2(256LL, a4 + 16, 1953656900LL, v8);
  if ( Pool2 )
  {
    v10 = DpiOpenPnpRegistryKey(a1, a5, 131097LL, &KeyHandle);
    if ( v10 >= 0 )
    {
      v11 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Pool2, Length, &Length);
      v10 = v11;
      if ( (int)(v11 + 0x80000000) < 0 || v11 == -2147483643 )
      {
        v13 = Pool2[2];
        v14 = a4;
        if ( a4 > (unsigned int)v13 )
          v14 = (unsigned int)v13;
        memmove(a3, Pool2 + 3, v14);
        if ( a4 > (unsigned int)v13 )
          memset(&a3[v13], 0, a4 - (unsigned int)v13);
        v10 = 0;
      }
      else
      {
        WdLogSingleEntry4(4LL, v11, (int)a5, 0LL, 0LL);
        WdLogGlobalForLineNumber = 3261;
      }
    }
  }
  else
  {
    v10 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 3184;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v10;
}

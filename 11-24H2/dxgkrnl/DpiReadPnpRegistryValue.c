/*
 * XREFs of DpiReadPnpRegistryValue @ 0x14036B708
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018FAF8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     DxgkCheckGpuVirtualizationCaps @ 0x1401A0178 (DxgkCheckGpuVirtualizationCaps.c)
 *     ?DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HPEAI@Z @ 0x1401DB5C4 (-DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HPEAI@Z.c)
 *     DpiAddDevice @ 0x1402393B0 (DpiAddDevice.c)
 *     DpiFdoHandleStartDevice @ 0x1402418B0 (DpiFdoHandleStartDevice.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1402441F8 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     DpiFdoQuerySysMmAdapterCaps @ 0x140244DA4 (DpiFdoQuerySysMmAdapterCaps.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x14030DAE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x140369B90 (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x140369FB0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?OemSpecifiedViewDist@@YAIQEAX@Z @ 0x14036B6A0 (-OemSpecifiedViewDist@@YAIQEAX@Z.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x14036B9EC (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x140383210 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DpiOpenPnpRegistryKey @ 0x14036B8A0 (DpiOpenPnpRegistryKey.c)
 */

__int64 __fastcall DpiReadPnpRegistryValue(__int64 a1, const WCHAR *a2, char *a3, unsigned int a4, unsigned int a5)
{
  unsigned int *Pool2; // rsi
  int v9; // ebx
  NTSTATUS v10; // eax
  __int64 v12; // rbx
  size_t v13; // r8
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-28h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+8h] BYREF
  ULONG Length; // [rsp+78h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  Length = a4 + 16;
  Pool2 = (unsigned int *)ExAllocatePool2(256LL, a4 + 16, 1953656900LL);
  if ( Pool2 )
  {
    v9 = DpiOpenPnpRegistryKey(a1, a5, 131097LL, &KeyHandle);
    if ( v9 >= 0 )
    {
      v10 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Pool2, Length, &Length);
      v9 = v10;
      if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
      {
        v12 = Pool2[2];
        v13 = a4;
        if ( a4 > (unsigned int)v12 )
          v13 = (unsigned int)v12;
        memmove(a3, Pool2 + 3, v13);
        if ( a4 > (unsigned int)v12 )
          memset(&a3[v12], 0, a4 - (unsigned int)v12);
        v9 = 0;
      }
      else
      {
        WdLogSingleEntry4(4LL, v10, (int)a5, 0LL, 0LL);
        WdLogGlobalForLineNumber = 3386;
      }
    }
  }
  else
  {
    v9 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 3309;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v9;
}

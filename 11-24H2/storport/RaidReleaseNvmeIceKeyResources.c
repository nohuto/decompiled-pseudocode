/*
 * XREFs of RaidReleaseNvmeIceKeyResources @ 0x14006AB70
 * Callers:
 *     RaidUnitCompleteRequest @ 0x14001F490 (RaidUnitCompleteRequest.c)
 *     RaUnitAsyncError @ 0x140029460 (RaUnitAsyncError.c)
 *     RaidUnitProcessBusyRequest @ 0x140031200 (RaidUnitProcessBusyRequest.c)
 *     RaidUnitCompleteResetRequest @ 0x14003C670 (RaidUnitCompleteResetRequest.c)
 *     RaUnitStartIo @ 0x14004E6F0 (RaUnitStartIo.c)
 *     RaUnitStartResetIo @ 0x14009942C (RaUnitStartResetIo.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall RaidReleaseNvmeIceKeyResources(__int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rax

  if ( *(_DWORD *)(a2 + 800) != -1 )
  {
    if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
      v4 = *(_QWORD *)(a1 + 3600);
    else
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 6192LL);
    if ( _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v4 + 72) + 72LL * *(unsigned int *)(a2 + 800) + 36)) < 0 )
      KeBugCheckEx(0x176u, 2uLL, 1uLL, a2, v4 + 56);
  }
  return 0LL;
}

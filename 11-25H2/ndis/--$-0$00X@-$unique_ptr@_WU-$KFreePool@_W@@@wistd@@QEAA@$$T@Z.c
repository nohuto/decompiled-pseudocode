/*
 * XREFs of ??$?0$00X@?$unique_ptr@_WU?$KFreePool@_W@@@wistd@@QEAA@$$T@Z @ 0x14009C2D8
 * Callers:
 *     ??$MakePoolPtrNP@VNdisWdfIdle@@@@YA?AV?$unique_ptr@VNdisWdfIdle@@U?$KFreePoolNP@VNdisWdfIdle@@@@@wistd@@K@Z @ 0x14000166C (--$MakePoolPtrNP@VNdisWdfIdle@@@@YA-AV-$unique_ptr@VNdisWdfIdle@@U-$KFreePoolNP@VNdisWdfIdle@@@@.c)
 *     ??$MakePoolPtrNP@U_NDIS_SG_DMA_BLOCK@@@@YA?AV?$unique_ptr@U_NDIS_SG_DMA_BLOCK@@U?$KFreePoolNP@U_NDIS_SG_DMA_BLOCK@@@@@wistd@@K@Z @ 0x140003C34 (--$MakePoolPtrNP@U_NDIS_SG_DMA_BLOCK@@@@YA-AV-$unique_ptr@U_NDIS_SG_DMA_BLOCK@@U-$KFreePoolNP@U_.c)
 *     ndisWdfOpenConfiguration @ 0x140141A3C (ndisWdfOpenConfiguration.c)
 *     ??$MakeSizedPoolPtr@E@@YA?AV?$unique_ptr@EU?$KFreePool@E@@@wistd@@K_K@Z @ 0x140142850 (--$MakeSizedPoolPtr@E@@YA-AV-$unique_ptr@EU-$KFreePool@E@@@wistd@@K_K@Z.c)
 *     ??$MakeSizedPoolPtr@_W@@YA?AV?$unique_ptr@_WU?$KFreePool@_W@@@wistd@@K_K@Z @ 0x140142DB0 (--$MakeSizedPoolPtr@_W@@YA-AV-$unique_ptr@_WU-$KFreePool@_W@@@wistd@@K_K@Z.c)
 *     ??$MakeExtendedPoolPtr@U_NDIS_PM_PACKET_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_PACKET_PATTERN@@U?$KFreePool@U_NDIS_PM_PACKET_PATTERN@@@@@wistd@@KKPEAK@Z @ 0x14014A844 (--$MakeExtendedPoolPtr@U_NDIS_PM_PACKET_PATTERN@@@@YA-AV-$unique_ptr@U_NDIS_PM_PACKET_PATTERN@@U.c)
 *     ??$MakeExtendedPoolPtr@U_NDIS_PM_WOL_PATTERN@@@@YA?AV?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@KKPEAK@Z @ 0x14014A91C (--$MakeExtendedPoolPtr@U_NDIS_PM_WOL_PATTERN@@@@YA-AV-$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U-$KFre.c)
 *     ??$MakePoolPtr@U_NDIS_WOL_XLATION_CONTEXT@@@@YA?AV?$unique_ptr@U_NDIS_WOL_XLATION_CONTEXT@@U?$KFreePool@U_NDIS_WOL_XLATION_CONTEXT@@@@@wistd@@K@Z @ 0x14014AA0C (--$MakePoolPtr@U_NDIS_WOL_XLATION_CONTEXT@@@@YA-AV-$unique_ptr@U_NDIS_WOL_XLATION_CONTEXT@@U-$KF.c)
 *     ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x14014C32C (-ndisAllocateNumaStripedPages@@YAPEAXXZ.c)
 *     ??$MakePoolPtr@UNDIS_IF_UPDATE_CONTEXT@@@@YA?AV?$unique_ptr@UNDIS_IF_UPDATE_CONTEXT@@U?$KFreePool@UNDIS_IF_UPDATE_CONTEXT@@@@@wistd@@K@Z @ 0x140152518 (--$MakePoolPtr@UNDIS_IF_UPDATE_CONTEXT@@@@YA-AV-$unique_ptr@UNDIS_IF_UPDATE_CONTEXT@@U-$KFreePoo.c)
 *     ??$MakeSizedPoolPtr@VExecutionContextCpuKnobCollection@@@@YA?AV?$unique_ptr@VExecutionContextCpuKnobCollection@@U?$KFreePool@VExecutionContextCpuKnobCollection@@@@@wistd@@K_K@Z @ 0x1401544EC (--$MakeSizedPoolPtr@VExecutionContextCpuKnobCollection@@@@YA-AV-$unique_ptr@VExecutionContextCpu.c)
 *     ??$MakeSizedPoolPtr@VInterfaceProfileKnobCollection@@@@YA?AV?$unique_ptr@VInterfaceProfileKnobCollection@@U?$KFreePool@VInterfaceProfileKnobCollection@@@@@wistd@@K_K@Z @ 0x140154570 (--$MakeSizedPoolPtr@VInterfaceProfileKnobCollection@@@@YA-AV-$unique_ptr@VInterfaceProfileKnobCo.c)
 *     ??$MakeSizedPoolPtr@VNetSetupKnobCollection@@@@YA?AV?$unique_ptr@VNetSetupKnobCollection@@U?$KFreePool@VNetSetupKnobCollection@@@@@wistd@@K_K@Z @ 0x1401545F4 (--$MakeSizedPoolPtr@VNetSetupKnobCollection@@@@YA-AV-$unique_ptr@VNetSetupKnobCollection@@U-$KFr.c)
 * Callees:
 *     ??$?0PEAU_NDIS_PM_WOL_PATTERN@@$00@?$__compressed_pair@PEAU_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@QEAA@$$QEAPEAU_NDIS_PM_WOL_PATTERN@@@Z @ 0x14006E440 (--$-0PEAU_NDIS_PM_WOL_PATTERN@@$00@-$__compressed_pair@PEAU_NDIS_PM_WOL_PATTERN@@U-$KFreePool@U_.c)
 */

__int64 __fastcall wistd::unique_ptr<wchar_t,KFreePool<wchar_t>>::unique_ptr<wchar_t,KFreePool<wchar_t>>(_QWORD *a1)
{
  __int64 v1; // rcx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  wistd::__compressed_pair<_NDIS_PM_WOL_PATTERN *,KFreePool<_NDIS_PM_WOL_PATTERN>>::__compressed_pair<_NDIS_PM_WOL_PATTERN *,KFreePool<_NDIS_PM_WOL_PATTERN>>(
    a1,
    &v3);
  return v1;
}

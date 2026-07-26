/*
 * XREFs of ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x14015DF50
 * Callers:
 *     ?reserve@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@QEAA_N_K@Z @ 0x140002FE8 (-reserve@-$KArray@V-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ??_G?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1400646D0 (--_G-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wist.c)
 *     ??1_NDIS_FILTER_DRIVER_BLOCK@@QEAA@XZ @ 0x1400999E4 (--1_NDIS_FILTER_DRIVER_BLOCK@@QEAA@XZ.c)
 *     NdisFRegisterFilterDriver @ 0x14009AD80 (NdisFRegisterFilterDriver.c)
 *     ??$allocate@$$V@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAA_NXZ @ 0x1401355D0 (--$allocate@$$V@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAA_NXZ.c)
 *     ?AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z @ 0x14015D9E0 (-AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z.c)
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x14015DAC0 (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@U.c)
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x14015DBC0 (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 *     ?reset@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x14015DD40 (-reset@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x14015DD80 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 * Callees:
 *     ??1NDIS_BIND_FILTER_DRIVER@@QEAA@XZ @ 0x140137DE4 (--1NDIS_BIND_FILTER_DRIVER@@QEAA@XZ.c)
 */

void __fastcall KRef<NDIS_BIND_FILTER_DRIVER>::unref(__int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 64), 0xFFFFFFFF) == 1 )
    {
      NDIS_BIND_FILTER_DRIVER::~NDIS_BIND_FILTER_DRIVER((NDIS_BIND_FILTER_DRIVER *)v1);
      ExFreePoolWithTag((PVOID)v1, 0x446C4642u);
    }
  }
}

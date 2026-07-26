/*
 * XREFs of ?resize@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x140055770
 * Callers:
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x140154760 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1401556B0 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 * Callees:
 *     ?reserve@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x1400557A0 (-reserve@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 */

char __fastcall Rtl::KArray<void *,1>::resize(__int64 a1)
{
  if ( !(unsigned __int8)Rtl::KArray<void *,1>::reserve(a1, 0LL) )
    return 0;
  *(_DWORD *)(a1 + 4) = 0;
  return 1;
}

/*
 * XREFs of ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1400AF070
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x14007F870 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     ?NdisTraceLoggingChecksumHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1400737B0 (-NdisTraceLoggingChecksumHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingChecksumConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1400739C0 (-NdisTraceLoggingChecksumConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingGreTaskHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1400AE63C (-NdisTraceLoggingGreTaskHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingGreTaskeConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1400AE70C (-NdisTraceLoggingGreTaskeConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingLsoV2ConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1400AE7DC (-NdisTraceLoggingLsoV2ConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingLsoV2HardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1400AE8D4 (-NdisTraceLoggingLsoV2HardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingRscConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1400AF440 (-NdisTraceLoggingRscConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingRscHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1400AF4C8 (-NdisTraceLoggingRscHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingVxLanConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1400AF798 (-NdisTraceLoggingVxLanConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingVxLanHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1400AF898 (-NdisTraceLoggingVxLanHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 */

void __fastcall NdisTraceLoggingOffloads(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OFFLOAD *a2,
        struct _NDIS_OFFLOAD *a3)
{
  __int64 v6; // r8

  NdisTraceLoggingChecksumHardwareOffloads(a1, a2, (__int64)a3);
  NdisTraceLoggingChecksumConfigOffloads(a1, a3, v6);
  NdisTraceLoggingLsoV2HardwareOffloads(a1, a2);
  NdisTraceLoggingLsoV2ConfigOffloads(a1, a3);
  if ( a2->Header.Revision >= 3u )
  {
    NdisTraceLoggingRscHardwareOffloads(a1, a2);
    NdisTraceLoggingRscConfigOffloads(a1, a3);
    NdisTraceLoggingGreTaskHardwareOffloads(a1, a2);
    NdisTraceLoggingGreTaskeConfigOffloads(a1, a3);
  }
  if ( a2->Header.Revision >= 4u )
  {
    NdisTraceLoggingVxLanHardwareOffloads(a1, a2);
    NdisTraceLoggingVxLanConfigOffloads(a1, a3);
  }
}

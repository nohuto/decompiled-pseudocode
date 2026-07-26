/*
 * XREFs of ?ndisCreatePMProtocolOffloadEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PROTOCOL_OFFLOAD@@K@Z @ 0x140005DC0
 * Callers:
 *     ?ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x140006230 (-ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID.c)
 *     ?ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400063B0 (-ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 * Callees:
 *     ?ndisGetPMProtocolOffloadSize@@YAIPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z @ 0x140005E90 (-ndisGetPMProtocolOffloadSize@@YAIPEAU_NDIS_PM_PROTOCOL_OFFLOAD@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

struct _NDIS_PACKET_PATTERN_ENTRY *__fastcall ndisCreatePMProtocolOffloadEntry(
        struct _NDIS_PM_PROTOCOL_OFFLOAD *Src,
        unsigned int a2)
{
  unsigned int PMProtocolOffloadSize; // ebp
  __int64 Pool2; // rax
  int v6; // edx
  struct _NDIS_PACKET_PATTERN_ENTRY *v7; // rbx
  struct _NDIS_PACKET_PATTERN_ENTRY *result; // rax

  PMProtocolOffloadSize = ndisGetPMProtocolOffloadSize(Src);
  Pool2 = ExAllocatePool2(64LL, 304LL, 1886340174LL);
  v7 = (struct _NDIS_PACKET_PATTERN_ENTRY *)Pool2;
  if ( Pool2 )
  {
    memmove((void *)(Pool2 + 48), Src, PMProtocolOffloadSize);
    v7->Priority = v7->Pattern.MaskSize;
    result = v7;
    v7->Size = 304;
    v7->PortNumber = a2;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        11,
        95,
        (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids);
    }
    return 0LL;
  }
  return result;
}

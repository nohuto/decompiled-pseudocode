/*
 * XREFs of ?ndisGetVPortBlockForRequest@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1400B3FB8
 * Callers:
 *     ?ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1400B38EC (-ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_.c)
 *     ?ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1400B3F18 (-ndisGetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400B5B94 (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Dq @ 0x140016A70 (WPP_RECORDER_SF_Dq.c)
 *     ?ndisIsTargetNonDefaultVPort@@YAEPEBU_NDIS_OID_REQUEST@@PEAK@Z @ 0x1400B4610 (-ndisIsTargetNonDefaultVPort@@YAEPEBU_NDIS_OID_REQUEST@@PEAK@Z.c)
 *     ?ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400E5C88 (-ndisIovFindVPortByVPortIdInternal@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

struct _NDIS_VPORT_BLOCK *__fastcall ndisGetVPortBlockForRequest(
        struct _NDIS_MINIPORT_BLOCK *a1,
        const struct _NDIS_OID_REQUEST *a2)
{
  unsigned __int8 IsTargetNonDefaultVPort; // al
  struct _NDIS_MINIPORT_BLOCK *v3; // r10
  char v4; // dl
  struct _NDIS_VPORT_BLOCK *VPortByVPortIdInternal; // rbx
  int v6; // r8d
  __int64 v7; // r11
  unsigned int v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = 0;
  IsTargetNonDefaultVPort = ndisIsTargetNonDefaultVPort(a2, &v9);
  VPortByVPortIdInternal = ndisIovFindVPortByVPortIdInternal(v3, IsTargetNonDefaultVPort != 0 ? v9 : 0);
  if ( !VPortByVPortIdInternal && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      v6,
      0xBu,
      (struct _GUID *)&WPP_f192d87a3ca53ebd07debf06252d6703_Traceguids,
      v4,
      v7);
  return VPortByVPortIdInternal;
}

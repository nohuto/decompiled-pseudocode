/*
 * XREFs of ?ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x14013C970
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x14007F870 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qccL @ 0x1400A56D8 (WPP_RECORDER_SF_qccL.c)
 *     ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x14013D6C0 (-ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisMSetPacketDirectAttributes(
        _QWORD *a1,
        const union _NDIS_MINIPORT_ADAPTER_ATTRIBUTES *a2,
        __int64 a3)
{
  __int64 v3; // rdi
  int v5; // ebx
  unsigned int Flags; // eax
  unsigned __int8 DmaAddressWidth; // cl
  int v8; // eax
  __int64 v9; // r9
  int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-28h]

  v3 = a1[686];
  if ( !v3 )
  {
    v5 = -1073741637;
    goto LABEL_29;
  }
  if ( a2->Header.Revision != 1 )
    goto LABEL_28;
  if ( a2->Header.Size < 9u )
    goto LABEL_28;
  Flags = a2->GeneralAttributes.Flags;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    goto LABEL_28;
  DmaAddressWidth = a2->PacketDirectAttributes.DmaAddressWidth;
  if ( (Flags & 1) == 0 )
  {
    if ( !DmaAddressWidth )
    {
      v8 = 64;
      goto LABEL_11;
    }
    if ( (unsigned __int8)(DmaAddressWidth - 32) <= 0x20u )
    {
      v8 = a2->PacketDirectAttributes.DmaAddressWidth;
LABEL_11:
      LOBYTE(a3) = 0;
      goto LABEL_14;
    }
LABEL_28:
    v5 = -1073741811;
    goto LABEL_29;
  }
  if ( DmaAddressWidth )
    goto LABEL_28;
  LOBYTE(a3) = 1;
  v8 = 0;
LABEL_14:
  v9 = v3;
  *(_DWORD *)(v3 + 20) = v8;
  *(_BYTE *)(v3 + 14) = a3;
  if ( (a2->GeneralAttributes.Flags & 2) != 0 )
  {
    if ( !*(_QWORD *)(a1[470] + 1136LL) )
    {
      v5 = -1073741808;
      goto LABEL_29;
    }
    *(_BYTE *)(v3 + 13) = 1;
  }
  if ( *(_BYTE *)(v3 + 12) )
  {
    v5 = ndisPDInitializeMiniportBufferManagement((struct _NDIS_PD_BLOCK *)v3);
    if ( v5 == -1073740007 )
    {
      if ( !*(_DWORD *)(v3 + 16) )
        goto LABEL_29;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x1Du,
          0x10u,
          (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
          (char)a1,
          *(_DWORD *)(v3 + 16));
      *(_DWORD *)(v3 + 16) = 0;
      *(_DWORD *)(v3 + 8) |= 0x80000001;
      v5 = ndisPDInitializeMiniportBufferManagement((struct _NDIS_PD_BLOCK *)v3);
    }
  }
  else
  {
    v5 = 0;
  }
  if ( v5 < 0 )
  {
LABEL_29:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v12) = v5;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x1Du,
        0x12u,
        (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
        (char)a1,
        v12);
    }
    return (unsigned int)v5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = *(_BYTE *)(v3 + 14) == 0;
    WPP_RECORDER_SF_qccL(*((_QWORD *)WPP_GLOBAL_Control + 8), (__int64)a2, a3, v9, v11);
  }
  return (unsigned int)v5;
}

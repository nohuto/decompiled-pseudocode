/*
 * XREFs of NdisSetOptionalHandlers @ 0x1400942B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIsNblContextVeriferEnabled@@YA_NPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x140017B20 (-ndisIsNblContextVeriferEnabled@@YA_NPEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14004B9E0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisFSetRestartAttributes@@YAHPEAXPEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@@Z @ 0x14005FDE0 (-ndisFSetRestartAttributes@@YAHPEAXPEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@@Z.c)
 *     ?ndisSetSystemPowerNotificationHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z @ 0x1400A8CD8 (-ndisSetSystemPowerNotificationHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z.c)
 *     ?ndisPDSetBufferManagerHandlers@@YAHPEAXPEBU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z @ 0x14013DB7C (-ndisPDSetBufferManagerHandlers@@YAHPEAXPEBU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z.c)
 *     ?ndisSetMiniportReenumerateHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z @ 0x14013EA30 (-ndisSetMiniportReenumerateHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z.c)
 *     ?ndisSetDevicePowerNotificationHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z @ 0x14013EDDC (-ndisSetDevicePowerNotificationHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z.c)
 *     ?ndisSetNDKHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z @ 0x1401407D4 (-ndisSetNDKHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z.c)
 *     ?ndisSetSSHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z @ 0x1401415F8 (-ndisSetSSHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z.c)
 */

NDIS_STATUS __stdcall NdisSetOptionalHandlers(NDIS_HANDLE NdisHandle, PNDIS_DRIVER_OPTIONAL_HANDLERS OptionalHandlers)
{
  PNDIS_DRIVER_OPTIONAL_HANDLERS v2; // rbx
  NDIS_STATUS v4; // esi
  unsigned int Type; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  bool v14; // zf
  __int64 v15; // rax
  struct _NDIS_FILTER_BLOCK *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  NDIS_STATUS restarted; // eax
  UCHAR Revision; // al
  bool v21; // cf

  v2 = OptionalHandlers;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(OptionalHandlers) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)OptionalHandlers,
      1,
      117,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)NdisHandle);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  Type = v2->Header.Type;
  if ( Type <= 0xA6 )
  {
    if ( Type != 166 )
    {
      v6 = Type - 140;
      if ( v6 )
      {
        v7 = v6 - 2;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( !v9 )
            {
              if ( *(_BYTE *)NdisHandle == 3 )
              {
                *((_QWORD *)NdisHandle + 24) = *(_QWORD *)&v2[2].Header.Type;
                *((_QWORD *)NdisHandle + 25) = *(_QWORD *)&v2[4].Header.Type;
                *((_QWORD *)NdisHandle + 26) = *(_QWORD *)&v2[6].Header.Type;
                *((_QWORD *)NdisHandle + 27) = *(_QWORD *)&v2[8].Header.Type;
                goto LABEL_87;
              }
              goto LABEL_38;
            }
            v10 = v9 - 1;
            if ( !v10 )
            {
              if ( *(_BYTE *)NdisHandle == 2 )
              {
                *((_QWORD *)NdisHandle + 63) = *(_QWORD *)&v2[2].Header.Type;
                *((_QWORD *)NdisHandle + 64) = *(_QWORD *)&v2[4].Header.Type;
                *((_QWORD *)NdisHandle + 65) = *(_QWORD *)&v2[6].Header.Type;
                *((_QWORD *)NdisHandle + 66) = *(_QWORD *)&v2[8].Header.Type;
                *((_QWORD *)NdisHandle + 67) = *(_QWORD *)&v2[10].Header.Type;
                *((_QWORD *)NdisHandle + 69) = *(_QWORD *)&v2[12].Header.Type;
                goto LABEL_87;
              }
              goto LABEL_38;
            }
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( v12 )
              {
                v13 = v12 - 1;
                if ( v13 )
                {
                  if ( v13 == 17 )
                  {
                    if ( v2->Header.Revision && v2->Header.Size >= 0x88u )
                    {
                      if ( *(_BYTE *)NdisHandle == 2 || *(_BYTE *)NdisHandle == 3 )
                      {
                        *(_OWORD *)((char *)NdisHandle + 632) = *(_OWORD *)&v2->Header.Type;
                        *(_OWORD *)((char *)NdisHandle + 648) = *(_OWORD *)&v2[4].Header.Type;
                        *(_OWORD *)((char *)NdisHandle + 664) = *(_OWORD *)&v2[8].Header.Type;
                        *(_OWORD *)((char *)NdisHandle + 680) = *(_OWORD *)&v2[12].Header.Type;
                        *(_OWORD *)((char *)NdisHandle + 696) = *(_OWORD *)&v2[16].Header.Type;
                        *(_OWORD *)((char *)NdisHandle + 712) = *(_OWORD *)&v2[20].Header.Type;
                        *(_OWORD *)((char *)NdisHandle + 728) = *(_OWORD *)&v2[24].Header.Type;
                        *(_OWORD *)((char *)NdisHandle + 744) = *(_OWORD *)&v2[28].Header.Type;
                        *(_OWORD *)((char *)NdisHandle + 760) = *(_OWORD *)&v2[32].Header.Type;
                        goto LABEL_87;
                      }
                      goto LABEL_38;
                    }
                    goto LABEL_54;
                  }
LABEL_38:
                  v4 = -1073741637;
                  goto LABEL_87;
                }
                if ( *(_BYTE *)NdisHandle != 2 )
                  goto LABEL_38;
              }
              else if ( *(_BYTE *)NdisHandle != 3 && *(_BYTE *)NdisHandle != 18 )
              {
                goto LABEL_38;
              }
              v14 = *(_DWORD *)&v2[2] == 1;
LABEL_37:
              if ( v14 )
                goto LABEL_87;
              goto LABEL_38;
            }
            if ( *(_BYTE *)NdisHandle != 2 )
              goto LABEL_38;
            *((_QWORD *)NdisHandle + 97) = *(_QWORD *)&v2[2].Header.Type;
            *((_QWORD *)NdisHandle + 98) = *(_QWORD *)&v2[4].Header.Type;
            *((_QWORD *)NdisHandle + 99) = *(_QWORD *)&v2[6].Header.Type;
            v15 = *(_QWORD *)&v2[8].Header.Type;
            goto LABEL_86;
          }
          if ( *(_BYTE *)NdisHandle != 2 && *(_BYTE *)NdisHandle != 4 )
          {
            v14 = *(_BYTE *)NdisHandle == 5;
            goto LABEL_37;
          }
        }
        else if ( *(_BYTE *)NdisHandle != 3 && *(_BYTE *)NdisHandle != 4 && *(_BYTE *)NdisHandle != 5 )
        {
          v14 = *(_BYTE *)NdisHandle == 18;
          goto LABEL_37;
        }
        goto LABEL_87;
      }
      if ( *(_BYTE *)NdisHandle != 5 )
        goto LABEL_38;
      if ( ndisIsNblContextVeriferEnabled((const struct _NDIS_FILTER_BLOCK *)NdisHandle) )
      {
        v17 = *(_QWORD *)&v2[4].Header.Type;
        if ( *(_QWORD *)&v2[2].Header.Type )
        {
          if ( !v17 )
            *(_QWORD *)&v2[4].Header.Type = SendNetBufferListsCompleteDummyHandler;
        }
        else if ( v17 )
        {
          *(_QWORD *)&v2[2].Header.Type = SendNetBufferListsDummyHandler;
        }
        v18 = *(_QWORD *)&v2[10].Header.Type;
        if ( *(_QWORD *)&v2[8].Header.Type )
        {
          if ( !v18 )
            *(_QWORD *)&v2[10].Header.Type = ReturnNetBufferListsDummyHandler;
        }
        else if ( v18 )
        {
          *(_QWORD *)&v2[8].Header.Type = IndicateReceiveNetBufferListsDummyHandler;
        }
      }
      restarted = ndisFSetRestartAttributes(v16, (struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS *)v2);
LABEL_52:
      v4 = restarted;
      goto LABEL_87;
    }
    if ( v2->Header.Revision && v2->Header.Size >= 0xA0u )
    {
      if ( *(_BYTE *)NdisHandle != 3 )
        goto LABEL_38;
      *(_OWORD *)((char *)NdisHandle + 472) = *(_OWORD *)&v2->Header.Type;
      *(_OWORD *)((char *)NdisHandle + 488) = *(_OWORD *)&v2[4].Header.Type;
      *(_OWORD *)((char *)NdisHandle + 504) = *(_OWORD *)&v2[8].Header.Type;
      *(_OWORD *)((char *)NdisHandle + 520) = *(_OWORD *)&v2[12].Header.Type;
      *(_OWORD *)((char *)NdisHandle + 536) = *(_OWORD *)&v2[16].Header.Type;
      *(_OWORD *)((char *)NdisHandle + 552) = *(_OWORD *)&v2[20].Header.Type;
      *(_OWORD *)((char *)NdisHandle + 568) = *(_OWORD *)&v2[24].Header.Type;
      *(_OWORD *)((char *)NdisHandle + 584) = *(_OWORD *)&v2[28].Header.Type;
      *(_OWORD *)((char *)NdisHandle + 600) = *(_OWORD *)&v2[32].Header.Type;
      *(_OWORD *)((char *)NdisHandle + 616) = *(_OWORD *)&v2[36].Header.Type;
      goto LABEL_87;
    }
LABEL_54:
    v4 = -1073741811;
    goto LABEL_87;
  }
  if ( Type != 176 )
  {
    if ( Type == 178 )
    {
      restarted = ndisSetNDKHandlers(NdisHandle, v2);
      goto LABEL_52;
    }
    if ( Type == 180 )
    {
      restarted = ndisSetSSHandlers(NdisHandle, v2);
      goto LABEL_52;
    }
    if ( Type != 184 )
    {
      switch ( Type )
      {
        case 0xBBu:
          restarted = ndisSetSystemPowerNotificationHandlers(NdisHandle, v2);
          break;
        case 0xBCu:
          restarted = ndisSetMiniportReenumerateHandlers(NdisHandle, v2);
          break;
        case 0xC4u:
          restarted = ndisPDSetBufferManagerHandlers(NdisHandle, v2);
          break;
        case 0xC6u:
          restarted = ndisSetDevicePowerNotificationHandlers(NdisHandle, v2);
          break;
        default:
          goto LABEL_38;
      }
      goto LABEL_52;
    }
    Revision = v2->Header.Revision;
    if ( Revision == 2 )
    {
      v21 = v2->Header.Size < 0xF0u;
    }
    else
    {
      if ( Revision != 1 )
        goto LABEL_75;
      v21 = v2->Header.Size < 0x70u;
    }
    if ( v21 )
      goto LABEL_54;
LABEL_75:
    if ( *(_BYTE *)NdisHandle != 2 )
      goto LABEL_38;
    *((_QWORD *)NdisHandle + 113) = *(_QWORD *)&v2[2].Header.Type;
    *((_QWORD *)NdisHandle + 114) = *(_QWORD *)&v2[4].Header.Type;
    *((_QWORD *)NdisHandle + 116) = *(_QWORD *)&v2[6].Header.Type;
    *((_QWORD *)NdisHandle + 115) = *(_QWORD *)&v2[8].Header.Type;
    *((_QWORD *)NdisHandle + 117) = *(_QWORD *)&v2[10].Header.Type;
    *((_QWORD *)NdisHandle + 118) = *(_QWORD *)&v2[12].Header.Type;
    *((_QWORD *)NdisHandle + 119) = *(_QWORD *)&v2[14].Header.Type;
    *((_QWORD *)NdisHandle + 120) = *(_QWORD *)&v2[16].Header.Type;
    *((_QWORD *)NdisHandle + 121) = *(_QWORD *)&v2[18].Header.Type;
    *((_QWORD *)NdisHandle + 122) = *(_QWORD *)&v2[20].Header.Type;
    *((_QWORD *)NdisHandle + 123) = *(_QWORD *)&v2[22].Header.Type;
    *((_QWORD *)NdisHandle + 124) = *(_QWORD *)&v2[24].Header.Type;
    *((_QWORD *)NdisHandle + 125) = *(_QWORD *)&v2[26].Header.Type;
    *((_QWORD *)NdisHandle + 126) = *(_QWORD *)&v2[28].Header.Type;
    *((_QWORD *)NdisHandle + 127) = *(_QWORD *)&v2[30].Header.Type;
    if ( v2->Header.Revision >= 2u )
    {
      *((_QWORD *)NdisHandle + 128) = *(_QWORD *)&v2[32].Header.Type;
      *((_QWORD *)NdisHandle + 129) = *(_QWORD *)&v2[34].Header.Type;
      *((_QWORD *)NdisHandle + 130) = *(_QWORD *)&v2[36].Header.Type;
      *((_QWORD *)NdisHandle + 131) = *(_QWORD *)&v2[38].Header.Type;
      *((_QWORD *)NdisHandle + 132) = *(_QWORD *)&v2[40].Header.Type;
      *((_QWORD *)NdisHandle + 133) = *(_QWORD *)&v2[42].Header.Type;
      *((_QWORD *)NdisHandle + 134) = *(_QWORD *)&v2[44].Header.Type;
      *((_QWORD *)NdisHandle + 135) = *(_QWORD *)&v2[46].Header.Type;
      *((_QWORD *)NdisHandle + 136) = *(_QWORD *)&v2[48].Header.Type;
      *((_QWORD *)NdisHandle + 137) = *(_QWORD *)&v2[50].Header.Type;
      *((_QWORD *)NdisHandle + 138) = *(_QWORD *)&v2[52].Header.Type;
      *((_QWORD *)NdisHandle + 139) = *(_QWORD *)&v2[54].Header.Type;
      *((_QWORD *)NdisHandle + 140) = *(_QWORD *)&v2[56].Header.Type;
      *((_QWORD *)NdisHandle + 141) = *(_QWORD *)&v2[58].Header.Type;
    }
    goto LABEL_87;
  }
  switch ( *(_BYTE *)NdisHandle )
  {
    case 3:
      *((_QWORD *)NdisHandle + 98) = *(_QWORD *)&v2[4].Header.Type;
      *((_QWORD *)NdisHandle + 99) = *(_QWORD *)&v2[6].Header.Type;
      v15 = *(_QWORD *)&v2[2].Header.Type;
LABEL_86:
      *((_QWORD *)NdisHandle + 100) = v15;
      break;
    case 0x11:
      *((_QWORD *)NdisHandle + 450) = *(_QWORD *)&v2[4].Header.Type;
      *((_QWORD *)NdisHandle + 451) = *(_QWORD *)&v2[6].Header.Type;
      *((_QWORD *)NdisHandle + 452) = *(_QWORD *)&v2[2].Header.Type;
      break;
    case 0x12:
      *((_QWORD *)NdisHandle + 97) = *(_QWORD *)&v2[4].Header.Type;
      *((_QWORD *)NdisHandle + 98) = *(_QWORD *)&v2[6].Header.Type;
      *((_QWORD *)NdisHandle + 99) = *(_QWORD *)&v2[2].Header.Type;
      break;
    default:
      goto LABEL_38;
  }
LABEL_87:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x76u,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)NdisHandle,
      v4);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  return v4;
}

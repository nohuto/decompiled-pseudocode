/*
 * XREFs of ?ndisDeQueueOpenOnMiniport@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140176310
 * Callers:
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14017BA40 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14017E480 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003FE10 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUnsetNdis6OpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140176420 (-ndisUnsetNdis6OpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisDeQueueOpenOnMiniport(struct _NDIS_OPEN_BLOCK *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rbx
  struct _NDIS_OPEN_BLOCK *OpenQueue; // rax
  _NDIS_OPEN_BLOCK **p_MiniportNextOpen; // rdx
  struct _NDIS_MINIPORT_BLOCK *v6; // rcx
  int v7; // edx
  char v8; // [rsp+30h] [rbp-18h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      6,
      17,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      (char)a1,
      v8);
  }
  OpenQueue = v2->OpenQueue;
  if ( OpenQueue == a1 )
  {
    v2->OpenQueue = a1->MiniportNextOpen;
  }
  else
  {
    if ( !OpenQueue )
      goto LABEL_8;
    while ( 1 )
    {
      p_MiniportNextOpen = &OpenQueue->MiniportNextOpen;
      OpenQueue = OpenQueue->MiniportNextOpen;
      if ( OpenQueue == a1 )
        break;
      if ( !OpenQueue )
        goto LABEL_8;
    }
    *p_MiniportNextOpen = OpenQueue->MiniportNextOpen;
  }
  --v2->NumOpens;
LABEL_8:
  ndisUpdateCheckForLoopbackFlag(v2);
  ndisUnsetNdis6OpenHandlers(v6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      6,
      18,
      (struct _GUID *)&WPP_91e24223ea6635c7ede0c9cfb5715ff6_Traceguids,
      (char)a1,
      (char)v2);
  }
}

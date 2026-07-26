/*
 * XREFs of ?ndisFNetPnPEventInternal@@YAXPEAX@Z @ 0x140035EE0
 * Callers:
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x14009A8D0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400132F0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     ?ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS_FPNP_REFTAG@@@Z @ 0x140036100 (-ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDI.c)
 *     ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140036230 (-ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisBindRequest@@YAXPEAXAEAUBindEngine@Ndis@@AEAVBindState@2@PEBU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1400A6944 (-ndisBindRequest@@YAXPEAXAEAUBindEngine@Ndis@@AEAVBindState@2@PEBU_NET_PNP_EVENT_NOTIFICATION@@@.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ?ndisShallowCopyNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEBU1@@Z @ 0x14015FC00 (-ndisShallowCopyNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEBU1@@Z.c)
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140172FB0 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 */

void __fastcall ndisFNetPnPEventInternal(_QWORD *Parameter)
{
  struct _NDIS_FILTER_BLOCK *v1; // r14
  ULONG_PTR v3; // rbp
  int v4; // esi
  struct _NDIS_MINIPORT_BLOCK *Miniport; // r15
  int v6; // eax
  int v7; // eax
  int v8; // eax
  struct _NDIS_FILTER_BLOCK *HigherFilterWithPnpRef; // rax
  struct _NDIS_FILTER_BLOCK *v10; // rbx
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rcx
  struct _NET_PNP_EVENT_NOTIFICATION v12; // [rsp+40h] [rbp-E8h] BYREF

  v1 = (struct _NDIS_FILTER_BLOCK *)Parameter[1];
  v3 = Parameter[3];
  v4 = 0;
  Miniport = v1->Miniport;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Fu,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)Miniport,
      (char)v1,
      *(_DWORD *)(v3 + 8));
  v6 = *(_DWORD *)(v3 + 8);
  if ( v6 != 15 )
  {
    v7 = v6 - 18;
    if ( v7 && (v8 = v7 - 1) != 0 && (unsigned int)(v8 - 1) >= 2 )
    {
      HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef(Miniport, v1, FPNPREF_NPNPEVENT);
      v10 = HigherFilterWithPnpRef;
      if ( HigherFilterWithPnpRef )
      {
        v4 = ndisFForwardNetPnPEventToFilter(HigherFilterWithPnpRef, (struct _NET_PNP_EVENT_NOTIFICATION *)v3);
        ndisDereferenceRef(&v10->PnPRef.SpinLock, 0xAu);
      }
      else
      {
        *(_QWORD *)&v12.NetPnPEvent.NetEvent = 23LL;
        *(_QWORD *)&v12.Header.Type = 11272832LL;
        memset(&v12.NetPnPEvent.Buffer, 0, 160);
        ndisShallowCopyNetPnPEvent(&v12, (const struct _NET_PNP_EVENT_NOTIFICATION *)v3);
        v4 = ndisPnPNotifyAllTransports(Miniport, &v12);
      }
    }
    else
    {
      FilterDriver = v1->FilterDriver;
      if ( FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion > 6u
        || FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion == 6
        && FilterDriver->DefaultFilterCharacteristics.MinorNdisVersion >= 0x32u )
      {
        ndisBindRequest((ULONG_PTR)v1, &v1->Miniport->BindEngine, &v1->Bind->BindState, v3);
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      64,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)Miniport,
      (char)v1);
  *(_DWORD *)Parameter = v4;
}

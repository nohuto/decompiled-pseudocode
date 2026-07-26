/*
 * XREFs of ?ndisFSetRestartAttributes@@YAHPEAXPEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@@Z @ 0x14005FDE0
 * Callers:
 *     NdisSetOptionalHandlers @ 0x1400942B0 (NdisSetOptionalHandlers.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Zq @ 0x1400598A0 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisAllocateIterativeDataPathTracker@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14006FF40 (-ndisAllocateIterativeDataPathTracker@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     memcmp @ 0x1400E7A20 (memcmp.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x140143D04 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140155F00 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x14015EC60 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162130 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 */

__int64 __fastcall ndisFSetRestartAttributes(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS *Buf2)
{
  struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS *v3; // rbx
  unsigned int IterativeDataPathTracker; // edi
  int v6; // edx
  char v7[160]; // [rsp+40h] [rbp-C8h] BYREF

  v3 = Buf2;
  IterativeDataPathTracker = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Buf2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)Buf2,
      1,
      35,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)a1);
  }
  if ( v3 )
  {
    if ( a1->Header.Revision == 1 )
    {
      if ( v3->Header.Size < 0x30u )
      {
        IterativeDataPathTracker = -1073676283;
      }
      else
      {
        if ( v3->SendNetBufferListsHandler )
          goto LABEL_29;
        if ( v3->CancelSendNetBufferListsHandler )
        {
          IterativeDataPathTracker = -1073741811;
          goto LABEL_4;
        }
        if ( v3->SendNetBufferListsCompleteHandler
          || v3->ReceiveNetBufferListsHandler
          || v3->ReturnNetBufferListsHandler )
        {
LABEL_29:
          if ( !a1->IterativeDataPathTracker )
            IterativeDataPathTracker = ndisAllocateIterativeDataPathTracker(a1);
        }
        if ( !IterativeDataPathTracker )
        {
          if ( memcmp(&a1->Characteristics, v3, 0x30uLL) )
          {
            Ndis::BindEngine::BeginPolicyUpdates(&a1->Miniport->BindEngine);
            if ( Ndis::BindState::SetPause(&a1->Miniport->Bindings.Miniport, DatapathPaused, PauseReason_RestartNeeded) )
            {
              memset(v7, 0, sizeof(v7));
              if ( (unsigned __int8)byte_14011CBA3 >= 4u )
              {
                ndisGetBindLinkNameForTracing(a1->Bind, (struct NDIS_PNPTRACE_LOCALS *)v7);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_Zq(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v6,
                    0x1Cu,
                    0x24u,
                    (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
                    *(unsigned __int16 **)&v7[8],
                    *(_QWORD *)v7);
              }
            }
            Ndis::BindEngine::EndPolicyUpdates(&a1->Miniport->BindEngine);
          }
          *(_OWORD *)&a1->Characteristics.Header.Type = *(_OWORD *)&v3->Header.Type;
          *(_OWORD *)&a1->Characteristics.SendNetBufferListsCompleteHandler = *(_OWORD *)&v3->SendNetBufferListsCompleteHandler;
          *(_OWORD *)&a1->Characteristics.ReceiveNetBufferListsHandler = *(_OWORD *)&v3->ReceiveNetBufferListsHandler;
        }
      }
    }
    else
    {
      IterativeDataPathTracker = -1073741637;
    }
  }
LABEL_4:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Buf2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)Buf2,
      1,
      37,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)a1);
  }
  return IterativeDataPathTracker;
}

/*
 * XREFs of ?ndisFSetRestartAttributes@@YAHPEAXPEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@@Z @ 0x14007BBA0
 * Callers:
 *     NdisSetOptionalHandlers @ 0x14009DED0 (NdisSetOptionalHandlers.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisAllocateIterativeDataPathTracker@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14008C520 (-ndisAllocateIterativeDataPathTracker@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     memcmp @ 0x1400EE8A0 (memcmp.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014E9CC (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162770 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x14016BBB0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x14016D7D0 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
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
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Buf2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)Buf2,
      1,
      34,
      (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
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
              if ( (unsigned __int8)byte_140126C63 >= 4u )
              {
                ndisGetBindLinkNameForTracing(a1->Bind, (struct NDIS_PNPTRACE_LOCALS *)v7);
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_Zq(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v6,
                    0x1Cu,
                    0x23u,
                    (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
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
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Buf2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)Buf2,
      1,
      36,
      (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
      (char)a1);
  }
  return IterativeDataPathTracker;
}

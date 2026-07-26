/*
 * XREFs of ?ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140135010
 * Callers:
 *     NdisFRestartFilter @ 0x14009B6A0 (NdisFRestartFilter.c)
 *     ?ndisQueuedRestartFilter@@YAXPEAX@Z @ 0x140166820 (-ndisQueuedRestartFilter@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Ld @ 0x140058010 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_Zq @ 0x1400598A0 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x140143D04 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140155F00 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140161800 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 */

void __fastcall ndisQueueFilterRestart(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  NDIS_BIND_FILTER_LINK *Bind; // rdi
  unsigned int m_pauseReasons; // edx
  int v5; // edx
  char v6[160]; // [rsp+40h] [rbp-B8h] BYREF

  Miniport = a1->Miniport;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&Miniport->BindEngine.m_lock, 0LL);
  Bind = a1->Bind;
  m_pauseReasons = Bind->BindState.m_pauseReasons;
  Bind->BindState.m_pauseReasons = m_pauseReasons | 0x20;
  if ( !m_pauseReasons || !Bind->BindState.Miniport )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      WPP_RECORDER_SF_Ld(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5u,
        0x1Cu,
        0xFu,
        (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
        m_pauseReasons,
        m_pauseReasons | 0x20);
    Bind->BindState.Miniport->BindEngine.m_isDirty = 1;
    memset(v6, 0, sizeof(v6));
    if ( (unsigned __int8)byte_14011CBA3 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a1->Bind, (struct NDIS_PNPTRACE_LOCALS *)v6);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v5,
          0x1Cu,
          0x26u,
          (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
          *(unsigned __int16 **)&v6[8],
          *(_QWORD *)v6);
    }
  }
  a1->Bind->BindState.NeedsPauseAction = 1;
  Ndis::BindEngine::EndPolicyUpdates(&a1->Miniport->BindEngine);
  Ndis::BindEngine::ApplyBindChanges(&a1->Miniport->BindEngine, RunAsynchronous, 0);
}

/*
 * XREFs of ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14015CF30
 * Callers:
 *     ?ndisMFlushInterfaceChanges@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A5954 (-ndisMFlushInterfaceChanges@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140064270 (-ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     WPP_RECORDER_SF_Ld @ 0x140072CB0 (WPP_RECORDER_SF_Ld.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140072EB0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400848A0 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014EAFC (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisIfUpdateCurrentMacAddressAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x140152578 (-ndisIfUpdateCurrentMacAddressAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z.c)
 *     ?ndisIfUpdateL2MtuSizeAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@K@Z @ 0x140152608 (-ndisIfUpdateL2MtuSizeAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@K@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x14015D9B0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162770 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 */

void __fastcall ndisMApplyInterfaceChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        struct _NDIS_STATUS_INDICATION *a3)
{
  unsigned int *p_InterlockedFlags; // rbp
  KPushLock *p_m_lock; // r14
  Ndis::BindState *p_Miniport; // rsi
  unsigned int m_pauseReasons; // ecx
  int v10; // edx
  int v11; // r8d
  struct _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned int v13; // edx
  unsigned int v14; // r10d
  int v15; // edx
  char v16[8]; // [rsp+30h] [rbp-178h]
  char v17[160]; // [rsp+40h] [rbp-168h] BYREF
  char v18[160]; // [rsp+E0h] [rbp-C8h] BYREF
  Ndis::BindState *v19; // [rsp+1B0h] [rbp+8h]

  p_InterlockedFlags = &a1->InterlockedFlags;
  _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0);
  _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, a2);
  ndisPowerSaveStop(a1, 0xBu);
  KeEnterCriticalRegion();
  p_m_lock = &a1->BindEngine.m_lock;
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  p_Miniport = &a1->Bindings.Miniport;
  m_pauseReasons = a1->Bindings.Miniport.m_pauseReasons;
  a1->Bindings.Miniport.m_pauseReasons = m_pauseReasons | 0x200;
  if ( !m_pauseReasons || !p_Miniport->Miniport )
  {
    v19 = &a1->Bindings.Miniport;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v19 = &a1->Bindings.Miniport;
      if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        WPP_RECORDER_SF_Ld(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xFu,
          (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
          m_pauseReasons,
          m_pauseReasons | 0x200);
        v19 = &a1->Bindings.Miniport;
        p_InterlockedFlags = &a1->InterlockedFlags;
        p_m_lock = &a1->BindEngine.m_lock;
      }
    }
    p_Miniport->Miniport->BindEngine.m_isDirty = 1;
    memset(v17, 0, sizeof(v17));
    p_Miniport = v19;
    if ( (unsigned __int8)byte_140126C63 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v17);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v10,
          0x1Cu,
          0xB4u,
          (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
          *(unsigned __int16 **)&v17[8],
          *(_QWORD *)v17);
    }
  }
  a1->BindEngine.m_isDirty = 1;
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
  Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunSynchronous, 0);
  ndisPowerSaveClearStop((__int64)a1, 11LL);
  ndisMRawIndicateStatusEx((struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)a1, a3, v11);
  if ( a3->StatusCode == 1073873072 )
  {
    ndisIfUpdateCurrentMacAddressAndNotify(a1->IfBlock, (const struct _IF_PHYSICAL_ADDRESS_LH *)a3->StatusBuffer);
  }
  else if ( a3->StatusCode == 1073873073 )
  {
    IfBlock = a1->IfBlock;
    v13 = *(_DWORD *)a3->StatusBuffer;
    a1->TopFilterRestartAttributes.MtuSize = v13;
    ndisIfUpdateL2MtuSizeAndNotify(IfBlock, v13);
  }
  _InterlockedOr((volatile signed __int32 *)p_InterlockedFlags, 0);
  _InterlockedAnd((volatile signed __int32 *)p_InterlockedFlags, ~a2);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(p_m_lock, 0LL);
  v14 = p_Miniport->m_pauseReasons;
  p_Miniport->m_pauseReasons = v14 & 0xFFFFFDFF;
  if ( (v14 != 0) != ((v14 & 0xFFFFFDFF) != 0) || !p_Miniport->Miniport )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      *(_DWORD *)v16 = v14 & 0xFFFFFDFF;
      WPP_RECORDER_SF_Ld(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5u,
        0x1Cu,
        0xFu,
        (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
        v14,
        *(_QWORD *)v16);
    }
    p_Miniport->Miniport->BindEngine.m_isDirty = 1;
    memset(v18, 0, sizeof(v18));
    if ( (unsigned __int8)byte_140126C63 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v18);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Zq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v15,
          0x1Cu,
          0xB5u,
          (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
          *(unsigned __int16 **)&v18[8],
          *(_QWORD *)v18);
    }
  }
  a1->BindEngine.m_isDirty = 1;
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
  Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunAsynchronous, 0);
}

/*
 * XREFs of NdisMSetMiniportSecondary @ 0x1400A00C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_Zq @ 0x1400598A0 (WPP_RECORDER_SF_Zq.c)
 *     ?NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z @ 0x14008D190 (-NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x140143E34 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140155F00 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1401593A0 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140161800 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162130 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 */

NDIS_STATUS __stdcall NdisMSetMiniportSecondary(NDIS_HANDLE MiniportHandle, NDIS_HANDLE PrimaryMiniportHandle)
{
  _QWORD *v2; // rsi
  NDIS_STATUS v4; // edi
  int v5; // edx
  char v7; // [rsp+30h] [rbp-C8h]
  char v8[160]; // [rsp+40h] [rbp-B8h] BYREF

  v2 = PrimaryMiniportHandle;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = (char)PrimaryMiniportHandle;
    LOBYTE(PrimaryMiniportHandle) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)PrimaryMiniportHandle,
      1,
      102,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)MiniportHandle,
      v7);
  }
  if ( *((_QWORD *)MiniportHandle + 470) == v2[470] && *((NDIS_HANDLE *)MiniportHandle + 22) == MiniportHandle )
  {
    _InterlockedOr((volatile signed __int32 *)MiniportHandle + 30, 0x10000000u);
    Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)((char *)MiniportHandle + 5120));
    if ( Ndis::BindState::SetBinding(
           (Ndis::BindState *)((char *)MiniportHandle + 5048),
           BindingDisabled,
           Reason_SecondaryMiniport) )
    {
      memset(v8, 0, sizeof(v8));
      if ( (unsigned __int8)byte_14011CBA3 >= 4u )
      {
        ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, (struct NDIS_PNPTRACE_LOCALS *)v8);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v5,
            0x1Cu,
            0x67u,
            (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
            *(unsigned __int16 **)&v8[8],
            *(_QWORD *)v8);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)((char *)MiniportHandle + 5120));
    Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)((char *)MiniportHandle + 5120), RunSynchronous, 0);
    *((_QWORD *)MiniportHandle + 22) = v2;
  }
  else
  {
    v4 = -1073741637;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(PrimaryMiniportHandle) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)PrimaryMiniportHandle,
      1,
      104,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)MiniportHandle,
      (char)v2);
  }
  NdisTraceLoggingRareMiniportPath();
  return v4;
}

/*
 * XREFs of ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400295F4
 * Callers:
 *     ?CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140005FB0 (-CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@.c)
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x140028310 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 *     ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x140028B80 (-DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z.c)
 *     ?OnConnectedToStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z @ 0x140028C50 (-OnConnectedToStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?OnDisconnectedFromStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z @ 0x140029000 (-OnDisconnectedFromStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x1400292C0 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?DestroyStream@CStreamInstance@@UEAAJXZ @ 0x1400294E0 (-DestroyStream@CStreamInstance@@UEAAJXZ.c)
 *     ?Initialize@CStreamInstance@@UEAAJKW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J3U_GUID@@3@Z @ 0x140029A10 (-Initialize@CStreamInstance@@UEAAJKW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J3U_GUID@@3.c)
 *     ?DisconnectFromRightSubmix@CStreamInstance@@UEAAJPEAUISubmix@@@Z @ 0x140029C40 (-DisconnectFromRightSubmix@CStreamInstance@@UEAAJPEAUISubmix@@@Z.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x14002A48C (--1CSubmixImpl@@QEAA@XZ.c)
 *     ?ConnectToRightSubmix@CStreamInstance@@UEAAJPEAUISubmix@@@Z @ 0x14002AD30 (-ConnectToRightSubmix@CStreamInstance@@UEAAJPEAUISubmix@@@Z.c)
 *     ?CreateBridgeStreamToTargetStreamGroup@CStreamInstance@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140049140 (-CreateBridgeStreamToTargetStreamGroup@CStreamInstance@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUI.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14004D490 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140050B10 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     AudioDGGetDeviceGraphWnfStateName @ 0x14006D7F0 (AudioDGGetDeviceGraphWnfStateName.c)
 * Callees:
 *     ?UpdateRehashThresholds@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEAAXXZ @ 0x14001281C (-UpdateRehashThresholds@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy.c)
 *     ?RemoveAll@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAXXZ @ 0x140029840 (-RemoveAll@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAAXXZ @ 0x1400298A4 (-RemoveAll@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@.c)
 *     ?RemoveHead@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAPEAVCDisplayNode@@XZ @ 0x14002996C (-RemoveHead@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAPEA.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEBAAEAPEAVCSystemAudioDeviceBase@@H@Z @ 0x14002B450 (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSys.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_GCDisplayNode@@QEAAPEAXI@Z @ 0x140069D78 (--_GCDisplayNode@@QEAAPEAXI@Z.c)
 *     ?DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x140069EE0 (-DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDi.c)
 *     ?LinkDisplayNodes@@YAXAEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@0@Z @ 0x14006AAD4 (-LinkDisplayNodes@@YAXAEAV-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDispl.c)
 *     ?SerializeDeviceGraphs@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAPEAEPEAI@Z @ 0x14006B108 (-SerializeDeviceGraphs@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void PublishDeviceGraphWnfState(void)
{
  int v0; // r10d
  __int64 v1; // r9
  int v2; // r11d
  void *v3; // rbx
  CDisplayNode *v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rcx
  int v7; // esi
  int i; // edi
  _QWORD *ValueAt; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  _QWORD v13[2]; // [rsp+30h] [rbp-99h] BYREF
  int v14; // [rsp+40h] [rbp-89h]
  int v15; // [rsp+44h] [rbp-85h]
  int v16; // [rsp+48h] [rbp-81h]
  int v17; // [rsp+4Ch] [rbp-7Dh]
  __int64 v18; // [rsp+50h] [rbp-79h]
  __int64 v19; // [rsp+58h] [rbp-71h]
  int v20; // [rsp+60h] [rbp-69h]
  int v21; // [rsp+64h] [rbp-65h]
  __int64 v22; // [rsp+68h] [rbp-61h]
  __int64 v23; // [rsp+70h] [rbp-59h]
  _QWORD v24[2]; // [rsp+80h] [rbp-49h] BYREF
  int v25; // [rsp+90h] [rbp-39h]
  int v26; // [rsp+94h] [rbp-35h]
  int v27; // [rsp+98h] [rbp-31h]
  int v28; // [rsp+9Ch] [rbp-2Dh]
  __int64 v29; // [rsp+A0h] [rbp-29h]
  __int64 v30; // [rsp+A8h] [rbp-21h]
  int v31; // [rsp+B0h] [rbp-19h]
  int v32; // [rsp+B4h] [rbp-15h]
  __int64 v33; // [rsp+B8h] [rbp-11h]
  __int64 v34; // [rsp+C0h] [rbp-9h]
  __int128 v35; // [rsp+D0h] [rbp+7h] BYREF
  __int64 v36; // [rsp+E0h] [rbp+17h]
  __int128 v37; // [rsp+E8h] [rbp+1Fh]
  int v38; // [rsp+F8h] [rbp+2Fh]
  unsigned int v39; // [rsp+130h] [rbp+67h] BYREF
  void *v40; // [rsp+138h] [rbp+6Fh] BYREF
  struct _RTL_CRITICAL_SECTION *v41; // [rsp+140h] [rbp+77h] BYREF

  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 10;
  v24[0] = 0LL;
  v24[1] = 0LL;
  v25 = 17;
  v29 = 0xFFFFFFFFLL;
  v30 = 0LL;
  v31 = 0;
  v32 = 10;
  v33 = 0LL;
  v34 = 0LL;
  v26 = 1061158912;
  v27 = 1048576000;
  v28 = 1074790400;
  ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::UpdateRehashThresholds((__int64)v24);
  v13[0] = 0LL;
  v13[1] = 0LL;
  v14 = v0;
  v18 = v1;
  v19 = 0LL;
  v20 = 0;
  v21 = v2;
  v22 = 0LL;
  v23 = 0LL;
  v15 = 1061158912;
  v16 = 1048576000;
  v17 = 1074790400;
  ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::UpdateRehashThresholds((__int64)v13);
  v3 = 0LL;
  v40 = 0LL;
  v39 = 0;
  if ( g_DeviceGraphWnfStateNameCreated )
  {
    EnterCriticalSection(&g_CritSecSadMap);
    v41 = &g_CritSecSadMap;
    v7 = dword_1400C4758;
    for ( i = 0; i < v7; ++i )
    {
      ValueAt = (_QWORD *)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::GetValueAt(
                            v6,
                            (unsigned int)i);
      if ( (*(int (__fastcall **)(_QWORD, __int128 *, _QWORD *, _QWORD *))(*(_QWORD *)*ValueAt + 152LL))(
             *ValueAt,
             &v35,
             v24,
             v13) < 0 )
      {
LABEL_11:
        CSAutoLock<1>::~CSAutoLock<1>(&v41);
        goto LABEL_5;
      }
    }
    CSAutoLock<1>::~CSAutoLock<1>(&v41);
    EnterCriticalSection(&g_CritSecSubmixList);
    v41 = &g_CritSecSubmixList;
    v10 = (_QWORD *)SubmixList;
    while ( v10 )
    {
      v11 = v10[2];
      v10 = (_QWORD *)*v10;
      if ( (int)DumpDeviceGraph(v11, &v35, v24, v13) < 0 )
        goto LABEL_11;
    }
    CSAutoLock<1>::~CSAutoLock<1>(&v41);
    LinkDisplayNodes(v24, v13);
    v12 = SerializeDeviceGraphs(&v35, &v40, &v39);
    v3 = v40;
    if ( v12 >= 0 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))RtlPublishWnfStateData)(
        g_DeviceGraphWnfStateName,
        0LL,
        v40,
        v39,
        0LL);
LABEL_5:
    while ( v36 )
    {
      v4 = (CDisplayNode *)ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::RemoveHead(&v35);
      if ( v4 )
        CDisplayNode::`scalar deleting destructor'(v4, v5);
    }
  }
  operator delete(v3);
  ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::RemoveAll(v13);
  ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::RemoveAll(v24);
  ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::RemoveAll(&v35);
}

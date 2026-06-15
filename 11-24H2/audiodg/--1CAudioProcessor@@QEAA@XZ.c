/*
 * XREFs of ??1CAudioProcessor@@QEAA@XZ @ 0x1400357A0
 * Callers:
 *     ??1?$CComObject@VCAudioProcessor@@@ATL@@UEAA@XZ @ 0x1400454EC (--1-$CComObject@VCAudioProcessor@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x14000474C (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z @ 0x1400090D0 (-DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z.c)
 *     ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14000AC50 (-CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000B8BC (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ??1?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAA@XZ @ 0x140035960 (--1-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits.c)
 *     ??1?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAA@XZ @ 0x1400359A0 (--1-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAA@XZ.c)
 *     ?BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z @ 0x1400359F0 (-BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z.c)
 *     ?DetachEndpointFromConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioEndpoint@@@Z @ 0x140035F40 (-DetachEndpointFromConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioEndpoint@@@Z.c)
 *     ?GetHead@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAAEAPEAVCConnectionNode@@XZ @ 0x140056174 (-GetHead@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAAEAPEAVCConnectionN.c)
 *     ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14007F320 (-CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 */

void __fastcall CAudioProcessor::~CAudioProcessor(CAudioProcessor *this)
{
  __int64 v2; // rax
  _QWORD *v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  struct IAudioProcessingObject ***Head; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CAudioProcessor::`vftable'{for `IAudioProcessor'};
  *((_QWORD *)this + 1) = &CAudioProcessor::`vftable'{for `IAudioProcessRT'};
  *((_QWORD *)this + 2) = &CAudioProcessor::`vftable'{for `IAudioLogging'};
  v10 = 0LL;
  *((_BYTE *)this + 779) = 1;
  if ( *((_BYTE *)this + 776) )
  {
    v2 = *((_QWORD *)this + 96);
    if ( v2 )
    {
      CAudioProcessor::CancelGraphChanges(this, *(_QWORD *)(v2 + 16));
      v2 = *((_QWORD *)this + 96);
    }
    if ( *((_BYTE *)this + 778) )
    {
      v7 = 1000LL;
      if ( v2 )
        v7 = *(_QWORD *)(v2 + 16);
      v10 = v7;
      CAudioProcessor::CommitGraphChanges(this, v7);
    }
    CAudioProcessor::BeginGraphChanges(this, &v10);
    v3 = (_QWORD *)**((_QWORD **)this + 96);
    while ( v3[2] )
    {
      Head = (struct IAudioProcessingObject ***)ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead(v3);
      CAudioProcessor::DeactivateAPO(this, v10, **Head);
    }
    v4 = **((_QWORD **)this + 96);
    while ( *(_QWORD *)(v4 + 64) )
    {
      v9 = ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::GetHead(v4 + 48);
      CAudioProcessor::DetachEndpointFromConnection(this, v10, *(struct IAudioEndpoint **)(*(_QWORD *)v9 + 112LL));
    }
    v5 = **((_QWORD **)this + 96);
    while ( *(_QWORD *)(v5 + 112) )
    {
      v6 = ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::GetHead(v5 + 96);
      CAudioProcessor::DetachEndpointFromConnection(this, v10, *(struct IAudioEndpoint **)(*(_QWORD *)v6 + 112LL));
    }
    CAudioProcessor::CommitGraphChanges(this, v10);
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 99);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 98);
  CRealTimeSafeStruct<CProcessingData,1>::~CRealTimeSafeStruct<CProcessingData,1>((char *)this + 384);
  CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::~CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>((char *)this + 224);
  ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)this + 176);
  ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)this + 128);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  ATL::CComSafeDeleteCriticalSection::~CComSafeDeleteCriticalSection((CAudioProcessor *)((char *)this + 32));
}

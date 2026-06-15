/*
 * XREFs of ?UpdatePMPOnStreamGroup@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@@Z @ 0x1800F8B50
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800037E4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4CProcessingModeParameters@@QEAAAEAV0@AEBV0@@Z @ 0x180019DC0 (--4CProcessingModeParameters@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?ApplyStreamingEffectsOverride@CSharedStreamGroupProxy@@AEAAXXZ @ 0x180046654 (-ApplyStreamingEffectsOverride@CSharedStreamGroupProxy@@AEAAXXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18005FF0C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?CompareAECProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x180061268 (-CompareAECProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x180066768 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ?UpdateAuxiliaryInputForStreamGroup@@YAXAEBVWeakRef@WRL@Microsoft@@_N1@Z @ 0x1800BF950 (-UpdateAuxiliaryInputForStreamGroup@@YAXAEBVWeakRef@WRL@Microsoft@@_N1@Z.c)
 *     ??$?0VCSharedStreamGroupProxy@@@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStreamGroupProxy@@@Z @ 0x1800F2D38 (--$-0VCSharedStreamGroupProxy@@@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStr.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::UpdatePMPOnStreamGroup(
        unsigned __int64 this,
        const struct CProcessingModeParameters *a2)
{
  void **v2; // rsi
  _DWORD *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  CSharedStreamGroupProxy *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  __int64 *v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned __int64 v14; // [rsp+70h] [rbp+30h] BYREF
  WCHAR *v15; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 *v16; // [rsp+88h] [rbp+48h] BYREF

  v2 = (void **)(this + 264);
  if ( *(_QWORD *)(this + 272) == *(_QWORD *)(this + 264) )
  {
    v6 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    v9 = (CSharedStreamGroupProxy *)(this - 8);
    if ( *v6 > 4u )
    {
      v14 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)a2 + 1) - *(_QWORD *)a2) >> 2);
      v15 = (WCHAR *)*((_QWORD *)a2 + 3);
      v16 = (unsigned __int64 *)(this & -(__int64)(this != 8));
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        (int)v6,
        (int)&unk_1801AC8A6,
        v7,
        v8,
        (__int64)&v16,
        (const WCHAR **)&v15,
        (__int64)&v14);
    }
    LODWORD(v14) = 1;
    v10 = CSharedStreamGroupProxy::CompareAECProcessingModeParameters(v9, a2, (enum PMP_MATCH_TYPE *)&v14);
    v11 = v10;
    if ( v10 >= 0 )
    {
      CProcessingModeParameters::operator=(v2, (const void **)a2);
      if ( (_DWORD)v14 != 1 )
      {
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::ComPtr<IStreamGroupProxy>((__int64 *)&v15, (__int64)v9);
        v14 = 0LL;
        v16 = &v14;
        v12 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v16);
        if ( (int)Microsoft::WRL::AsWeak<IStreamGroupProxy>(
                    (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v15,
                    v12) >= 0 )
          UpdateAuxiliaryInputForStreamGroup((const struct Microsoft::WRL::WeakRef *)&v14, 0, 0);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v14);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v15);
      }
      CSharedStreamGroupProxy::ApplyStreamingEffectsOverride(v9);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x82B,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v10);
      return v11;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x821,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
}

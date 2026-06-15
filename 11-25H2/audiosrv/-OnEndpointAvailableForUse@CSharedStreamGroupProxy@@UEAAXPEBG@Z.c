/*
 * XREFs of ?OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800F2D80
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSz@D@@@Z @ 0x180003510 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18001CAB0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x18001DF28 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180022D84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x1800767F0 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800CFBC0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::_Func_impl_no_alloc__lambda_44597a977486aefe783c27e19919ac62__void_::_Func_impl_no_alloc__lambda_44597a977486aefe783c27e19919ac62__void___lambda_44597a977486aefe783c27e19919ac62__0_ @ 0x1800EDC5C (std--_Func_impl_no_alloc__lambda_44597a977486aefe783c27e19919ac62__void_--_Func_impl_no_alloc__l.c)
 *     ??$?0VCSharedStreamGroupProxy@@@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStreamGroupProxy@@@Z @ 0x1800EDC88 (--$-0VCSharedStreamGroupProxy@@@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAA@PEAVCSharedStr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CSharedStreamGroupProxy::OnEndpointAvailableForUse(
        CSharedStreamGroupProxy *this,
        const unsigned __int16 *a2)
{
  __int64 *v3; // rax
  struct CSerialWorkQueue *SerialWorkQueue; // rbx
  int v5; // eax
  _DWORD *v6; // rcx
  __int64 v7; // r8
  const char *v8; // r9
  int v9; // [rsp+20h] [rbp-68h]
  const WCHAR *v10; // [rsp+30h] [rbp-58h] BYREF
  __int64 v11[7]; // [rsp+38h] [rbp-50h] BYREF
  _QWORD *v12; // [rsp+70h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 *v14; // [rsp+90h] [rbp+8h] BYREF
  __int64 **v15; // [rsp+A0h] [rbp+18h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+A8h] [rbp+20h] BYREF

  if ( *((_QWORD *)this + 36) )
  {
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::ComPtr<IStreamGroupProxy>((__int64 *)&v16, (__int64)this - 8);
    v14 = 0LL;
    v15 = &v14;
    v3 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v15);
    if ( (int)Microsoft::WRL::AsWeak<IStreamGroupProxy>(v16, v3) >= 0 )
    {
      try
      {
        SerialWorkQueue = GetSerialWorkQueue();
        v15 = (__int64 **)v14;
        if ( v14 )
          (*(void (__fastcall **)(__int64 *, __int64))(*v14 + 8))(v14, *v14);
        v12 = 0LL;
        v12 = std::_Func_impl_no_alloc__lambda_44597a977486aefe783c27e19919ac62__void_::_Func_impl_no_alloc__lambda_44597a977486aefe783c27e19919ac62__void___lambda_44597a977486aefe783c27e19919ac62__0_(
                v11,
                &v15);
        v5 = CSerialWorkQueue::QueueWorkItem((__int64)SerialWorkQueue, v11);
        if ( v5 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            1372LL,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v5,
            v9);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v15);
        v6 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
        if ( *v6 > 4u )
        {
          v15 = (__int64 **)"OnEndpointAvailableForUse";
          v10 = a2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
            (int)v6,
            (int)&unk_1801A2008,
            v7,
            (__int64)v8,
            &v10,
            (const CHAR **)&v15);
        }
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x566,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          v8);
        return;
      }
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v14);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v16);
  }
}

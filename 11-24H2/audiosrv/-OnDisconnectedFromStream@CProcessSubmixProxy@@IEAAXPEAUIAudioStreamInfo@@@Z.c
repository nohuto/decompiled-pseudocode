/*
 * XREFs of ?OnDisconnectedFromStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x1800F7C04
 * Callers:
 *     ?DisconnectFromStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800F5E70 (-DisconnectFromStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800271A0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180027E54 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ??$AsWeak@VCProcessSubmixProxy@@@WRL@Microsoft@@YAJPEAVCProcessSubmixProxy@@PEAVWeakRef@01@@Z @ 0x18005590C (--$AsWeak@VCProcessSubmixProxy@@@WRL@Microsoft@@YAJPEAVCProcessSubmixProxy@@PEAVWeakRef@01@@Z.c)
 *     ?RemoveStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180058858 (-RemoveStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?UpdateActiveStreamCount@CProcessSubmixProxy@@IEAAXH@Z @ 0x18005B60C (-UpdateActiveStreamCount@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18005FF0C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x180066E20 (-UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     std::_Func_impl_no_alloc__lambda_3dd2d7830cd09cc431be7fc98dcac29c__void_::_Func_impl_no_alloc__lambda_3dd2d7830cd09cc431be7fc98dcac29c__void___lambda_3dd2d7830cd09cc431be7fc98dcac29c__0_ @ 0x180067DD0 (std--_Func_impl_no_alloc__lambda_3dd2d7830cd09cc431be7fc98dcac29c__void_--_Func_impl_no_alloc__l.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800F8A30 (-UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800F8B00 (-UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CProcessSubmixProxy::OnDisconnectedFromStream(CProcessSubmixProxy *this, struct IAudioStreamInfo *a2)
{
  __int64 v4; // rax
  __int64 *v5; // rax
  struct CSerialWorkQueue *SerialWorkQueue; // rbx
  int v7; // eax
  __int64 v8[7]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v9; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  __int64 *v11; // [rsp+78h] [rbp+18h] BYREF
  __int64 **v12; // [rsp+80h] [rbp+20h] BYREF

  v4 = (__int64)a2 + 248;
  if ( !a2 )
    v4 = 256LL;
  if ( *(_BYTE *)v4 )
    CProcessSubmixProxy::UpdateActiveStreamCount(this, -1);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 136LL))(a2) )
    CProcessSubmixProxy::UpdateCountOfPeriodicitySensitiveClients((__int64)this, -1);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 144LL))(a2) )
    CProcessSubmixProxy::UpdateCountOfFormatSensitiveClients(this, -1);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 152LL))(a2) )
    CProcessSubmixProxy::UpdateCountOfLazyRequestClients(this, -1);
  if ( (*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 56LL))(a2) != 2
    && (*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 56LL))(a2) != 3 )
  {
    --*((_DWORD *)this + 30);
  }
  CProcessSubmixProxy::RemoveStream(this, a2);
  if ( !(*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 56LL))(a2) )
  {
    v11 = 0LL;
    v12 = &v11;
    v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v12);
    if ( (int)Microsoft::WRL::AsWeak<CProcessSubmixProxy>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this, v5) >= 0 )
    {
      SerialWorkQueue = GetSerialWorkQueue();
      v12 = (__int64 **)v11;
      if ( v11 )
        (*(void (__fastcall **)(__int64 *))(*v11 + 8))(v11);
      v9 = 0LL;
      v9 = std::_Func_impl_no_alloc__lambda_3dd2d7830cd09cc431be7fc98dcac29c__void_::_Func_impl_no_alloc__lambda_3dd2d7830cd09cc431be7fc98dcac29c__void___lambda_3dd2d7830cd09cc431be7fc98dcac29c__0_(
             v8,
             &v12);
      v7 = CSerialWorkQueue::QueueWorkItem((__int64)SerialWorkQueue, v8);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          3911LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v12);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v11);
  }
}

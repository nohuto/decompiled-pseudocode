/*
 * XREFs of ?OnConnectedToStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x18000AA20
 * Callers:
 *     ?ConnectToStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x18000ABD0 (-ConnectToStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18001CAB0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x18001DF28 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180022D84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800621E0 (-AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ??$AsWeak@VCProcessSubmixProxy@@@WRL@Microsoft@@YAJPEAVCProcessSubmixProxy@@PEAVWeakRef@01@@Z @ 0x1800630CC (--$AsWeak@VCProcessSubmixProxy@@@WRL@Microsoft@@YAJPEAVCProcessSubmixProxy@@PEAVWeakRef@01@@Z.c)
 *     ?UpdateActiveStreamCount@CProcessSubmixProxy@@IEAAXH@Z @ 0x18006843C (-UpdateActiveStreamCount@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x180076ED0 (-UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     std::_Func_impl_no_alloc__lambda_f9f451cb2ae92ac65d2020cbfdac1da8__void_::_Func_impl_no_alloc__lambda_f9f451cb2ae92ac65d2020cbfdac1da8__void___lambda_f9f451cb2ae92ac65d2020cbfdac1da8__0_ @ 0x18007F28C (std--_Func_impl_no_alloc__lambda_f9f451cb2ae92ac65d2020cbfdac1da8__void_--_Func_impl_no_alloc__l.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800F39D0 (-UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800F3AA0 (-UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CProcessSubmixProxy::OnConnectedToStream(CProcessSubmixProxy *this, struct IAudioStreamInfo *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  struct CSerialWorkQueue *SerialWorkQueue; // rbx
  int v7; // eax
  int v8[14]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  _QWORD *v11; // [rsp+78h] [rbp+18h] BYREF
  _QWORD *v12; // [rsp+80h] [rbp+20h] BYREF

  v4 = (__int64)a2 + 248;
  if ( !a2 )
    v4 = 256LL;
  if ( *(_BYTE *)v4 )
    CProcessSubmixProxy::UpdateActiveStreamCount(this, 1);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 136LL))(a2) )
    CProcessSubmixProxy::UpdateCountOfPeriodicitySensitiveClients(this, 1);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 144LL))(a2) )
    CProcessSubmixProxy::UpdateCountOfFormatSensitiveClients(this, 1);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 152LL))(a2) )
    CProcessSubmixProxy::UpdateCountOfLazyRequestClients(this, 1);
  if ( (*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 56LL))(a2) != 2
    && (*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 56LL))(a2) != 3 )
  {
    ++*((_DWORD *)this + 30);
  }
  CProcessSubmixProxy::AddStream(this, a2);
  if ( !(*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 56LL))(a2) )
  {
    v11 = 0LL;
    v12 = &v11;
    v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v12);
    if ( (int)Microsoft::WRL::AsWeak<CProcessSubmixProxy>(this, v5) >= 0 )
    {
      SerialWorkQueue = GetSerialWorkQueue();
      v12 = v11;
      if ( v11 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 8LL))(v11);
      v9 = 0LL;
      v9 = std::_Func_impl_no_alloc__lambda_f9f451cb2ae92ac65d2020cbfdac1da8__void_::_Func_impl_no_alloc__lambda_f9f451cb2ae92ac65d2020cbfdac1da8__void___lambda_f9f451cb2ae92ac65d2020cbfdac1da8__0_(
             v8,
             &v12);
      v7 = CSerialWorkQueue::QueueWorkItem(SerialWorkQueue, v8);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xEFC,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v7,
          v8[0]);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v12);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v11);
  }
}

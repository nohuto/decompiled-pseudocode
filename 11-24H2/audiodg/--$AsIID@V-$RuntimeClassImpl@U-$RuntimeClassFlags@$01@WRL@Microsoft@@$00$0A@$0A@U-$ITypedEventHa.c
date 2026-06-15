/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x140045068
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004E410 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_14004E410.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140077BB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::FtmBase>>(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  int CanCastTo; // eax
  unsigned int v4; // ebx

  *a3 = 0LL;
  if ( !*(_DWORD *)a2
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = (void *)a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return 0LL;
  }
  if ( *(_DWORD *)a2 == 1628200849
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_610c5f91_da25_52b0_ae7d_2d3a45cdf4ef.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_610c5f91_da25_52b0_ae7d_2d3a45cdf4ef.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_610c5f91_da25_52b0_ae7d_2d3a45cdf4ef.Data4[4] )
  {
    *a3 = (void *)a1;
    v4 = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 8), (const struct _GUID *)a2, a3);
    v4 = -2147467262;
    if ( CanCastTo == -2147467262 )
      return v4;
    v4 = CanCastTo;
    if ( CanCastTo < 0 )
      return v4;
  }
  (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
  return v4;
}

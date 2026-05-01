/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIApplicationViewChangeListener@@UIAppViewListener@56789@UIWindowSnappingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIApplicationViewChangeListener@@UIAppViewListener@56789@UIWindowSnappingEvents@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180401340
 * Callers:
 *     ?Create@AppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUITaskDataArbiter@23456@PEAPEAUITaskDataListener@23456@@Z @ 0x180401DD0 (-Create@AppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUITaskDataArb.c)
 *     ?QueryInterface@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804028E0 (-QueryInterface@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJAEBU_GUID@@PEAP.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800389B0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DABE0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IApplicationViewChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,IWindowSnappingEvents,Microsoft::WRL::FtmBase>>(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  const struct _GUID *v6; // rcx
  const struct _GUID *v7; // rcx
  void **v8; // r8
  void *v9; // r10
  int CanCastTo; // ebx
  const struct _GUID *v11; // rcx
  const struct _GUID *v12; // rcx
  __int64 v13; // r10
  const struct _GUID *v14; // rcx
  const struct _GUID *v15; // r9

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    && !InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    if ( InlineIsEqualGUID(v6, &GUID_e9821dd9_a9b2_47c8_9aac_7b6b042ef0b0)
      || InlineIsEqualGUID(v7, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
    {
      *v8 = v9;
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v11, &GUID_727f9e97_76ee_497b_a942_b6371328485c)
        || InlineIsEqualGUID(v12, &GUID_ab07595d_1829_43fd_a9fb_83039fa32720)
        || InlineIsEqualGUID(v14, &GUID_478fc176_f9a5_48fc_afcd_9741564de272) )
      {
        *v8 = (void *)v13;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v13 + 8), v15, v8);
      }
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)*v8 + 8LL))(*v8);
    return (unsigned int)CanCastTo;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}

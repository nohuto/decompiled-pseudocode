/*
 * XREFs of ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DQuaternion@@@Z @ 0x18029266C
 * Callers:
 *     ?SetOrientation@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18015BFAC (-SetOrientation@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180181480 (-SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180182420 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x180154D20 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x1801830B0 (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyQuaternionPropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct D2DQuaternion *a3)
{
  int v6; // ebx
  __int64 v7; // rcx
  unsigned int ChannelCallbackId; // eax
  __int128 v9; // xmm0
  __int64 v10; // r10
  int v11; // eax
  _QWORD v13[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v14; // [rsp+50h] [rbp-18h] BYREF

  v6 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this, a2)
    && (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(v7 + 24) + 6392LL) + 72LL))(
         *(_QWORD *)(*(_QWORD *)(v7 + 24) + 6392LL),
         11LL) )
  {
    ChannelCallbackId = CNotificationResource::GetChannelCallbackId(this);
    v9 = *(_OWORD *)a3;
    v13[0] = ChannelCallbackId;
    v13[1] = *((unsigned int *)this + 18);
    v14 = v9;
    v11 = CoreUICallSend(v10, v13, 2LL, 11LL, 6, &unk_18032BF8A, a2, &v14, ChannelCallbackId);
    if ( v11 != -2018375675 )
      v6 = v11;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x1E2u, 0LL);
  }
  return (unsigned int)v6;
}

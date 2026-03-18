/*
 * XREFs of ?NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z @ 0x1801A5F34
 * Callers:
 *     ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801A48A0 (-SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801A4FE0 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801A56D0 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18003DBB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x1801A5F90 (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector4PropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct D2DVector4 *a3)
{
  int v6; // ebx
  __int64 v7; // rcx
  unsigned int ChannelCallbackId; // eax
  __int128 v10; // xmm0
  __int64 v11; // r10
  int v12; // eax
  _QWORD v13[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v14; // [rsp+50h] [rbp-18h] BYREF

  v6 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this, a2)
    && (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(v7 + 24) + 6416LL) + 72LL))(
         *(_QWORD *)(*(_QWORD *)(v7 + 24) + 6416LL),
         11LL) )
  {
    ChannelCallbackId = CNotificationResource::GetChannelCallbackId(this);
    v10 = *(_OWORD *)a3;
    v13[0] = ChannelCallbackId;
    v13[1] = *((unsigned int *)this + 18);
    v14 = v10;
    v12 = CoreUICallSend(v11, v13, 2LL, 11LL, 4, &unk_180336EBE, a2, &v14, ChannelCallbackId);
    if ( v12 != -2018375675 )
      v6 = v12;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x185u, 0LL);
  }
  return (unsigned int)v6;
}

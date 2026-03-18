/*
 * XREFs of ?NotifyBooleanPropertyChanged@CPropertyChangeResource@@IEBAJI_N@Z @ 0x18029DAD0
 * Callers:
 *     ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801A48A0 (-SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801A56D0 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18003DBB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x1801A5F90 (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyBooleanPropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        unsigned __int8 a3)
{
  int v3; // ebp
  int v6; // ebx
  __int64 v7; // rcx
  unsigned int ChannelCallbackId; // eax
  __int64 v9; // r10
  int v10; // eax
  __int64 v12; // [rsp+38h] [rbp-20h]
  _QWORD v13[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = a3;
  v6 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this, a2)
    && (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(v7 + 24) + 6416LL) + 72LL))(
         *(_QWORD *)(*(_QWORD *)(v7 + 24) + 6416LL),
         11LL) )
  {
    ChannelCallbackId = CNotificationResource::GetChannelCallbackId(this);
    v13[0] = ChannelCallbackId;
    LODWORD(v12) = v3;
    v13[1] = *((unsigned int *)this + 18);
    v10 = CoreUICallSend(v9, v13, 2LL, 11LL, 1, &unk_180336EAE, a2, v12, ChannelCallbackId);
    if ( v10 != -2018375675 )
      v6 = v10;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xF5u, 0LL);
  }
  return (unsigned int)v6;
}

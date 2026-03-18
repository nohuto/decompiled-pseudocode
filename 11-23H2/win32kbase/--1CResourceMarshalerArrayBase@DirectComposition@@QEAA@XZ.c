/*
 * XREFs of ??1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ @ 0x1C00303FC
 * Callers:
 *     ??_GCTransformGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C000E0F0 (--_GCTransformGroupMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0030364 (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??_ECVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00303A0 (--_ECVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECAnimationTriggerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00C3090 (--_ECAnimationTriggerMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??1CSceneNodeMarshaler@DirectComposition@@UEAA@XZ @ 0x1C020DA20 (--1CSceneNodeMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??1CTextVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C020DA48 (--1CTextVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??_ECAtlasedRectsGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C020DD30 (--_ECAtlasedRectsGroupMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCGeometry2DGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C020DE20 (--_GCGeometry2DGroupMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECParticleEmitterVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C020DF10 (--_ECParticleEmitterVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECTransform3DGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C020E010 (--_ECTransform3DGroupMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ @ 0x1C009E150 (-Clear@CMarshaledArrayBase@DirectComposition@@IEAAXXZ.c)
 *     ?PrivateRelease@CResourceMarshaler@DirectComposition@@AEAA_KXZ @ 0x1C00D5B4C (-PrivateRelease@CResourceMarshaler@DirectComposition@@AEAA_KXZ.c)
 *     Feature_DcompK_MarshalerReleaseFix__private_IsEnabledDeviceUsage @ 0x1C00D6060 (Feature_DcompK_MarshalerReleaseFix__private_IsEnabledDeviceUsage.c)
 */

void __fastcall DirectComposition::CResourceMarshalerArrayBase::~CResourceMarshalerArrayBase(
        DirectComposition::CResourceMarshalerArrayBase *this)
{
  unsigned __int64 i; // rdi

  if ( !(unsigned int)Feature_DcompK_MarshalerReleaseFix__private_IsEnabledDeviceUsage() )
  {
    for ( i = 0LL; i < *((_QWORD *)this + 2); ++i )
      DirectComposition::CResourceMarshaler::PrivateRelease(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 1) + 8 * i));
  }
  DirectComposition::CMarshaledArrayBase::Clear(this);
}

/*
 * XREFs of ??1CPropertyStoreHelper@@QEAA@XZ @ 0x18006BBF4
 * Callers:
 *     _CSpatialProperties::GetAudioFormatForSpatialFormat_::_1_::dtor$3 @ 0x180171BF9 (_CSpatialProperties--GetAudioFormatForSpatialFormat_--_1_--dtor$3.c)
 *     _CSpatialProperties::GetSpatialFormatForAudioFormat_::_1_::dtor$1 @ 0x180171C1D (_CSpatialProperties--GetSpatialFormatForAudioFormat_--_1_--dtor$1.c)
 *     _CSpatialProperties::SetSpatialAudioSettings_::_1_::dtor$1 @ 0x180171C77 (_CSpatialProperties--SetSpatialAudioSettings_--_1_--dtor$1.c)
 *     _CSpatialProperties::SetSpatialAudioSettingsInternal_::_1_::dtor$3 @ 0x180171CAD (_CSpatialProperties--SetSpatialAudioSettingsInternal_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPropertyStoreHelper::~CPropertyStoreHelper(CPropertyStoreHelper *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *(_QWORD *)this = 0LL;
  }
}

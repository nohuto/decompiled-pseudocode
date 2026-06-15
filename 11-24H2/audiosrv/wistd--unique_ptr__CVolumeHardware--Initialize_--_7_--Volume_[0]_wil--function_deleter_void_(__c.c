/*
 * XREFs of wistd::unique_ptr__CVolumeHardware::Initialize_::_7_::Volume_[0]_wil::function_deleter_void_(__cdecl_)(void__)_&_freea___::_unique_ptr__CVolumeHardware::Initialize_::_7_::Volume_[0]_wil::function_deleter_void_(__cdecl_)(void__)_&_freea___ @ 0x180112A40
 * Callers:
 *     _CVolumeHardware::Initialize_::_1_::dtor$1 @ 0x1801709FE (_CVolumeHardware--Initialize_--_1_--dtor$1.c)
 *     _CVolumeSoftware::Initialize_::_1_::dtor$0 @ 0x180170A10 (_CVolumeSoftware--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     _freea @ 0x18004D97C (_freea.c)
 */

void __fastcall wistd::unique_ptr__CVolumeHardware::Initialize_::_7_::Volume__0__wil::function_deleter_void____cdecl___void______freea___::_unique_ptr__CVolumeHardware::Initialize_::_7_::Volume__0__wil::function_deleter_void____cdecl___void______freea___(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    freea(v1);
}

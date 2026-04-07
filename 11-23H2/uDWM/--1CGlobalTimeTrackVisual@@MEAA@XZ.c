/*
 * XREFs of ??1CGlobalTimeTrackVisual@@MEAA@XZ @ 0x180104E30
 * Callers:
 *     ??_GCGlobalTimeTrackVisual@@MEAAPEAXI@Z @ 0x180104E80 (--_GCGlobalTimeTrackVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009E160 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 */

void __fastcall CGlobalTimeTrackVisual::~CGlobalTimeTrackVisual(CGlobalTimeTrackVisual *this)
{
  __int64 *v2; // rcx

  *(_QWORD *)this = &CGlobalTimeTrackVisual::`vftable';
  v2 = (__int64 *)((char *)this + 296);
  if ( *v2 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v2);
  if ( *((_QWORD *)this + 36) )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)this + 36);
  CRenderDataVisual::~CRenderDataVisual((CBaseObject **)this);
}

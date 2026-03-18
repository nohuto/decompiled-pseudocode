/*
 * XREFs of ??1CProjectedShadow@@MEAA@XZ @ 0x1801D709C
 * Callers:
 *     ??_ECProjectedShadow@@MEAAPEAXI@Z @ 0x1801D7050 (--_ECProjectedShadow@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x180037EF0 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800454A4 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004DC30 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18008FCF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??1?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18010FBC4 (--1-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDrawListCacheS.c)
 */

void __fastcall CProjectedShadow::~CProjectedShadow(CProjectedShadow *this)
{
  __int64 *v1; // rsi
  __int64 v3; // rdi
  unsigned __int64 *v4; // rdx
  unsigned __int64 *v5; // rdx
  unsigned __int64 *v6; // rdx

  v1 = (__int64 *)((char *)this + 368);
  v3 = *((_QWORD *)this + 46);
  *(_QWORD *)this = &CProjectedShadow::`vftable';
  if ( v3 )
  {
    *(_DWORD *)(v3 + 40) = 0;
    DynArrayImpl<0>::ShrinkToSize(v3 + 16, 0x18u);
    *(_BYTE *)(v3 + 200) = 1;
  }
  v4 = (unsigned __int64 *)*((_QWORD *)this + 11);
  if ( v4 )
    CPtrArrayBase::Remove((CProjectedShadow *)((char *)this + 32), v4);
  v5 = (unsigned __int64 *)*((_QWORD *)this + 10);
  if ( v5 )
    CPtrArrayBase::Remove((CProjectedShadow *)((char *)this + 32), v5);
  v6 = (unsigned __int64 *)*((_QWORD *)this + 9);
  if ( v6 )
    CPtrArrayBase::Remove((CProjectedShadow *)((char *)this + 32), v6);
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)this + 47);
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>(v1);
  wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>((CCachedVisualImage **)this + 43);
  detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::~vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>((char **)this + 32);
  CResource::~CResource(this);
}

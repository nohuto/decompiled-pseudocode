/*
 * XREFs of ??1PropertyChangedContext@@QEAA@XZ @ 0x18006E548
 * Callers:
 *     ??_GPropertyChangedContext@@QEAAPEAXI@Z @ 0x18006E51C (--_GPropertyChangedContext@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

void __fastcall PropertyChangedContext::~PropertyChangedContext(PropertyChangedContext *this)
{
  struct _TP_WORK *v2; // rcx

  v2 = (struct _TP_WORK *)*((_QWORD *)this + 5);
  if ( v2 )
    CloseThreadpoolWork(v2);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 4);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(this);
}

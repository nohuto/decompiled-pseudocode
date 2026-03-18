/*
 * XREFs of ??1BaseBamoPeerImpl@BamoImpl@Microsoft@@UEAA@XZ @ 0x180278280
 * Callers:
 *     ??_EBamoPeer@dataprovider_AutoBamos@@MEAAPEAXI@Z @ 0x180278420 (--_EBamoPeer@dataprovider_AutoBamos@@MEAAPEAXI@Z.c)
 *     ??_EBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x180278460 (--_EBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::~BaseBamoPeerImpl(Microsoft::BamoImpl::BaseBamoPeerImpl *this)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 11) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>((Microsoft::BamoImpl::BamoImplObject **)this + 3);
}

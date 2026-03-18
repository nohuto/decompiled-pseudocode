/*
 * XREFs of ??1BaseBamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x18027816C
 * Callers:
 *     ??_EBamoConnection@dataprovider_AutoBamos@@MEAAPEAXI@Z @ 0x1802783A0 (--_EBamoConnection@dataprovider_AutoBamos@@MEAAPEAXI@Z.c)
 *     ??_GBamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@UEAAPEAXI@Z @ 0x1802783E0 (--_GBamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@UEAAPEAXI@Z.c)
 *     ??_EDataProviderRegistrarConnection@@UEAAPEAXI@Z @ 0x180278520 (--_EDataProviderRegistrarConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??1?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801D0C24 (--1-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  _QWORD *v5; // rcx
  void *v6; // rcx

  *(_QWORD *)this = &Microsoft::BamoImpl::BaseBamoConnectionImpl::`vftable';
  v2 = *((_QWORD *)this + 28);
  if ( v2 )
  {
    v3 = *(_QWORD **)(v2 + 528);
    *(_QWORD *)(v2 + 528) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
    if ( v3 )
    {
      do
      {
        v4 = (_QWORD *)v3[66];
        operator delete(v3);
        v3 = v4;
      }
      while ( v4 );
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  v5 = (_QWORD *)*((_QWORD *)this + 24);
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, (*((_QWORD *)this + 26) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFFCuLL);
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = 0LL;
  if ( v6 )
    operator delete(v6);
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)this + 15);
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>((Microsoft::BamoImpl::BamoImplObject **)this + 13);
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)this + 11);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 10);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 9);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 8);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 7);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 6);
}

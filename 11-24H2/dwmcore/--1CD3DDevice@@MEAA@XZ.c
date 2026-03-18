/*
 * XREFs of ??1CD3DDevice@@MEAA@XZ @ 0x1802232EC
 * Callers:
 *     ??_GCD3DDevice@@MEAAPEAXI@Z @ 0x1802232A0 (--_GCD3DDevice@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x18005CC10 (McTemplateU0x_EventWriteTransfer.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1801C7BD0 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x1801CA704 (-DestroyAllResources@CD3DDevice@@AEAAXXZ.c)
 *     ??1CD2DContext@@UEAA@XZ @ 0x1801CA738 (--1CD2DContext@@UEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@0@@Z @ 0x1801CD270 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@0@@Z @ 0x1801DE7B0 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@.c)
 *     ??1CKMAdapterHandle@@QEAA@XZ @ 0x180226C1C (--1CKMAdapterHandle@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCSurfaceShaderComposer@@U?$default_delete@VCSurfaceShaderComposer@@@std@@@std@@QEAA@XZ @ 0x180229058 (--1-$unique_ptr@VCSurfaceShaderComposer@@U-$default_delete@VCSurfaceShaderComposer@@@std@@@std@@.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??1?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180249A38 (--1-$vector_facade@VCDelayUnpin@CD3DDevice@@V-$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliber.c)
 *     ??1?$unique_ptr@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@U?$default_delete@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@std@@@std@@QEAA@XZ @ 0x18024F6D0 (--1-$unique_ptr@V-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@U-$default_delete@V-$CAsyncTask@UD3D.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@0@@Z @ 0x1802B8218 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCh.c)
 *     ?CleanupDelayUnpin@CD3DDevice@@AEAAXXZ @ 0x1802B8E94 (-CleanupDelayUnpin@CD3DDevice@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DDevice::~CD3DDevice(CD3DDevice *this)
{
  char *v2; // rcx
  __int64 *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rax
  int i; // edi
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CD3DDevice::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CD3DDevice::`vftable'{for `CD2DContext'};
  CD3DDevice::CleanupDelayUnpin(this);
  CD3DDevice::DestroyAllResources(this);
  v2 = (char *)*((_QWORD *)this + 121);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 121) = 0LL;
  }
  v3 = (__int64 *)((char *)this + 560);
  v4 = *((_QWORD *)this + 70);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 888LL))(v4);
    v5 = *v3;
    *v3 = 0LL;
    if ( *((_QWORD *)this + 57) )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    *((_QWORD *)this + 57) = v5;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0x_EventWriteTransfer(v4, &EVTDESC_HWDEVICE_DESTROY, (__int64)this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 274);
  `vector destructor iterator'(
    (char *)this + 2160,
    8LL,
    4LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>);
  `vector destructor iterator'(
    (char *)this + 2152,
    8LL,
    1LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>);
  `vector destructor iterator'(
    (char *)this + 1768,
    8LL,
    48LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>);
  `vector destructor iterator'(
    (char *)this + 1576,
    8LL,
    24LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>);
  `vector destructor iterator'(
    (char *)this + 1544,
    8LL,
    4LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>);
  std::unique_ptr<CSurfaceShaderComposer>::~unique_ptr<CSurfaceShaderComposer>((char *)this + 1536);
  if ( *((_QWORD *)this + 189) )
  {
    for ( i = 0; i < *((_DWORD *)this + 382); ++i )
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(*((_QWORD *)this + 190) + 8LL * i));
    operator delete(*((void **)this + 189));
    *((_QWORD *)this + 189) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 190);
  if ( v7 )
  {
    operator delete(v7);
    *((_QWORD *)this + 190) = 0LL;
  }
  *((_DWORD *)this + 382) = 0;
  v8 = *((_QWORD *)this + 179);
  if ( v8 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CBetterCheckMPOCache>>>(v8, *((_QWORD *)this + 180));
    std::_Deallocate<16,0>(
      *((_QWORD **)this + 179),
      (*((_QWORD *)this + 181) - *((_QWORD *)this + 179)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 179) = 0LL;
    *((_QWORD *)this + 180) = 0LL;
    *((_QWORD *)this + 181) = 0LL;
  }
  v9 = *((_QWORD *)this + 176);
  if ( v9 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CCheckMPOCache>>>(v9, *((_QWORD *)this + 177));
    std::_Deallocate<16,0>(
      *((_QWORD **)this + 176),
      (*((_QWORD *)this + 178) - *((_QWORD *)this + 176)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 176) = 0LL;
    *((_QWORD *)this + 177) = 0LL;
    *((_QWORD *)this + 178) = 0LL;
  }
  detail::vector_facade<CD3DDevice::CDelayUnpin,detail::buffer_impl<CD3DDevice::CDelayUnpin,7,1,detail::liberal_expansion_policy>>::~vector_facade<CD3DDevice::CDelayUnpin,detail::buffer_impl<CD3DDevice::CDelayUnpin,7,1,detail::liberal_expansion_policy>>((char *)this + 1216);
  *((_QWORD *)this + 140) = &CD3DResourceManager::`vftable';
  std::unique_ptr<CAsyncTask<CD3DDevice::D3D12Resources>>::~unique_ptr<CAsyncTask<CD3DDevice::D3D12Resources>>((char *)this + 1064);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 130);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 129);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 128);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 127);
  CKMAdapterHandle::~CKMAdapterHandle((CD3DDevice *)((char *)this + 632));
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 76);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 75);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 74);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 73);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 72);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 71);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 70);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 69);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 68);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 67);
  v10 = *((_QWORD *)this + 64);
  if ( v10 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CAtlasTexture>>>(v10, *((_QWORD *)this + 65));
    std::_Deallocate<16,0>(
      *((_QWORD **)this + 64),
      (*((_QWORD *)this + 66) - *((_QWORD *)this + 64)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 64) = 0LL;
    *((_QWORD *)this + 65) = 0LL;
    *((_QWORD *)this + 66) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 464);
  CD2DContext::~CD2DContext((CD3DDevice *)((char *)this + 16));
  CD3DResourceLeakChecker::~CD3DResourceLeakChecker((CD3DDevice *)((char *)this + 456));
}

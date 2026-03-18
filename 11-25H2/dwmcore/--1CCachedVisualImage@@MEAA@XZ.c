/*
 * XREFs of ??1CCachedVisualImage@@MEAA@XZ @ 0x1801851AC
 * Callers:
 *     ??_ECCachedVisualImage@@MEAAPEAXI@Z @ 0x180185160 (--_ECCachedVisualImage@@MEAAPEAXI@Z.c)
 *     ??1CBackdropVisualImage@@UEAA@XZ @ 0x18021CF7C (--1CBackdropVisualImage@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x180083B2C (--1COcclusionContext@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@0@@Z @ 0x180185434 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delet.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CCachedVisualImage::~CCachedVisualImage(CCachedVisualImage *this)
{
  __int64 v1; // r8
  __int64 v3; // rcx
  unsigned int v4; // edx
  __int64 v5; // r9
  __int64 v6; // rcx

  v1 = *((_QWORD *)this + 3);
  *(_QWORD *)this = &CCachedVisualImage::`vftable'{for `CResource'};
  *((_QWORD *)this + 9) = &CBackdropVisualImage::`vftable'{for `IBitmapResource'};
  *((_QWORD *)this + 10) = &CBackdropVisualImage::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 11) = &CCachedVisualImage::`vftable'{for `IDeviceResourceNotify'};
  v3 = 0LL;
  v4 = *(_DWORD *)(v1 + 5936);
  v5 = *(_QWORD *)(v1 + 5912);
  if ( v4 )
  {
    do
    {
      if ( this == *(CCachedVisualImage **)(v5 + 8 * v3) )
        break;
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < v4 );
  }
  if ( (unsigned int)v3 < v4 )
  {
    while ( (unsigned int)v3 < v4 - 1 )
    {
      *(_QWORD *)(v5 + 8 * v3) = *(_QWORD *)(v5 + 8LL * (unsigned int)(v3 + 1));
      v3 = (unsigned int)(v3 + 1);
      v4 = *(_DWORD *)(v1 + 5936);
    }
    *(_DWORD *)(v1 + 5936) = v4 - 1;
  }
  operator delete(*((void **)this + 20), 0x44uLL);
  COcclusionContext::~COcclusionContext((CCachedVisualImage *)((char *)this + 208));
  v6 = *((_QWORD *)this + 23);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CCachedVisualImage::CCachedTarget>>>(v6, *((_QWORD *)this + 24));
    std::_Deallocate<16,0>(
      *((_QWORD **)this + 23),
      (*((_QWORD *)this + 25) - *((_QWORD *)this + 23)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 23) = 0LL;
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 22);
  CResource::~CResource(this);
}

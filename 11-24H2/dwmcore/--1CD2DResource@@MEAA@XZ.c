/*
 * XREFs of ??1CD2DResource@@MEAA@XZ @ 0x1801F21C0
 * Callers:
 *     ??1CD2DBrush@@UEAA@XZ @ 0x1801A24FC (--1CD2DBrush@@UEAA@XZ.c)
 *     ??1CD2DBitmap@@UEAA@XZ @ 0x1801A50EC (--1CD2DBitmap@@UEAA@XZ.c)
 *     ??1CD2DEffect@@MEAA@XZ @ 0x180214AFC (--1CD2DEffect@@MEAA@XZ.c)
 *     ??1CD2DInk@@MEAA@XZ @ 0x1802CCDD8 (--1CD2DInk@@MEAA@XZ.c)
 * Callees:
 *     ?RemoveHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x1802BC49C (-RemoveHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 */

void __fastcall CD2DResource::~CD2DResource(CD2DResource *this)
{
  __int64 v2; // rdi
  char *v3; // rax
  __int64 v4; // rdx
  char **v5; // rcx

  if ( *((_BYTE *)this + 48) )
  {
    v2 = *((_QWORD *)this + 5);
    v3 = (char *)this + 56;
    v4 = *((_QWORD *)this + 7);
    if ( *(CD2DResource **)(v4 + 8) != (CD2DResource *)((char *)this + 56)
      || (v5 = (char **)*((_QWORD *)this + 8), *v5 != v3) )
    {
      __fastfail(3u);
    }
    *v5 = (char *)v4;
    *(_QWORD *)(v4 + 8) = v5;
    if ( *((_BYTE *)this + 49) )
    {
      if ( *((_BYTE *)this + 50) )
        CD2DContext::RemoveHwProtectedResource(*(CD2DContext **)(v2 + 24));
      --*(_DWORD *)(v2 + 16);
    }
    *((_BYTE *)this + 48) = 0;
  }
  CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>::~CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>(this);
}

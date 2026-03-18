/*
 * XREFs of ?GetHDRMetaDataType@CCompositionSurface@@QEBAJ_KPEAW4DXGI_HDR_METADATA_TYPE@@@Z @ 0x14004DB6C
 * Callers:
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x140047360 (NtQueryCompositionSurfaceHDRMetaData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionSurface::GetHDRMetaDataType(
        CCompositionSurface *this,
        __int64 a2,
        enum DXGI_HDR_METADATA_TYPE *a3)
{
  unsigned int v3; // ebx
  _QWORD **v4; // rcx
  _QWORD *i; // rax

  v3 = -1073741275;
  if ( *((_DWORD *)this + 24) )
  {
    v4 = (_QWORD **)((char *)this + 80);
    for ( i = *v4; i != v4; i = (_QWORD *)*i )
    {
      if ( *(i - 1) == a2 )
      {
        v3 = 0;
        *(_DWORD *)a3 = (*(__int64 (__fastcall **)(_QWORD *))(*(i - 3) + 136LL))(i - 3);
        return v3;
      }
    }
  }
  return v3;
}

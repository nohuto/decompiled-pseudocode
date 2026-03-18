/*
 * XREFs of ?ReleaseD3DResources@CD3DTexture@@EEAAXXZ @ 0x1801E0630
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z @ 0x1801779AC (--$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DTexture::ReleaseD3DResources(CD3DTexture *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 i; // rdi

  ReleaseInterface<IDXGIFactory7>((__int64 *)this + 15);
  if ( *((_QWORD *)this + 24) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 46); i = (unsigned int)(i + 1) )
      ReleaseInterface<IDXGIFactory7>((__int64 *)(*((_QWORD *)this + 24) + 8 * i));
  }
  v2 = *((_QWORD *)this + 25);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 25) = 0LL;
  }
  ReleaseInterface<IDXGIFactory7>((__int64 *)this + 27);
  v3 = *((_QWORD *)this + 26);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 26) = 0LL;
  }
  CD3DTexture::ReleaseD2DBitmaps(this);
}

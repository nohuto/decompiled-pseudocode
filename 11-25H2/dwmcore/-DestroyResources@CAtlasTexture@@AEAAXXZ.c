/*
 * XREFs of ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x1801A0F90
 * Callers:
 *     ??1CAtlasTexture@@QEAA@XZ @ 0x1801A0F58 (--1CAtlasTexture@@QEAA@XZ.c)
 *     ?NotifyInvalidResource@CAtlasTexture@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802D22E0 (-NotifyInvalidResource@CAtlasTexture@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?NotifyOwner@CAtlasEntry@@AEBAXXZ @ 0x1801A18DC (-NotifyOwner@CAtlasEntry@@AEBAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAtlasTexture::DestroyResources(CAtlasTexture *this)
{
  unsigned int v1; // eax
  int v3; // ecx
  __int64 v4; // rdi
  __int64 v5; // rsi
  CAtlasEntry *v6; // rcx
  void *v7; // rcx

  v1 = *((_DWORD *)this + 6);
  v3 = *((_DWORD *)this + 7) + *((_DWORD *)this + 8);
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 8) = 0;
  if ( *((_QWORD *)this + 1) )
  {
    if ( v3 != v1 && v1 )
    {
      v4 = 0LL;
      v5 = v1;
      do
      {
        v6 = *(CAtlasEntry **)(v4 + *((_QWORD *)this + 2));
        if ( (unsigned __int64)v6 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          *(_QWORD *)v6 = 0LL;
          *((_DWORD *)v6 + 4) = -1;
          CAtlasEntry::NotifyOwner(v6);
        }
        v4 += 8LL;
        --v5;
      }
      while ( v5 );
    }
    (*(void (__fastcall **)(_QWORD, CAtlasTexture *))(**((_QWORD **)this + 1) + 80LL))(*((_QWORD *)this + 1), this);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
  }
  v7 = (void *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v7 )
    operator delete(v7);
}

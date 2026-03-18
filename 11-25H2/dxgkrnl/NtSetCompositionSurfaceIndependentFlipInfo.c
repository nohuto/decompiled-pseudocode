/*
 * XREFs of NtSetCompositionSurfaceIndependentFlipInfo @ 0x1400453F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140009854 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1400099B4 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x14000A8E4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     ?SetIndependentFlip@CCompositionSurface@@QEAAJ_K_N1IIPEBIPEAH@Z @ 0x14004D554 (-SetIndependentFlip@CCompositionSurface@@QEAAJ_K_N1IIPEBIPEAH@Z.c)
 *     RtlCopyFromUser @ 0x140065368 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x14018AE14 (RtlCopyToUser.c)
 */

__int64 __fastcall NtSetCompositionSurfaceIndependentFlipInfo(
        void *a1,
        void *Src,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        void *Srca,
        void *a8)
{
  int v11; // ebx
  PVOID v12; // rdi
  unsigned int v13; // ecx
  __int64 Win32kImportTable; // rax
  __int64 v15; // r8
  PVOID Object; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+48h] [rbp-C0h] BYREF
  CCompositionSurface *v19; // [rsp+50h] [rbp-B8h] BYREF
  int v20; // [rsp+58h] [rbp-B0h]
  PVOID v21; // [rsp+60h] [rbp-A8h]
  void *v22; // [rsp+68h] [rbp-A0h]
  void *v23; // [rsp+70h] [rbp-98h]
  unsigned int v24[16]; // [rsp+80h] [rbp-88h] BYREF

  v22 = a1;
  v23 = a8;
  v11 = 0;
  v12 = 0LL;
  v21 = 0LL;
  v18 = 0;
  if ( Src
    && Srca
    && a6
    && (v13 = (((a6 & 0x55555555) + ((a6 >> 1) & 0x55555555)) & 0x33333333)
            + ((((a6 & 0x55555555) + ((a6 >> 1) & 0x55555555)) >> 2) & 0x33333333),
        LODWORD(v19) = (unsigned __int16)((unsigned __int8)((v13 & 0xF) + ((v13 >> 4) & 0xF))
                                        + (unsigned __int8)((unsigned __int16)((v13 & 0xF0F) + ((v13 >> 4) & 0xF0F)) >> 8))
                     + (((((v13 & 0xF0F0F0F) + ((v13 >> 4) & 0xF0F0F0F)) & 0xFF00FF)
                       + ((((v13 & 0xF0F0F0F) + ((v13 >> 4) & 0xF0F0F0F)) >> 8) & 0xFF00FF)) >> 16),
        (unsigned int)v19 < 0x10) )
  {
    Object = 0LL;
    RtlCopyFromUser(&Object, Src, 8uLL);
    v12 = Object;
    v21 = Object;
    RtlCopyFromUser(v24, Srca, 4LL * (unsigned int)v19);
  }
  else
  {
    v11 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v11 >= 0 )
  {
    Win32kImportTable = DxgkGetWin32kImportTable();
    if ( (*(unsigned int (**)(void))(Win32kImportTable + 608))() )
    {
      Object = 0LL;
      v11 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v15, (struct CompositionSurfaceObject **)&Object);
      if ( v11 >= 0 )
      {
        v19 = 0LL;
        v11 = CompositionSurfaceObject::LockForWrite((CompositionSurfaceObject *)Object, &v19);
        if ( v11 >= 0 )
        {
          v11 = CCompositionSurface::SetIndependentFlip(v19, (unsigned __int64)v12, a3 != 0, a4 != 0, a5, a6, v24, &v18);
          CCompositionSurface::UnlockAndRelease(v19);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v11 = -1073741790;
    }
  }
  if ( v11 >= 0 )
  {
    if ( a8 )
    {
      RtlCopyToUser(a8, &v18, 4uLL);
    }
    else
    {
      v11 = -1073741811;
      v20 = -1073741811;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v11;
}

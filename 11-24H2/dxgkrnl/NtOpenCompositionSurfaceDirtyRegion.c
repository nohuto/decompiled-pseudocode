/*
 * XREFs of NtOpenCompositionSurfaceDirtyRegion @ 0x140043640
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140018D84 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x140019E18 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ?OpenLifetimeDirtyRegion@CCompositionSurface@@QEBAJ_KAEBUCSM_REALIZATION_INFO@@PEAUCSM_RGNDATA_@@@Z @ 0x14002C76C (-OpenLifetimeDirtyRegion@CCompositionSurface@@QEBAJ_KAEBUCSM_REALIZATION_INFO@@PEAUCSM_RGNDATA_@.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1400383AC (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     RtlCopyFromUser @ 0x140064F88 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     RtlCopyToUser @ 0x14018D054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtOpenCompositionSurfaceDirtyRegion(void *a1, void *Src, void *a3, void *a4)
{
  int v8; // ebx
  CCompositionSurface *v9; // rsi
  __int64 Win32kImportTable; // rax
  __int64 v11; // r8
  CCompositionSurface *v13; // [rsp+20h] [rbp-178h] BYREF
  int v14; // [rsp+28h] [rbp-170h]
  PVOID Object; // [rsp+30h] [rbp-168h] BYREF
  CCompositionSurface *v16; // [rsp+38h] [rbp-160h]
  void *v17; // [rsp+40h] [rbp-158h]
  void *v18; // [rsp+48h] [rbp-150h]
  __int128 v19; // [rsp+50h] [rbp-148h] BYREF
  __int128 v20; // [rsp+60h] [rbp-138h]
  __int64 v21; // [rsp+70h] [rbp-128h]
  __int128 v22; // [rsp+78h] [rbp-120h] BYREF
  __int128 v23; // [rsp+88h] [rbp-110h]
  __int64 v24; // [rsp+98h] [rbp-100h]
  _BYTE Srca[176]; // [rsp+A0h] [rbp-F8h] BYREF

  v17 = a1;
  v18 = a4;
  v8 = 0;
  Object = 0LL;
  v9 = 0LL;
  v16 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  memset(Srca, 0, 0xA4uLL);
  if ( Src && a3 )
  {
    v13 = 0LL;
    RtlCopyFromUser(&v13, Src, 8uLL);
    v9 = v13;
    v16 = v13;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    RtlCopyFromUser(&v19, a3, 0x28uLL);
    v22 = v19;
    v23 = v20;
    v24 = v21;
  }
  else
  {
    v8 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v8 >= 0 )
  {
    Win32kImportTable = DxgkGetWin32kImportTable();
    if ( (*(unsigned int (**)(void))(Win32kImportTable + 608))() )
    {
      v8 = CompositionSurfaceObject::ResolveHandle(a1, 1u, v11, (struct CompositionSurfaceObject **)&Object);
      if ( v8 >= 0 )
      {
        v13 = 0LL;
        v8 = CompositionSurfaceObject::LockForRead((CompositionSurfaceObject *)Object, &v13);
        if ( v8 >= 0 )
        {
          v8 = CCompositionSurface::OpenLifetimeDirtyRegion(
                 v13,
                 (__int64)v9,
                 (const struct CSM_REALIZATION_INFO *)&v22,
                 (struct CSM_RGNDATA_ *)Srca);
          CCompositionSurface::UnlockAndRelease(v13);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v8 = -1073741790;
    }
  }
  if ( a4 )
  {
    RtlCopyToUser(a4, Srca, 0xA4uLL);
  }
  else
  {
    v8 = -1073741811;
    v14 = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v8;
}

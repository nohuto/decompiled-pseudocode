/*
 * XREFs of NtConfirmCompositionSurfaceIndependentFlipEntry @ 0x14009A390
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140009854 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1400099B4 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x14000A8E4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x14002F0A0 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     RtlCopyFromUser @ 0x140065368 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtConfirmCompositionSurfaceIndependentFlipEntry(
        void *a1,
        void *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  int Buffer; // ebx
  CCompositionSurface *v9; // rdi
  __int64 Win32kImportTable; // rax
  __int64 v11; // r8
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  CCompositionSurface *v14; // [rsp+38h] [rbp-40h]
  struct CCompositionBuffer *v15; // [rsp+40h] [rbp-38h] BYREF
  CCompositionSurface *v16; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v17; // [rsp+90h] [rbp+18h]
  unsigned int v18; // [rsp+98h] [rbp+20h]

  v18 = a4;
  v17 = a3;
  Buffer = 0;
  v9 = 0LL;
  v14 = 0LL;
  if ( a2 )
  {
    v16 = 0LL;
    RtlCopyFromUser(&v16, a2, 8uLL);
    v9 = v16;
    v14 = v16;
  }
  else
  {
    Buffer = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( Buffer >= 0 )
  {
    Win32kImportTable = DxgkGetWin32kImportTable();
    if ( (*(unsigned int (**)(void))(Win32kImportTable + 608))() )
    {
      Object = 0LL;
      Buffer = CompositionSurfaceObject::ResolveHandle(a1, 2u, v11, (struct CompositionSurfaceObject **)&Object);
      if ( Buffer >= 0 )
      {
        v16 = 0LL;
        Buffer = CompositionSurfaceObject::LockForWrite((CompositionSurfaceObject *)Object, &v16);
        if ( Buffer >= 0 )
        {
          v15 = 0LL;
          Buffer = CCompositionSurface::FindBuffer(v16, (__int64)v9, &v15);
          if ( Buffer >= 0 )
            Buffer = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v15 + 208LL))(
                       v15,
                       a3,
                       a4,
                       a5);
          CCompositionSurface::UnlockAndRelease(v16);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      Buffer = -1073741790;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)Buffer;
}

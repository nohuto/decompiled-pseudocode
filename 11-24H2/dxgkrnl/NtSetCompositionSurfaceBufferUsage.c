/*
 * XREFs of NtSetCompositionSurfaceBufferUsage @ 0x1400480B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140018D84 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x140018EE8 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x140019E18 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x14002F6E0 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     RtlCopyFromUser @ 0x140064F88 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtSetCompositionSurfaceBufferUsage(void *a1, void *a2, unsigned int a3, int a4, int a5)
{
  int v8; // edi
  int v9; // ebx
  CCompositionSurface *v10; // rsi
  __int64 Win32kImportTable; // rax
  __int64 v12; // r8
  struct CCompositionBuffer *v13; // rdx
  PVOID Object; // [rsp+20h] [rbp-58h] BYREF
  CCompositionSurface *v16; // [rsp+28h] [rbp-50h]
  struct CCompositionBuffer *v17; // [rsp+30h] [rbp-48h] BYREF
  CCompositionSurface *v18; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v19; // [rsp+90h] [rbp+18h]
  int v20; // [rsp+98h] [rbp+20h]

  v20 = a4;
  v19 = a3;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  v16 = 0LL;
  if ( a2 )
  {
    v18 = 0LL;
    RtlCopyFromUser(&v18, a2, 8uLL);
    v10 = v18;
    v16 = v18;
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v9 >= 0 && a3 > 2 )
    v9 = -1073741811;
  KeEnterCriticalRegion();
  if ( v9 >= 0 )
  {
    Win32kImportTable = DxgkGetWin32kImportTable();
    if ( (*(unsigned int (**)(void))(Win32kImportTable + 608))() )
    {
      Object = 0LL;
      v9 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v12, (struct CompositionSurfaceObject **)&Object);
      if ( v9 >= 0 )
      {
        v18 = 0LL;
        v9 = CompositionSurfaceObject::LockForWrite((CompositionSurfaceObject *)Object, &v18);
        if ( v9 >= 0 )
        {
          v17 = 0LL;
          if ( (int)CCompositionSurface::FindBuffer(v18, (__int64)v10, &v17) >= 0 )
          {
            v13 = v17;
            *((_DWORD *)v17 + 49) = a3;
            LOBYTE(v8) = a4 != 0;
            *((_DWORD *)v13 + 50) = v8;
            *((_DWORD *)v13 + 51) = a5;
          }
          CCompositionSurface::UnlockAndRelease(v18);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v9 = -1073741790;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}

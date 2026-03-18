/*
 * XREFs of NtSetCompositionSurfaceAnalogExclusive @ 0x14009C870
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140018D84 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x140018EE8 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x140019E18 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     DxgkGetSessionTokenManager @ 0x14001A800 (DxgkGetSessionTokenManager.c)
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtSetCompositionSurfaceAnalogExclusive(void *a1, int a2)
{
  __int64 Win32kImportTable; // rax
  CCompositionSurface *v5; // rbx
  __int64 v6; // r8
  int SessionTokenManager; // eax
  int v8; // edi
  CCompositionSurface *v9; // rcx
  CCompositionSurface *v11; // [rsp+50h] [rbp+18h] BYREF
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  Win32kImportTable = DxgkGetWin32kImportTable();
  if ( (*(unsigned int (**)(void))(Win32kImportTable + 608))() )
  {
    v5 = 0LL;
    Object = 0LL;
    v11 = 0LL;
    KeEnterCriticalRegion();
    if ( a2
      || (SessionTokenManager = DxgkGetSessionTokenManager(&v11),
          v5 = v11,
          v8 = SessionTokenManager,
          SessionTokenManager >= 0) )
    {
      v8 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v6, (struct CompositionSurfaceObject **)&Object);
      if ( v8 >= 0 )
      {
        v11 = 0LL;
        v8 = CompositionSurfaceObject::LockForWrite((CompositionSurfaceObject *)Object, &v11);
        if ( v8 >= 0 )
        {
          v9 = v11;
          *((_BYTE *)v11 + 169) = a2 != 0;
          CCompositionSurface::UnlockAndRelease(v9);
          if ( !a2 )
            (*(void (__fastcall **)(CCompositionSurface *))(*(_QWORD *)v5 + 136LL))(v5);
        }
        ObfDereferenceObject(Object);
      }
    }
    if ( v5 )
      (*(void (__fastcall **)(CCompositionSurface *))(*(_QWORD *)v5 + 8LL))(v5);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v8;
}

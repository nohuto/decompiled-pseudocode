/*
 * XREFs of NtSetCompositionSurfaceStatistics @ 0x14009A830
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

__int64 __fastcall NtSetCompositionSurfaceStatistics(struct CCompositionSurface *a1, void *a2, void *a3)
{
  int v5; // edi
  PVOID v6; // rsi
  __int64 Win32kImportTable; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  CCompositionSurface *v10; // r10
  struct CCompositionSurface *v11; // rax
  struct CCompositionSurface *v13; // [rsp+20h] [rbp-78h] BYREF
  PVOID Object; // [rsp+28h] [rbp-70h] BYREF
  PVOID v15; // [rsp+30h] [rbp-68h]
  __int128 v16; // [rsp+38h] [rbp-60h]
  __int128 v17; // [rsp+48h] [rbp-50h]
  __int128 v18; // [rsp+58h] [rbp-40h] BYREF
  __int128 v19; // [rsp+68h] [rbp-30h]

  v13 = a1;
  v5 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v6 = 0LL;
  v15 = 0LL;
  if ( a3 && a2 )
  {
    Object = 0LL;
    RtlCopyFromUser(&Object, a2, 8uLL);
    v6 = Object;
    v15 = Object;
    v18 = 0LL;
    v19 = 0LL;
    RtlCopyFromUser(&v18, a3, 0x20uLL);
    v16 = v18;
    v17 = v19;
  }
  else
  {
    v5 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v5 >= 0 )
  {
    Win32kImportTable = DxgkGetWin32kImportTable();
    if ( (*(unsigned int (__fastcall **)(__int64))(Win32kImportTable + 608))(v8) )
    {
      Object = 0LL;
      v5 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v9, (struct CompositionSurfaceObject **)&Object);
      if ( v5 >= 0 )
      {
        v13 = 0LL;
        v5 = CompositionSurfaceObject::LockForWrite((CompositionSurfaceObject *)Object, &v13);
        if ( v5 >= 0 )
        {
          v10 = v13;
          if ( *((_BYTE *)v13 + 129) )
          {
            v13 = 0LL;
            if ( (int)CCompositionSurface::FindBuffer(v10, (__int64)v6, &v13) >= 0 )
            {
              v11 = v13;
              *(_OWORD *)((char *)v13 + 216) = v16;
              *(_OWORD *)((char *)v11 + 232) = v17;
              *((_DWORD *)v11 + 52) = 0;
              *((_DWORD *)v11 + 62) = 0;
              *((_BYTE *)v11 + 42) = 1;
            }
          }
          else
          {
            v5 = -1073741823;
          }
          CCompositionSurface::UnlockAndRelease(v10);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v5 = -1073741790;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}

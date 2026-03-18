/*
 * XREFs of NtQueryCompositionSurfaceHDRMetaData @ 0x140046D80
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140018D84 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x140019E18 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x14002F6E0 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1400383AC (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?GetHDRMetaDataType@CCompositionSurface@@QEBAJ_KPEAW4DXGI_HDR_METADATA_TYPE@@@Z @ 0x14004D50C (-GetHDRMetaDataType@CCompositionSurface@@QEBAJ_KPEAW4DXGI_HDR_METADATA_TYPE@@@Z.c)
 *     RtlCopyFromUser @ 0x140064F88 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     RtlCopyToUser @ 0x14018D054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceHDRMetaData(
        CCompositionSurface *a1,
        void *Src,
        void *a3,
        unsigned __int64 a4,
        void *a5)
{
  int HDRMetaDataType; // ebx
  PVOID v9; // rsi
  __int64 Win32kImportTable; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  CCompositionSurface *v13; // r14
  int v14; // eax
  size_t v15; // r8
  CCompositionSurface *v17; // [rsp+20h] [rbp-D8h] BYREF
  int Srca; // [rsp+28h] [rbp-D0h] BYREF
  int v19; // [rsp+2Ch] [rbp-CCh]
  PVOID Object; // [rsp+30h] [rbp-C8h] BYREF
  PVOID v21; // [rsp+38h] [rbp-C0h]
  void *v22; // [rsp+40h] [rbp-B8h]
  void *v23; // [rsp+48h] [rbp-B0h]
  void *v24; // [rsp+50h] [rbp-A8h]
  _BYTE v25[80]; // [rsp+60h] [rbp-98h] BYREF

  v22 = a3;
  v17 = a1;
  v23 = a3;
  v24 = a5;
  HDRMetaDataType = 0;
  v9 = 0LL;
  v21 = 0LL;
  Srca = 0;
  memset(v25, 0, 0x48uLL);
  if ( Src )
  {
    Object = 0LL;
    RtlCopyFromUser(&Object, Src, 8uLL);
    v9 = Object;
    v21 = Object;
  }
  else
  {
    HDRMetaDataType = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( HDRMetaDataType >= 0 )
  {
    Win32kImportTable = DxgkGetWin32kImportTable();
    if ( !(*(unsigned int (__fastcall **)(__int64))(Win32kImportTable + 608))(v11) )
      HDRMetaDataType = -1073741790;
    if ( HDRMetaDataType >= 0 )
    {
      Object = 0LL;
      HDRMetaDataType = CompositionSurfaceObject::ResolveHandle(
                          a1,
                          1u,
                          v12,
                          (struct CompositionSurfaceObject **)&Object);
      if ( HDRMetaDataType >= 0 )
      {
        v17 = 0LL;
        HDRMetaDataType = CompositionSurfaceObject::LockForRead((CompositionSurfaceObject *)Object, &v17);
        if ( HDRMetaDataType < 0 )
        {
LABEL_21:
          ObfDereferenceObject(Object);
          goto LABEL_22;
        }
        v13 = v17;
        HDRMetaDataType = CCompositionSurface::GetHDRMetaDataType(
                            v17,
                            (unsigned __int64)v9,
                            (enum DXGI_HDR_METADATA_TYPE *)&Srca);
        if ( HDRMetaDataType >= 0 && Srca )
        {
          if ( Srca == 1 )
          {
            v17 = 0LL;
            HDRMetaDataType = CCompositionSurface::FindBuffer(v13, (__int64)v9, &v17);
            if ( HDRMetaDataType < 0 )
              goto LABEL_20;
            v14 = (*(__int64 (__fastcall **)(CCompositionSurface *, _BYTE *))(*(_QWORD *)v17 + 152LL))(v17, v25);
          }
          else
          {
            if ( Srca != 2 )
            {
              HDRMetaDataType = -1073741811;
              goto LABEL_20;
            }
            v17 = 0LL;
            HDRMetaDataType = CCompositionSurface::FindBuffer(v13, (__int64)v9, &v17);
            if ( HDRMetaDataType < 0 )
              goto LABEL_20;
            v14 = (*(__int64 (__fastcall **)(CCompositionSurface *, _BYTE *))(*(_QWORD *)v17 + 160LL))(v17, v25);
          }
          HDRMetaDataType = v14;
        }
LABEL_20:
        CCompositionSurface::UnlockAndRelease(v13);
        goto LABEL_21;
      }
    }
  }
LABEL_22:
  if ( v22 )
  {
    RtlCopyToUser(v22, &Srca, 4uLL);
  }
  else
  {
    HDRMetaDataType = -1073741811;
    v19 = -1073741811;
  }
  if ( HDRMetaDataType >= 0 && a5 && Srca )
  {
    if ( Srca == 1 )
    {
      v15 = 28LL;
      if ( a4 >= 0x1C )
        goto LABEL_34;
    }
    else
    {
      if ( Srca != 2 )
      {
        HDRMetaDataType = -1073741811;
LABEL_36:
        v19 = HDRMetaDataType;
        goto LABEL_37;
      }
      if ( a4 >= 0x48 )
      {
        v15 = 72LL;
LABEL_34:
        RtlCopyToUser(a5, v25, v15);
        goto LABEL_37;
      }
    }
    HDRMetaDataType = -1073741789;
    goto LABEL_36;
  }
LABEL_37:
  KeLeaveCriticalRegion();
  return (unsigned int)HDRMetaDataType;
}

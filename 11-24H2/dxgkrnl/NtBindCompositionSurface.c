/*
 * XREFs of NtBindCompositionSurface @ 0x1400442C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z @ 0x1400182C0 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140018D84 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x140018DFC (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x140018EE8 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x140019E18 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     DxgkGetSessionTokenManager @ 0x14001A800 (DxgkGetSessionTokenManager.c)
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     RtlCopyFromUser @ 0x140064F88 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     RtlCopyToUser @ 0x14018D054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtBindCompositionSurface(void *a1, int a2, unsigned int a3, int a4, void *a5, void *a6)
{
  int SessionTokenManager; // ebx
  __int64 v7; // rdi
  CompositionSurfaceObject *v8; // r14
  struct CCompositionSurface *v9; // rsi
  char v10; // r12
  void *v11; // r13
  __int64 Win32kImportTable; // rax
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rax
  bool v17; // [rsp+20h] [rbp-AF8h]
  __int64 v19; // [rsp+48h] [rbp-AD0h] BYREF
  unsigned int v20; // [rsp+50h] [rbp-AC8h]
  CompositionSurfaceObject *v21; // [rsp+58h] [rbp-AC0h] BYREF
  struct CCompositionSurface *v22; // [rsp+60h] [rbp-AB8h] BYREF
  unsigned __int64 v23; // [rsp+68h] [rbp-AB0h] BYREF
  void *v24; // [rsp+70h] [rbp-AA8h]
  void *v25; // [rsp+78h] [rbp-AA0h]
  void *v26; // [rsp+80h] [rbp-A98h]
  _BYTE Src[1320]; // [rsp+88h] [rbp-A90h] BYREF
  _QWORD v28[164]; // [rsp+5B0h] [rbp-568h] BYREF

  v24 = a1;
  v25 = a1;
  v20 = a3;
  v26 = a6;
  SessionTokenManager = 0;
  memset(v28, 0, sizeof(v28));
  v23 = 0LL;
  v7 = 0LL;
  v19 = 0LL;
  v8 = 0LL;
  v21 = 0LL;
  v9 = 0LL;
  v22 = 0LL;
  v10 = 0;
  if ( a5 )
  {
    memset(Src, 0, 0x520uLL);
    RtlCopyFromUser(Src, a5, 0x520uLL);
    memmove(v28, Src, 0x520uLL);
    RtlCopyToUser(a6, &v23, 8uLL);
  }
  else
  {
    SessionTokenManager = -1073741811;
  }
  v11 = v24;
  KeEnterCriticalRegion();
  if ( SessionTokenManager >= 0 )
  {
    Win32kImportTable = DxgkGetWin32kImportTable();
    if ( (*(unsigned int (**)(void))(Win32kImportTable + 608))() )
    {
      SessionTokenManager = DxgkGetSessionTokenManager(&v19);
      v7 = v19;
      if ( SessionTokenManager >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 32LL))(v19);
    }
    if ( SessionTokenManager >= 0 )
    {
      SessionTokenManager = CompositionSurfaceObject::ResolveHandle(v11, 2u, v13, &v21);
      v8 = v21;
      if ( SessionTokenManager >= 0 )
      {
        SessionTokenManager = CompositionSurfaceObject::LockForWrite(v21, &v22);
        v9 = v22;
      }
    }
  }
  if ( v7 && (SessionTokenManager < 0 || !*((_QWORD *)v9 + 20)) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v7 = 0LL;
  }
  if ( SessionTokenManager >= 0 )
    SessionTokenManager = CCompositionSurface::Bind(
                            v9,
                            (const struct CSM_BUFFER_INFO *)v28,
                            a2 != 0,
                            a4 != 0,
                            v17,
                            0,
                            &v23);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  if ( SessionTokenManager < 0 )
    goto LABEL_24;
  v10 = 1;
  v14 = v28[145];
  if ( v28[145] )
  {
    v15 = DxgkGetWin32kImportTable();
    if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD, void *))(v15 + 600))(v14, a3, v11) )
      SessionTokenManager = -1073741790;
  }
  if ( SessionTokenManager < 0 )
  {
LABEL_24:
    if ( v10 )
      CCompositionSurface::UnBind(v9, 0);
  }
  if ( v9 )
    CCompositionSurface::UnlockAndRelease(v9);
  if ( v8 )
    ObfDereferenceObject(v8);
  KeLeaveCriticalRegion();
  if ( a6 )
    RtlCopyToUser(a6, &v23, 8uLL);
  else
    return (unsigned int)-1073741811;
  return (unsigned int)SessionTokenManager;
}

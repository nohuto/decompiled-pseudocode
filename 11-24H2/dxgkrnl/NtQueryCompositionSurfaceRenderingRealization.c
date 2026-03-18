/*
 * XREFs of NtQueryCompositionSurfaceRenderingRealization @ 0x140043E20
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140018D84 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ?GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE_@@@Z @ 0x14002C7D0 (-GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE_@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     RtlCopyToUser @ 0x14018D054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceRenderingRealization(HANDLE Handle, void *a2)
{
  __int64 Win32kImportTable; // rax
  char *v5; // rdi
  NTSTATUS v6; // ebx
  char *v7; // rsi
  CCompositionSurface *v8; // rsi
  PVOID Object; // [rsp+38h] [rbp-1B0h] BYREF
  _BYTE Src[384]; // [rsp+40h] [rbp-1A8h] BYREF

  memset(Src, 0, 0x178uLL);
  KeEnterCriticalRegion();
  Win32kImportTable = DxgkGetWin32kImportTable();
  if ( (*(unsigned int (**)(void))(Win32kImportTable + 608))() )
  {
    v5 = 0LL;
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(Handle, 1u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
    v7 = (char *)Object;
    if ( v6 >= 0 )
    {
      if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) == 1 )
      {
        v5 = v7;
      }
      else
      {
        ObfDereferenceObject(v7);
        v6 = -1073741788;
      }
    }
    if ( v6 >= 0 )
    {
      v8 = 0LL;
      v6 = ObReferenceObjectByPointer(v5, 3u, g_pDxgkCompositionObjectType, 0);
      if ( v6 >= 0 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v5 + 48, 0LL);
        v6 = 0;
        v8 = (CCompositionSurface *)(v5 + 40);
      }
      if ( v6 >= 0 )
      {
        CCompositionSurface::GetRenderingRealizationInfo(v8, (struct CSM_SURFACE_UPDATE_ *)Src);
        CCompositionSurface::UnlockAndRelease(v8);
      }
      ObfDereferenceObject(v5);
    }
  }
  else
  {
    v6 = -1073741790;
  }
  if ( a2 )
    RtlCopyToUser(a2, Src, 0x178uLL);
  else
    v6 = -1073741811;
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}

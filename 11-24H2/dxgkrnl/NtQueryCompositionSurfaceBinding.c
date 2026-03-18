/*
 * XREFs of NtQueryCompositionSurfaceBinding @ 0x1400472D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140018D84 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x140019E18 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1400383AC (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z @ 0x140049F30 (-QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z.c)
 *     RtlCopyFromUser @ 0x140064F88 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     RtlCopyToUser @ 0x14018D054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceBinding(void *a1, void *Src, void *a3)
{
  CCompositionSurface *v5; // rdi
  __int64 v6; // r8
  int Binding; // ebx
  CCompositionSurface *v9; // [rsp+20h] [rbp-588h] BYREF
  int v10; // [rsp+28h] [rbp-580h]
  PVOID Object; // [rsp+30h] [rbp-578h] BYREF
  CCompositionSurface *v12; // [rsp+38h] [rbp-570h]
  void *v13; // [rsp+48h] [rbp-560h]
  void *v14; // [rsp+50h] [rbp-558h]
  HANDLE Srca[164]; // [rsp+60h] [rbp-548h] BYREF

  v13 = a1;
  v14 = a3;
  v5 = 0LL;
  v12 = 0LL;
  Object = 0LL;
  memset(Srca, 0, sizeof(Srca));
  if ( Src )
  {
    v9 = 0LL;
    RtlCopyFromUser(&v9, Src, 8uLL);
    v5 = v9;
    v12 = v9;
  }
  KeEnterCriticalRegion();
  Binding = CompositionSurfaceObject::ResolveHandle(a1, 1u, v6, (struct CompositionSurfaceObject **)&Object);
  if ( Binding >= 0 )
  {
    v9 = 0LL;
    Binding = CompositionSurfaceObject::LockForRead((CompositionSurfaceObject *)Object, &v9);
    if ( Binding >= 0 )
    {
      Binding = CCompositionSurface::QueryBinding(v9, (unsigned __int64)v5, (struct CSM_BUFFER_INFO *)Srca);
      CCompositionSurface::UnlockAndRelease(v9);
    }
    ObfDereferenceObject(Object);
  }
  if ( a3 )
  {
    RtlCopyToUser(a3, Srca, 0x520uLL);
  }
  else
  {
    Binding = -1073741811;
    v10 = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)Binding;
}

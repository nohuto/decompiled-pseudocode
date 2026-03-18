/*
 * XREFs of NtQueryCompositionSurfaceFrameRate @ 0x140037EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140018D84 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?QueryFrameRate@CCompositionSurface@@QEBAIXZ @ 0x14005F3A4 (-QueryFrameRate@CCompositionSurface@@QEBAIXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x14018D054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceFrameRate(HANDLE Handle, void *a2)
{
  char *v4; // rdi
  NTSTATUS v5; // ebx
  char *v6; // rsi
  CCompositionSurface *v7; // rsi
  unsigned int Src; // [rsp+70h] [rbp+18h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  Src = 0;
  KeEnterCriticalRegion();
  v4 = 0LL;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(Handle, 1u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
  v6 = (char *)Object;
  if ( v5 >= 0 )
  {
    if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) == 1 )
    {
      v4 = v6;
    }
    else
    {
      ObfDereferenceObject(v6);
      v5 = -1073741788;
    }
  }
  if ( v5 >= 0 )
  {
    v7 = 0LL;
    v5 = ObReferenceObjectByPointer(v4, 3u, g_pDxgkCompositionObjectType, 0);
    if ( v5 >= 0 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v4 + 48, 0LL);
      v5 = 0;
      v7 = (CCompositionSurface *)(v4 + 40);
    }
    if ( v5 >= 0 )
    {
      Src = CCompositionSurface::QueryFrameRate(v7);
      CCompositionSurface::UnlockAndRelease(v7);
    }
    ObfDereferenceObject(v4);
  }
  if ( a2 )
    RtlCopyToUser(a2, &Src, 4uLL);
  else
    v5 = -1073741811;
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}

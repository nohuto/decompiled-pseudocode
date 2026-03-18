/*
 * XREFs of NtQueryCompositionSurfaceFrameRate @ 0x140038230
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140009854 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?CalcFrameRate@CPresentRate@@QEBAIXZ @ 0x1400471C8 (-CalcFrameRate@CPresentRate@@QEBAIXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x14018AE14 (RtlCopyToUser.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceFrameRate(HANDLE Handle, void *a2)
{
  char *v4; // rdi
  NTSTATUS v5; // ebx
  char *v6; // rsi
  char *v7; // rsi
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
      v7 = v4 + 40;
    }
    if ( v5 >= 0 )
    {
      Src = CPresentRate::CalcFrameRate((CPresentRate *)(v7 + 56));
      CCompositionSurface::UnlockAndRelease((CCompositionSurface *)v7);
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

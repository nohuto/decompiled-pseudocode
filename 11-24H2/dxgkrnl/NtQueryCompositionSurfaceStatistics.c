/*
 * XREFs of NtQueryCompositionSurfaceStatistics @ 0x140034E50
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x14005F470 (-QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     RtlCopyToUser @ 0x14018D054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceStatistics(HANDLE Handle, void *a2)
{
  _QWORD *v4; // rdi
  NTSTATUS Stats; // ebx
  _QWORD *v6; // rsi
  CCompositionSurface *v7; // r14
  HANDLE CurrentThreadId; // rax
  _QWORD *v9; // rcx
  PVOID Object; // [rsp+38h] [rbp-90h] BYREF
  _BYTE Src[80]; // [rsp+40h] [rbp-88h] BYREF

  memset(Src, 0, sizeof(Src));
  KeEnterCriticalRegion();
  v4 = 0LL;
  Object = 0LL;
  Stats = ObReferenceObjectByHandle(Handle, 1u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
  v6 = Object;
  if ( Stats >= 0 )
  {
    if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) == 1 )
    {
      v4 = v6;
    }
    else
    {
      ObfDereferenceObject(v6);
      Stats = -1073741788;
    }
  }
  if ( Stats >= 0 )
  {
    v7 = 0LL;
    Stats = ObReferenceObjectByPointer(v4, 3u, g_pDxgkCompositionObjectType, 0);
    if ( Stats >= 0 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v4 + 6, 0LL);
      Stats = 0;
      v7 = (CCompositionSurface *)(v4 + 5);
    }
    if ( Stats >= 0 )
    {
      Stats = CCompositionSurface::QueryStats(v7, (struct CSM_BUFFER_STATISTICS *)Src);
      CurrentThreadId = PsGetCurrentThreadId();
      v9 = (_QWORD *)((char *)v7 + 8);
      if ( CurrentThreadId == *((HANDLE *)v7 + 2) )
      {
        *((_QWORD *)v7 + 2) = 0LL;
        ExReleasePushLockExclusiveEx(v9, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v9, 0LL);
      }
      KeLeaveCriticalRegion();
      ObfDereferenceObject((char *)v7 - 40);
    }
    ObfDereferenceObject(v4);
  }
  if ( a2 )
    RtlCopyToUser(a2, Src, 0x50uLL);
  else
    Stats = -1073741811;
  KeLeaveCriticalRegion();
  return (unsigned int)Stats;
}

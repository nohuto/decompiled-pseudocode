/*
 * XREFs of CreatePerSessionWin32kCall @ 0x14033F560
 * Callers:
 *     EditionDriverInitialize @ 0x140238F20 (EditionDriverInitialize.c)
 * Callees:
 *     ?SetWin32kSilo@@YAPEAU_EJOB@@AEAPEAX@Z @ 0x140227830 (-SetWin32kSilo@@YAPEAU_EJOB@@AEAPEAX@Z.c)
 *     ?ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z @ 0x140228CAC (-ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z.c)
 */

__int64 __fastcall CreatePerSessionWin32kCall(__int64 *a1)
{
  __int64 v1; // r14
  int v2; // edi
  struct _EJOB *v3; // rbp
  int v4; // esi
  _QWORD *i; // rbx
  void *CurrentApiSetSchema; // [rsp+40h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = 0;
  CurrentApiSetSchema = (void *)PsQueryCurrentApiSetSchema();
  v3 = SetWin32kSilo(&CurrentApiSetSchema);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(gSessionApiSetHostRefCountLock, 0LL);
  v4 = 0;
  for ( i = (_QWORD *)(v1 + 8); *i; ++v4 )
  {
    v2 = ResolveApiSetHost((struct _Win32kApiSet *)(v1 + 24LL * v4), CurrentApiSetSchema);
    if ( v2 < 0 )
      break;
    i += 3;
  }
  ExReleasePushLockExclusiveEx(gSessionApiSetHostRefCountLock, 0LL);
  KeLeaveCriticalRegion();
  if ( v3 )
    PsDetachSiloFromCurrentThread(v3);
  return (unsigned int)v2;
}

/*
 * XREFs of ?GetKind@LastWokenThread@@YA?AW4LastWokenThreadKind@@XZ @ 0x14006A860
 * Callers:
 *     <none>
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?GetCurrentProcessUserGlobals@@YAPEAU_tagWIN32KUSERSESSIONSTATE@@XZ @ 0x14006A99C (-GetCurrentProcessUserGlobals@@YAPEAU_tagWIN32KUSERSESSIONSTATE@@XZ.c)
 */

_BOOL8 LastWokenThread::GetKind()
{
  __int64 v0; // rdi
  __int64 v1; // rcx
  BOOL v2; // ebx

  v0 = *((_QWORD *)GetCurrentProcessUserGlobals() + 382);
  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)v0, 0);
  v1 = *(_QWORD *)(v0 + 8);
  v2 = 0;
  if ( v1 )
    v2 = PsGetProcessDebugPort(**(_QWORD **)(v1 + 464)) != 0;
  ExReleasePushLockSharedEx(v0, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}

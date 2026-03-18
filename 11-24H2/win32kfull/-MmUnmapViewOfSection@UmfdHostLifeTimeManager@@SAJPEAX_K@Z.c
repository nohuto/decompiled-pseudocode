/*
 * XREFs of ?MmUnmapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAX_K@Z @ 0x1401BEC38
 * Callers:
 *     UmfdHostLifeTimeManager_MmUnmapViewOfSection @ 0x1401BEC20 (UmfdHostLifeTimeManager_MmUnmapViewOfSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UmfdHostLifeTimeManager::MmUnmapViewOfSection(void *a1, __int64 a2)
{
  struct W32_PUSH_LOCK *v4; // rbx
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // rdi
  __int64 v8; // rdx
  int v9; // ecx
  unsigned int v10; // edi

  v4 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96) + 24256LL);
  GreAcquirePushLockShared(v4);
  v7 = *(_QWORD *)(W32GetSessionState(v6, v5) + 96);
  if ( *(_BYTE *)(*(_QWORD *)(W32GetSessionState(v9, v8) + 96) + 24288LL) && a2 == *(_QWORD *)(v7 + 24184) )
  {
    v10 = MmUnmapViewOfSection(*(_QWORD *)(v7 + 24192), a1);
    if ( v4 )
      GreReleasePushLockShared(v4);
    return v10;
  }
  else
  {
    if ( v4 )
      GreReleasePushLockShared(v4);
    return 3221225473LL;
  }
}

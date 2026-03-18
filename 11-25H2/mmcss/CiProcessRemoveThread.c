/*
 * XREFs of CiProcessRemoveThread @ 0x1C000E260
 * Callers:
 *     CiThreadCleanup @ 0x1C000DF90 (CiThreadCleanup.c)
 * Callees:
 *     CiSystemAcquirePushLock @ 0x1C000E130 (CiSystemAcquirePushLock.c)
 */

__int64 __fastcall CiProcessRemoveThread(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // rbx
  _QWORD *v5; // rax

  v1 = *(_QWORD *)(a1 + 128);
  CiSystemAcquirePushLock(v1 + 16);
  v3 = *(_QWORD *)(a1 + 112);
  v4 = a1 + 112;
  if ( *(_QWORD *)(v3 + 8) != v4 || (v5 = *(_QWORD **)(v4 + 8), *v5 != v4) )
    __fastfail(3u);
  *v5 = v3;
  *(_QWORD *)(v3 + 8) = v5;
  *(_QWORD *)(v1 + 24) = 0LL;
  return ExReleasePushLockExclusiveEx(v1 + 16, 0LL);
}

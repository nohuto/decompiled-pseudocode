/*
 * XREFs of NtGdiInit @ 0x1401CE3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400403D0 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140040560 (-GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 */

__int64 __fastcall NtGdiInit(__int64 a1)
{
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  int v4; // eax

  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  v2 = CurrentProcessWin32Process;
  if ( !CurrentProcessWin32Process || *CurrentProcessWin32Process )
  {
    v3 = (__int64)(CurrentProcessWin32Process + 10);
    if ( CurrentProcessWin32Process == (_QWORD *)-80LL )
      goto LABEL_6;
  }
  else
  {
    v2 = 0LL;
    v3 = 80LL;
  }
  GreEnterCriticalRegionAndAcquirePushLockExclusive((struct W32_PUSH_LOCK *)v3);
LABEL_6:
  v4 = *((_DWORD *)v2 + 69);
  if ( (v4 & 0x100) == 0 )
    *((_DWORD *)v2 + 69) = v4 | 0x120;
  if ( v3 )
    W32ReleasePushLockExclusive((struct W32_PUSH_LOCK *)v3);
  return 1LL;
}

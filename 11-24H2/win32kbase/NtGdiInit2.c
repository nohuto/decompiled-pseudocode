/*
 * XREFs of NtGdiInit2 @ 0x1400877E0
 * Callers:
 *     <none>
 * Callees:
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400403D0 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140040560 (-GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 */

__int64 __fastcall NtGdiInit2(__int64 a1)
{
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  int v4; // eax
  __int64 v5; // rdi

  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  v2 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
  {
    v2 = 0LL;
    v3 = 80LL;
  }
  else
  {
    v3 = (__int64)(CurrentProcessWin32Process + 10);
    if ( CurrentProcessWin32Process == (_QWORD *)-80LL )
      goto LABEL_5;
  }
  GreEnterCriticalRegionAndAcquirePushLockExclusive((struct W32_PUSH_LOCK *)v3);
LABEL_5:
  v4 = *((_DWORD *)v2 + 69);
  if ( (v4 & 0x100) == 0 )
    *((_DWORD *)v2 + 69) = v4 & 0xFFFFFEDF | 0x100;
  v5 = v2[35];
  if ( v3 )
    W32ReleasePushLockExclusive((struct W32_PUSH_LOCK *)v3);
  return v5;
}

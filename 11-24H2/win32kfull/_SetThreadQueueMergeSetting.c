/*
 * XREFs of _SetThreadQueueMergeSetting @ 0x1402A3388
 * Callers:
 *     NtUserSetThreadQueueMergeSetting @ 0x14029EDD0 (NtUserSetThreadQueueMergeSetting.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1401565AC (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     FindShellFrameThreadFromAssociation @ 0x14018E2D4 (FindShellFrameThreadFromAssociation.c)
 */

__int64 __fastcall SetThreadQueueMergeSetting(__int64 a1, int a2)
{
  char v2; // di
  int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rcx

  v2 = a2;
  if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    v3 = 87;
  }
  else
  {
    v4 = PtiFromThreadId(a1);
    v5 = v4;
    if ( !v4 || (v6 = *(unsigned int *)(v4 + 1360), (v6 & 0x40000) != 0) )
    {
      v3 = 1444;
      goto LABEL_19;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v8 = *(_QWORD *)(v5 + 464);
    if ( v8 == CurrentProcessWin32Process )
    {
      if ( (unsigned int)IsImmersiveAppRestricted(v8) )
      {
        if ( (v2 & 1) != 0 )
        {
          if ( tagQ::AreMultipleThreadsAttached(*(tagQ **)(v5 + 472))
            || FindShellFrameThreadFromAssociation((struct tagTHREADINFO *)v5) )
          {
            v3 = 170;
            goto LABEL_19;
          }
          _InterlockedOr((volatile signed __int32 *)(v5 + 528), 0x40u);
        }
        else
        {
          _InterlockedAnd((volatile signed __int32 *)(v5 + 528), 0xFFFFFFBF);
        }
        return 1LL;
      }
      v3 = 50;
    }
    else
    {
      v3 = 5;
    }
  }
LABEL_19:
  UserSetLastError(v3);
  return 0LL;
}

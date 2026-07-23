/*
 * XREFs of RtlQueryProcessLockInformation @ 0x18002AFA0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180028C60 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlpCommitQueryDebugInfo @ 0x18002B900 (RtlpCommitQueryDebugInfo.c)
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800ED2F8 (RtlIsAnyDebuggerPresent.c)
 */

__int64 __fastcall RtlQueryProcessLockInformation(__int64 a1)
{
  _DWORD *DebugInfo; // rax
  _DWORD *v3; // r15
  _QWORD *v4; // rsi
  _UNKNOWN **v5; // rdi
  _UNKNOWN **v6; // r12
  __int64 v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // rdx
  __int64 v11; // rcx
  _UNKNOWN **v12; // [rsp+20h] [rbp-78h]
  _QWORD *v13; // [rsp+28h] [rbp-70h]
  bool v14; // [rsp+A8h] [rbp+10h]
  int v15; // [rsp+B0h] [rbp+18h]

  v15 = 0;
  DebugInfo = (_DWORD *)RtlpCommitQueryDebugInfo(a1, 8LL);
  v3 = DebugInfo;
  if ( !DebugInfo )
    return 3221225495LL;
  *DebugInfo = 0;
  v14 = 0;
  RtlAcquireSRWLockShared(&RtlCriticalSectionLock);
  v4 = RtlCriticalSectionList;
  v13 = RtlCriticalSectionList;
  v5 = (_UNKNOWN **)RtlCriticalSectionList;
  v12 = (_UNKNOWN **)RtlCriticalSectionList;
  while ( v5 != &RtlCriticalSectionList )
  {
    v6 = v5 - 2;
    v7 = RtlpCommitQueryDebugInfo(a1, 48LL);
    if ( !v7 )
    {
      v15 = -1073741801;
      break;
    }
    *(_OWORD *)v7 = 0LL;
    *(_OWORD *)(v7 + 16) = 0LL;
    *(_OWORD *)(v7 + 32) = 0LL;
    *(_QWORD *)v7 = v6[1];
    *(_WORD *)(v7 + 8) = *(_WORD *)v6;
    *(_WORD *)(v7 + 10) = *((_WORD *)v6 + 1);
    if ( *(_WORD *)(v7 + 8) )
    {
      if ( *(_WORD *)(v7 + 8) == 1 )
      {
        v8 = v6[1];
        *(_DWORD *)(v7 + 28) = *(_DWORD *)(v8[11] + 36LL);
        *(_QWORD *)(v7 + 16) = v8[9];
        *(_DWORD *)(v7 + 24) = *((_DWORD *)v8 + 17);
        *(_DWORD *)(v7 + 40) = *((_DWORD *)v8 + 12);
        *(_DWORD *)(v7 + 44) = *((_DWORD *)v8 + 16);
        v5 = v12;
        v4 = v13;
      }
      else if ( RtlIsAnyDebuggerPresent() )
      {
        __debugbreak();
      }
    }
    else
    {
      v9 = v6[1];
      *(_QWORD *)(v7 + 16) = v9[2];
      *(_DWORD *)(v7 + 24) = *((_DWORD *)v9 + 2);
      *(_DWORD *)(v7 + 36) = *((_DWORD *)v9 + 3);
      *(_DWORD *)(v7 + 28) = *((_DWORD *)v6 + 9);
      *(_DWORD *)(v7 + 32) = *((_DWORD *)v6 + 8);
    }
    ++*v3;
    v5 = (_UNKNOWN **)*v5;
    v12 = v5;
    if ( v5 == v4 )
    {
      v15 = -1073741595;
      break;
    }
    if ( v14 )
    {
      v4 = (_QWORD *)*v4;
      v13 = v4;
    }
    v14 = !v14;
  }
  RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
  if ( v15 < 0 )
  {
    v11 = *(_QWORD *)(a1 + 72) - 8LL;
    if ( v3 == (_DWORD *)(v11 + a1) )
      *(_QWORD *)(a1 + 72) = v11;
  }
  else
  {
    *(_QWORD *)(a1 + 120) = v3;
  }
  return (unsigned int)v15;
}

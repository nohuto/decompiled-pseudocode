/*
 * XREFs of _LockWindowStation @ 0x140269A98
 * Callers:
 *     NtUserLockWindowStation @ 0x1401FF2F0 (NtUserLockWindowStation.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 */

__int64 __fastcall LockWindowStation(__int64 a1, __int64 a2)
{
  int v3; // edi
  HANDLE v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 i; // rbx
  int v9; // eax

  v3 = 0;
  v4 = *(HANDLE *)(W32GetUserSessionState(a1, a2) + 63584);
  if ( PsGetCurrentProcessId() == v4 )
  {
    *(_DWORD *)(a1 + 64) |= 1u;
    for ( i = *(_QWORD *)(a1 + 16); i; i = *(_QWORD *)(i + 32) )
    {
      if ( i != *(_QWORD *)(W32GetUserSessionState(v6, v5) + 63016) && *(_QWORD *)(i - 40) )
      {
        v3 = 1;
        break;
      }
    }
    v9 = *(_DWORD *)(a1 + 64);
    if ( (v9 & 8) != 0 )
      *(_DWORD *)(a1 + 64) = v9 | 2;
    return 2 - (unsigned int)(v3 != 0);
  }
  else
  {
    UserSetLastError(5);
    return 0LL;
  }
}

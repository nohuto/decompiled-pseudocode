/*
 * XREFs of EditionIsGetAsyncKeyStateBlocked @ 0x14016F000
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall EditionIsGetAsyncKeyStateBlocked(__int64 a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  v5 = 0;
  if ( CurrentThreadNonPaged )
    v6 = *CurrentThreadNonPaged;
  else
    v6 = 0LL;
  v8 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19200);
  if ( *(_QWORD *)(v6 + 496) != v8 )
    return 1LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v8, v7) + 18960) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    v13 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v12 = -*(_QWORD *)CurrentProcessWin32Process;
      v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v13 = v11 & CurrentProcessWin32Process;
    }
    if ( v13 == *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v12, v11) + 18960) + 464LL) )
      return 0LL;
  }
  LOBYTE(v5) = RtlAreAnyAccessesGranted(*(_DWORD *)(v6 + 936), 0x18u) == 0;
  return v5;
}

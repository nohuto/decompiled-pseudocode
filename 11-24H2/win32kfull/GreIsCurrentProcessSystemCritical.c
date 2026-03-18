/*
 * XREFs of GreIsCurrentProcessSystemCritical @ 0x140105CF0
 * Callers:
 *     W32pProcessCallout @ 0x140105930 (W32pProcessCallout.c)
 *     W32pThreadCallout @ 0x140105BB0 (W32pThreadCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreIsCurrentProcessSystemCritical(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct W32_PUSH_LOCK *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 CurrentProcess; // rax
  __int64 v16; // rbx
  __int64 v17; // rbp

  v6 = 0;
  if ( !*(_QWORD *)(W32GetSessionState(a1, a2, a3) + 104)
    || !*(_DWORD *)(*(_QWORD *)(W32GetSessionState(v4, v3, v5) + 104) + 80LL) )
  {
    return 0LL;
  }
  v10 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(W32GetSessionState(v8, v7, v9) + 96) + 24256LL);
  GreAcquirePushLockShared(v10);
  v14 = *(_QWORD *)(W32GetSessionState(v12, v11, v13) + 96);
  CurrentProcess = PsGetCurrentProcess();
  v16 = *(_QWORD *)(v14 + 24192);
  v17 = CurrentProcess;
  if ( v10 )
    GreReleasePushLockShared(v10);
  LOBYTE(v6) = v16 == v17;
  return v6;
}

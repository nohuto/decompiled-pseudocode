/*
 * XREFs of CleanupInjectedTouchProcess @ 0x140234DB0
 * Callers:
 *     _InitializeTouchInjectionWorker @ 0x140278960 (_InitializeTouchInjectionWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CleanupInjectedTouchProcess(__int64 a1)
{
  __int64 v1; // rbx
  void *v3; // rdi
  __int64 v4; // rsi
  _QWORD *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // rdi

  v1 = *(_QWORD *)(a1 + 888);
  v3 = *(void **)(v1 + 88);
  v4 = *(_QWORD *)(v1 + 96);
  if ( *(_QWORD *)(v1 + 16) )
    HMAssignmentUnlock(v1 + 16);
  if ( v3 && v4 )
  {
    RIMRemoveInjectionDevice(v3, v4);
    ZwClose(v3);
  }
  Win32FreePool(*(void **)(v1 + 80));
  Win32FreePool((void *)v1);
  *(_QWORD *)(a1 + 888) = 0LL;
  v5 = 0LL;
  v10 = *(_QWORD **)(W32GetUserSessionState(v7, v6) + 19320);
  if ( v10 )
  {
    while ( 1 )
    {
      v11 = *v10;
      if ( v10[1] == a1 )
        break;
      v5 = v10;
      v10 = (_QWORD *)*v10;
      if ( !v11 )
        return 1LL;
    }
    if ( v5 )
      *v5 = v11;
    else
      *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19320) = v11;
    Win32FreePool(v10);
  }
  return 1LL;
}

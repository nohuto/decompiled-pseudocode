/*
 * XREFs of ?OnProcessTermination@InputObjectMap@@SAXXZ @ 0x14006AE68
 * Callers:
 *     DestroyProcessInfo @ 0x14015D490 (DestroyProcessInfo.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

void __fastcall InputObjectMap::OnProcessTermination(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcess; // r15
  __int64 UserInputMgrSessionState; // rbx
  __int64 v6; // r14
  _QWORD *v7; // rsi
  _QWORD *v8; // rdi
  PVOID *v9; // rbp
  _QWORD *i; // rcx

  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  UserInputMgrSessionState = W32GetUserInputMgrSessionState();
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserInputMgrSessionState + 8), 0);
  v6 = W32GetUserInputMgrSessionState();
  v7 = *(_QWORD **)(v6 + 24);
  v8 = v7;
  while ( v8 )
  {
    v8 = (_QWORD *)*v8;
    if ( ((unsigned __int8)v8 & 1) != 0 )
      break;
LABEL_7:
    v9 = (PVOID *)v8;
    if ( !v8 )
      goto LABEL_8;
    if ( *(_QWORD *)(v8[3] + 56LL) == CurrentProcess )
    {
      for ( i = v7; (*i & 1) == 0; i = (_QWORD *)*i )
      {
        if ( (_QWORD *)*i == v8 )
        {
          *i = *v8;
          --*(_DWORD *)(v6 + 16);
          *v8 |= 0x8000000000000002uLL;
          v8 = i;
          break;
        }
      }
      ObfDereferenceObject(v9[3]);
      ExFreePoolWithTag(v9, 0);
    }
  }
  for ( ++v7; (unsigned __int64)v7 < *(_QWORD *)(v6 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(v6 + 20) >> 5); ++v7 )
  {
    v8 = (_QWORD *)*v7;
    if ( (*v7 & 1) == 0 )
      goto LABEL_7;
  }
LABEL_8:
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserInputMgrSessionState + 8), 0);
}

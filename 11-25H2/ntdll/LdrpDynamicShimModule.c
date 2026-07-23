/*
 * XREFs of LdrpDynamicShimModule @ 0x18000876C
 * Callers:
 *     LdrpPrepareModuleForExecution @ 0x180007794 (LdrpPrepareModuleForExecution.c)
 * Callees:
 *     LdrpGetProcApphelpCheckModule @ 0x180049B30 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     LdrpSendShimEngineInitialNotifications @ 0x1800D1A2C (LdrpSendShimEngineInitialNotifications.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpDynamicShimModule(_QWORD *a1)
{
  int v1; // esi
  unsigned int v3; // ebx
  __int64 result; // rax
  int v5; // eax
  _WORD *i; // rdi
  __int64 v7; // rax
  unsigned int v8; // ebp
  __int64 v9; // rdi
  unsigned int (__fastcall *v10)(_WORD *, _QWORD, __int64); // [rsp+68h] [rbp+10h] BYREF

  v1 = dword_1801CF7CC;
  v10 = 0LL;
  v3 = 0;
  if ( dword_1801CF7CC && g_pShimmedModuleList )
  {
    dword_1801CF7CC = 0;
    v5 = LdrpGetProcApphelpCheckModule(&v10);
    v3 = v5;
    if ( v5 < 0 )
    {
      LdrpLogInternal(
        "minkernel\\ldr\\ldrinit.c",
        4141LL,
        "LdrpDynamicShimModule",
        0LL,
        "Getting ApphelpCheckModule failed with status 0x%08lx\n",
        v5);
      v3 = 0;
    }
    else
    {
      for ( i = g_pShimmedModuleList; *i; i += v7 + 1 )
      {
        if ( !v10(i, 0LL, 1LL) )
        {
          v3 = -1073741502;
          goto LABEL_3;
        }
        v7 = -1LL;
        do
          ++v7;
        while ( i[v7] );
      }
      v8 = MEMORY[0x7FFE0330];
      v9 = __ROR8__(g_pfnSE_DllLoaded, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
      RtlEnterCriticalSection(&LdrpDllNotificationLock);
      if ( LdrInitState < 3 && (*(_DWORD *)(*a1 - 56LL) & 0x800) == 0 )
        LdrpSendShimEngineInitialNotifications(a1, v9 ^ v8);
      RtlLeaveCriticalSection(&LdrpDllNotificationLock);
    }
  }
LABEL_3:
  if ( v1 == 1 && g_pShimmedModuleList )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, g_pShimmedModuleList);
    g_pShimmedModuleList = 0LL;
    g_pShimmedModuleListLength = 0LL;
  }
  result = v3;
  dword_1801CF7CC = v1;
  return result;
}

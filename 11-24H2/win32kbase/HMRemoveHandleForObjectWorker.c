/*
 * XREFs of HMRemoveHandleForObjectWorker @ 0x140134F1C
 * Callers:
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x14016A8FC (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMRemoveHandleForObject @ 0x14016AC70 (HMRemoveHandleForObject.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     HMCleanupObjectSecurity @ 0x140144D7C (HMCleanupObjectSecurity.c)
 */

__int64 __fastcall HMRemoveHandleForObjectWorker(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int16 v7; // ax
  __int64 v8; // r8
  __int64 v9; // rbx

  UserSessionState = W32GetUserSessionState(a1);
  v3 = *(_QWORD *)(UserSessionState + 19888) + 40LL * (unsigned int)((a1 - *(_QWORD *)(UserSessionState + 19944)) >> 5);
  v6 = W32GetUserSessionState(v4);
  --*(_DWORD *)(v6 + 19876);
  if ( *(_QWORD *)(v3 + 24) )
  {
    LOBYTE(v5) = *(_BYTE *)(a1 + 24);
    HMCleanupObjectSecurity(v3, v5);
    GreDeleteFastMutex(*(char **)(v3 + 24));
  }
  v7 = (*(_WORD *)(a1 + 26) + 1) & 0x7FFF;
  if ( v7 == 0x7FFF )
    v7 = 1;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)v3 = 0LL;
  *(_OWORD *)(v3 + 16) = 0LL;
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_WORD *)(a1 + 26) = v7;
  v8 = *(_QWORD *)(v6 + 19888);
  v9 = (a1 - *(_QWORD *)(v6 + 19944)) >> 5;
  if ( (v9 & 1) != 0 )
  {
    *(_QWORD *)(v8 + 40 * v9) = *(_QWORD *)(v6 + 19760);
    *(_QWORD *)(v6 + 19760) = v9;
  }
  else
  {
    *(_QWORD *)(v8 + 40 * v9) = *(_QWORD *)(v6 + 19752);
    *(_QWORD *)(v6 + 19752) = v9;
  }
  return 1LL;
}

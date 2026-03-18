/*
 * XREFs of KseUnregisterShim @ 0x14073EF20
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KsepDebugPrint @ 0x1402CA2D8 (KsepDebugPrint.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KsepLogInfo @ 0x14048E6C8 (KsepLogInfo.c)
 *     KsepLogError @ 0x14048E6F8 (KsepLogError.c)
 *     KsepPoolFreePaged @ 0x1404A6F94 (KsepPoolFreePaged.c)
 *     KsepIsShimRegistered @ 0x140AB6AE8 (KsepIsShimRegistered.c)
 */

__int64 __fastcall KseUnregisterShim(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // r14d
  _QWORD *v5; // rax
  __int64 v6; // r8
  signed __int8 v7; // cf
  _QWORD *v8; // rsi
  unsigned int v9; // ebp
  _QWORD *v10; // rsi
  __int64 v11; // rax
  _QWORD *v12; // rdx
  void **v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( dword_140E66AE4 != 2 )
    return 3221225473LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((__int64)&qword_140E66B10, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E66B10, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&qword_140E66B10, (__int64)v5, (__int64)&qword_140E66B10);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  if ( (unsigned int)KsepIsShimRegistered(&KseEngine, *(_QWORD *)(a1 + 8), v6, &v16) )
  {
    if ( *((_DWORD *)v16 + 6) )
    {
      v9 = -1073741790;
      v10 = v16;
      v11 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      dword_140F0F384[2 * v11] = -1073741790;
      KsepHistoryErrors[2 * v11] = 131453;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(
          3LL,
          (int)"KSE: Ending shim [0x%08X] unregistration. Shim object [0x%08X] ref count is not 0.\n",
          **(unsigned int **)(a1 + 8),
          v10);
      KsepLogError(
        3LL,
        (__int64)"KSE: Ending shim [0x%08X] unregistration. Shim object [0x%08X] ref count is not 0.\n",
        **(_DWORD **)(a1 + 8),
        (_DWORD)v10);
      *((_DWORD *)v10 + 7) |= 4u;
    }
    else
    {
      v12 = (_QWORD *)*v16;
      if ( *(_QWORD **)(*v16 + 8LL) != v16 || (v13 = (void **)v16[1], *v13 != v16) )
        __fastfail(3u);
      *v13 = v12;
      v4 = 1;
      v12[1] = v13;
      v14 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
      HIDWORD(KsepHistoryMessages[v14]) = 0;
      LODWORD(KsepHistoryMessages[v14]) = 131470;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(3LL, (int)"KSE: Succeeded shim [0x%08X] unregistration.\n", **(unsigned int **)(a1 + 8));
      KsepLogInfo(3LL, (__int64)"KSE: Succeeded shim [0x%08X] unregistration.\n", **(_DWORD **)(a1 + 8));
      v9 = 0;
    }
  }
  else
  {
    v9 = -1073741772;
    v15 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    dword_140F0F384[2 * v15] = -1073741772;
    KsepHistoryErrors[2 * v15] = 131482;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(
        3LL,
        (int)"KSE: Failed shim [0x%08X] unregistration. Shim not found.\n",
        **(unsigned int **)(a1 + 8));
    KsepLogError(3LL, (__int64)"KSE: Failed shim [0x%08X] unregistration. Shim not found.\n", **(_DWORD **)(a1 + 8));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E66B10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E66B10);
  KeAbPostRelease((ULONG_PTR)&qword_140E66B10);
  KeLeaveCriticalRegion();
  if ( v4 )
    KsepPoolFreePaged(v16);
  return v9;
}

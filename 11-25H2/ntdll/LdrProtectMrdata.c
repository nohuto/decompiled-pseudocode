/*
 * XREFs of LdrProtectMrdata @ 0x180020A50
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x180020C04 (RtlInsertInvertedFunctionTable.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800240BC (LdrEnsureMrdataHeapExists.c)
 *     RtlAddGrowableFunctionTable @ 0x180024410 (RtlAddGrowableFunctionTable.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x180024AD0 (RtlxRemoveInvertedFunctionTable.c)
 *     RtlpAddVectoredHandler @ 0x180024C88 (RtlpAddVectoredHandler.c)
 *     RtlpCallVectoredHandlers @ 0x180075B30 (RtlpCallVectoredHandlers.c)
 *     LdrpInitializeExecutionOptions @ 0x1800B1738 (LdrpInitializeExecutionOptions.c)
 *     LdrpLoadWow64 @ 0x1800D0A34 (LdrpLoadWow64.c)
 *     LdrpGetShimEngineInterface @ 0x1800D11F0 (LdrpGetShimEngineInterface.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     RtlInstallFunctionTableCallback @ 0x1800DE0B0 (RtlInstallFunctionTableCallback.c)
 *     RtlDeleteFunctionTable @ 0x1800E8C20 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800E8E30 (RtlDeleteGrowableFunctionTable.c)
 *     RtlpRemoveVectoredHandler @ 0x1800F0A44 (RtlpRemoveVectoredHandler.c)
 *     RtlInitializeHistoryTable @ 0x1800F39BC (RtlInitializeHistoryTable.c)
 *     RtlAddFunctionTable @ 0x1800F3AE0 (RtlAddFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x1800FBDC0 (RtlSetProtectedPolicy.c)
 *     LdrpInitializeCfgScpHelpers @ 0x180109B68 (LdrpInitializeCfgScpHelpers.c)
 *     AVrfInitializeVerifier @ 0x18011B9E0 (AVrfInitializeVerifier.c)
 *     RtlInitializeNtUserPfn @ 0x180122080 (RtlInitializeNtUserPfn.c)
 *     RtlResetNtUserPfn @ 0x1801221A0 (RtlResetNtUserPfn.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpChangeMrdataProtection @ 0x180020B20 (LdrpChangeMrdataProtection.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 */

void __fastcall LdrProtectMrdata(int a1)
{
  char *SchedulerSharedDataSlot; // r8
  __int64 i; // rdx
  char *v4; // rax
  int v6; // ebx

  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      v4 = &SchedulerSharedDataSlot[8 * i];
      if ( !*(_QWORD *)v4 )
      {
        if ( v4 )
          *(_QWORD *)v4 = &LdrpMrdataLock;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpMrdataLock, 0LL) )
    RtlpAcquireSRWLockExclusiveContended(&LdrpMrdataLock);
  v6 = LdrpMrdataUnprotected;
  if ( !a1 )
  {
    if ( LdrpMrdataUnprotected )
    {
      if ( LdrpMrdataUnprotected == -1 )
      {
LABEL_17:
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
    }
    else
    {
      LdrpChangeMrdataProtection(4LL);
    }
    LdrpMrdataUnprotected = v6 + 1;
    goto LABEL_13;
  }
  if ( !LdrpMrdataUnprotected )
    goto LABEL_17;
  --LdrpMrdataUnprotected;
  if ( v6 == 1 )
    LdrpChangeMrdataProtection(2LL);
LABEL_13:
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}

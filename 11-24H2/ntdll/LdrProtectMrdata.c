/*
 * XREFs of LdrProtectMrdata @ 0x180033A80
 * Callers:
 *     RtlpRemoveVectoredHandler @ 0x180027330 (RtlpRemoveVectoredHandler.c)
 *     RtlDeleteFunctionTable @ 0x1800277A0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800279B0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlpAddVectoredHandler @ 0x180032D08 (RtlpAddVectoredHandler.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x180033170 (RtlxRemoveInvertedFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x1800335A0 (RtlAddGrowableFunctionTable.c)
 *     LdrEnsureMrdataHeapExists @ 0x180033910 (LdrEnsureMrdataHeapExists.c)
 *     RtlInsertInvertedFunctionTable @ 0x180033C34 (RtlInsertInvertedFunctionTable.c)
 *     LdrpGetShimEngineInterface @ 0x180036888 (LdrpGetShimEngineInterface.c)
 *     RtlpCallVectoredHandlers @ 0x1800467C0 (RtlpCallVectoredHandlers.c)
 *     LdrpInitializeExecutionOptions @ 0x1800A4268 (LdrpInitializeExecutionOptions.c)
 *     LdrpLoadWow64 @ 0x1800AD1EC (LdrpLoadWow64.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     RtlInstallFunctionTableCallback @ 0x1800DC260 (RtlInstallFunctionTableCallback.c)
 *     RtlInitializeHistoryTable @ 0x1800ECACC (RtlInitializeHistoryTable.c)
 *     RtlAddFunctionTable @ 0x1800ECBF0 (RtlAddFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x1800F4C20 (RtlSetProtectedPolicy.c)
 *     LdrpInitializeCfgScpHelpers @ 0x180102188 (LdrpInitializeCfgScpHelpers.c)
 *     AVrfInitializeVerifier @ 0x180113994 (AVrfInitializeVerifier.c)
 *     RtlInitializeNtUserPfn @ 0x1801322A0 (RtlInitializeNtUserPfn.c)
 *     RtlResetNtUserPfn @ 0x1801323D0 (RtlResetNtUserPfn.c)
 * Callees:
 *     LdrpChangeMrdataProtection @ 0x180033B50 (LdrpChangeMrdataProtection.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
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

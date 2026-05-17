/*
 * XREFs of LdrProtectMrdata @ 0x180007080
 * Callers:
 *     RtlpAddVectoredHandler @ 0x180006308 (RtlpAddVectoredHandler.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x180006770 (RtlxRemoveInvertedFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180006BA0 (RtlAddGrowableFunctionTable.c)
 *     LdrEnsureMrdataHeapExists @ 0x180006F10 (LdrEnsureMrdataHeapExists.c)
 *     RtlInsertInvertedFunctionTable @ 0x180007234 (RtlInsertInvertedFunctionTable.c)
 *     LdrpGetShimEngineInterface @ 0x180009E88 (LdrpGetShimEngineInterface.c)
 *     RtlpCallVectoredHandlers @ 0x180019DC0 (RtlpCallVectoredHandlers.c)
 *     LdrpLoadWow64 @ 0x18006531C (LdrpLoadWow64.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 *     LdrpInitializeExecutionOptions @ 0x1800887A8 (LdrpInitializeExecutionOptions.c)
 *     RtlInstallFunctionTableCallback @ 0x1800E0D10 (RtlInstallFunctionTableCallback.c)
 *     RtlDeleteFunctionTable @ 0x1800E74E0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800E76F0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlpRemoveVectoredHandler @ 0x1800EF340 (RtlpRemoveVectoredHandler.c)
 *     RtlInitializeHistoryTable @ 0x1800F1E4C (RtlInitializeHistoryTable.c)
 *     RtlAddFunctionTable @ 0x1800F1F70 (RtlAddFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x1800F9EC0 (RtlSetProtectedPolicy.c)
 *     LdrpInitializeCfgScpHelpers @ 0x180107258 (LdrpInitializeCfgScpHelpers.c)
 *     AVrfInitializeVerifier @ 0x180118960 (AVrfInitializeVerifier.c)
 *     RtlInitializeNtUserPfn @ 0x180134070 (RtlInitializeNtUserPfn.c)
 *     RtlResetNtUserPfn @ 0x1801341A0 (RtlResetNtUserPfn.c)
 * Callees:
 *     LdrpChangeMrdataProtection @ 0x180007150 (LdrpChangeMrdataProtection.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall LdrProtectMrdata(int a1)
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
    return RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  if ( !LdrpMrdataUnprotected )
    goto LABEL_17;
  --LdrpMrdataUnprotected;
  if ( v6 == 1 )
    LdrpChangeMrdataProtection(2LL);
  return RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}

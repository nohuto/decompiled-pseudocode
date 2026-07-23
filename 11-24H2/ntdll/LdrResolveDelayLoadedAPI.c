/*
 * XREFs of LdrResolveDelayLoadedAPI @ 0x1800498A0
 * Callers:
 *     LdrpResolveDelayLoadDescriptor @ 0x1800E70C0 (LdrpResolveDelayLoadDescriptor.c)
 *     LdrQueryOptionalDelayLoadedAPI @ 0x180112D60 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     LdrpUnsuppressAddressTakenIat @ 0x180033EAC (LdrpUnsuppressAddressTakenIat.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180036070 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpHandleProtectedDelayload @ 0x1800360B0 (LdrpHandleProtectedDelayload.c)
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x1800D94F0 (LdrpHandleUnprotectedDelayLoad.c)
 */

PVOID __cdecl LdrResolveDelayLoadedAPI(
        PVOID ParentModuleBase,
        PCIMAGE_DELAYLOAD_DESCRIPTOR DelayloadDescriptor,
        PDELAYLOAD_FAILURE_DLL_CALLBACK FailureDllHook,
        PDELAYLOAD_FAILURE_SYSTEM_ROUTINE FailureSystemHook,
        PIMAGE_THUNK_DATA ThunkAddress,
        ULONG Flags)
{
  int v9; // edi
  void *ForwarderString; // r14
  bool v11; // al
  __int64 v12; // rsi
  unsigned __int64 Root; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  PVOID (__cdecl *v19)(ULONG, PDELAYLOAD_INFO); // [rsp+90h] [rbp+18h]

  v19 = FailureDllHook;
  v9 = 0;
  ForwarderString = 0LL;
  v11 = (Flags & 0xFFFFDFFF) == 8 || (~((LdrpPolicyBits & 4 | 0x7B) << 8) & Flags) == 0;
  if ( v11 && (DelayloadDescriptor->Attributes.AllAttributes & 1) != 0 )
  {
    v12 = 0LL;
    if ( ParentModuleBase )
    {
      if ( ParentModuleBase == LdrpSystemDllBase )
      {
        v12 = LdrpNtDllDataTableEntry;
      }
      else
      {
        RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
        Root = (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
        if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
        {
          if ( LdrpModuleBaseAddressIndex.Root )
            Root = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
          else
            Root = 0LL;
        }
        if ( Root )
        {
          while ( (unsigned __int64)ParentModuleBase >= *(_QWORD *)(Root - 152) )
          {
            if ( (unsigned __int64)ParentModuleBase <= *(_QWORD *)(Root - 152) )
              goto LABEL_18;
            v14 = *(_QWORD *)(Root + 8);
            if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) == 0 || !v14 )
              goto LABEL_16;
            Root ^= v14;
LABEL_17:
            if ( !Root )
            {
LABEL_18:
              if ( Root )
              {
                v12 = Root - 200;
                v15 = *(_QWORD *)(Root - 200 + 152);
                if ( *(_DWORD *)(v15 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v15 - 56LL) & 0x20) == 0 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v12 + 276));
                  ForwarderString = 0LL;
                }
              }
              goto LABEL_22;
            }
          }
          v14 = *(_QWORD *)Root;
          if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v14 )
          {
            Root ^= v14;
            goto LABEL_17;
          }
LABEL_16:
          Root = v14;
          goto LABEL_17;
        }
LABEL_22:
        RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
        FailureDllHook = v19;
      }
    }
    if ( v12 )
    {
      v16 = 0;
      v9 = 1;
    }
    else
    {
      v16 = -1073741515;
    }
    if ( v9 )
    {
      ForwarderString = (void *)ThunkAddress->u1.ForwarderString;
      if ( ThunkAddress->u1.ForwarderString - (unsigned __int64)ParentModuleBase < *(unsigned int *)(v12 + 64) )
      {
        if ( (*(_DWORD *)(v12 + 104) & 0x8000) != 0 )
        {
          ForwarderString = (void *)LdrpHandleProtectedDelayload(
                                      v12,
                                      &DelayloadDescriptor->Attributes.AllAttributes,
                                      (__int64)FailureDllHook,
                                      (__int64)FailureSystemHook,
                                      (__int64)ThunkAddress,
                                      Flags);
        }
        else
        {
          ForwarderString = (void *)LdrpHandleUnprotectedDelayLoad(
                                      v12,
                                      (int)DelayloadDescriptor,
                                      (int)FailureDllHook,
                                      (__int64)FailureSystemHook,
                                      (__int64)ThunkAddress,
                                      Flags);
          if ( ForwarderString )
          {
            if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
            {
              v17 = LdrpUnsuppressAddressTakenIat(
                      (char *)ParentModuleBase,
                      (int)ThunkAddress - (int)ParentModuleBase,
                      (int)ThunkAddress - (int)ParentModuleBase);
              if ( v17 < 0 )
                LdrpLogInternal(
                  "minkernel\\ldr\\ldrdload.c",
                  1237,
                  (__int64)"LdrResolveDelayLoadedAPI",
                  0,
                  "LdrResolveDelayLoadedAPI:Unable to unsuppress the export suppressed functions that are imported in the"
                  " DLL based at 0x%p.Status = 0x%x\n",
                  ParentModuleBase,
                  v17);
            }
          }
        }
      }
      LdrpDereferenceModule((char *)v12);
    }
    else
    {
      LdrpLogInternal(
        "minkernel\\ldr\\ldrdload.c",
        1259,
        (__int64)"LdrResolveDelayLoadedAPI",
        0,
        "LdrResolveDelayLoadedAPI:Unable to locate DLL based at 0x%p.Status = 0x%x\n",
        ParentModuleBase,
        v16);
    }
  }
  return ForwarderString;
}

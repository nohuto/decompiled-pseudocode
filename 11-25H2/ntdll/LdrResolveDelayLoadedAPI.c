/*
 * XREFs of LdrResolveDelayLoadedAPI @ 0x180021000
 * Callers:
 *     LdrpResolveDelayLoadDescriptor @ 0x180020F60 (LdrpResolveDelayLoadDescriptor.c)
 *     LdrQueryOptionalDelayLoadedAPI @ 0x18011AE70 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180022E90 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpHandleProtectedDelayload @ 0x180022ED0 (LdrpHandleProtectedDelayload.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x18002422C (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x1800DC2A4 (LdrpHandleUnprotectedDelayLoad.c)
 */

PVOID __cdecl LdrResolveDelayLoadedAPI(
        PVOID ParentModuleBase,
        PCIMAGE_DELAYLOAD_DESCRIPTOR DelayloadDescriptor,
        PDELAYLOAD_FAILURE_DLL_CALLBACK FailureDllHook,
        PDELAYLOAD_FAILURE_SYSTEM_ROUTINE FailureSystemHook,
        PIMAGE_THUNK_DATA ThunkAddress,
        ULONG Flags)
{
  int v7; // r12d
  int v9; // edi
  void *ForwarderString; // r14
  bool v11; // al
  __int64 v12; // rsi
  unsigned __int64 Root; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  int v22; // [rsp+90h] [rbp+18h]

  v22 = (int)FailureDllHook;
  v7 = (int)DelayloadDescriptor;
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
        LODWORD(FailureDllHook) = v22;
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
          ForwarderString = (void *)LdrpHandleProtectedDelayload(v12, v7, (__int64)ThunkAddress, Flags);
        }
        else
        {
          ForwarderString = (void *)LdrpHandleUnprotectedDelayLoad(
                                      v12,
                                      v7,
                                      (int)FailureDllHook,
                                      (__int64)FailureSystemHook,
                                      (__int64)ThunkAddress,
                                      Flags);
          if ( ForwarderString )
          {
            if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression(v18, v17, v19) )
            {
              v20 = LdrpUnsuppressAddressTakenIat(ParentModuleBase);
              if ( v20 < 0 )
                LdrpLogInternal(
                  "minkernel\\ldr\\ldrdload.c",
                  1237LL,
                  "LdrResolveDelayLoadedAPI",
                  0LL,
                  "LdrResolveDelayLoadedAPI:Unable to unsuppress the export suppressed functions that are imported in the"
                  " DLL based at 0x%p.Status = 0x%x\n",
                  ParentModuleBase,
                  v20);
            }
          }
        }
      }
      LdrpDereferenceModule((PVOID)v12);
    }
    else
    {
      LdrpLogInternal(
        "minkernel\\ldr\\ldrdload.c",
        1259LL,
        "LdrResolveDelayLoadedAPI",
        0LL,
        "LdrResolveDelayLoadedAPI:Unable to locate DLL based at 0x%p.Status = 0x%x\n",
        ParentModuleBase,
        v16);
    }
  }
  return ForwarderString;
}

/*
 * XREFs of LdrResolveDelayLoadedAPI @ 0x18001CEA0
 * Callers:
 *     LdrpResolveDelayLoadDescriptor @ 0x1800EBDB0 (LdrpResolveDelayLoadDescriptor.c)
 *     LdrQueryOptionalDelayLoadedAPI @ 0x180117C30 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     LdrpUnsuppressAddressTakenIat @ 0x1800074AC (LdrpUnsuppressAddressTakenIat.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180009670 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpHandleProtectedDelayload @ 0x1800096B0 (LdrpHandleProtectedDelayload.c)
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x1800DE380 (LdrpHandleUnprotectedDelayLoad.c)
 */

__int64 __fastcall LdrResolveDelayLoadedAPI(
        unsigned __int64 a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        char *a5,
        int a6)
{
  int v9; // edi
  __int64 v10; // r14
  bool v11; // al
  __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // [rsp+90h] [rbp+18h]

  v17 = a3;
  v9 = 0;
  v10 = 0LL;
  v11 = (a6 & 0xFFFFDFFF) == 8 || (~((LdrpPolicyBits & 4 | 0x7B) << 8) & a6) == 0;
  if ( v11 && (*(_BYTE *)a2 & 1) != 0 )
  {
    v12 = 0LL;
    if ( a1 )
    {
      if ( a1 == LdrpSystemDllBase )
      {
        v12 = LdrpNtDllDataTableEntry;
      }
      else
      {
        RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
        v13 = LdrpModuleBaseAddressIndex;
        if ( (qword_1801D2460 & 1) != 0 )
        {
          if ( LdrpModuleBaseAddressIndex )
            v13 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
          else
            v13 = 0LL;
        }
        if ( v13 )
        {
          while ( a1 >= *(_QWORD *)(v13 - 152) )
          {
            if ( a1 <= *(_QWORD *)(v13 - 152) )
              goto LABEL_18;
            v14 = *(_QWORD *)(v13 + 8);
            if ( (qword_1801D2460 & 1) == 0 || !v14 )
              goto LABEL_16;
            v13 ^= v14;
LABEL_17:
            if ( !v13 )
            {
LABEL_18:
              if ( v13 )
              {
                v12 = v13 - 200;
                v15 = *(_QWORD *)(v13 - 200 + 152);
                if ( *(_DWORD *)(v15 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v15 - 56LL) & 0x20) == 0 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v12 + 276));
                  v10 = 0LL;
                }
              }
              goto LABEL_22;
            }
          }
          v14 = *(_QWORD *)v13;
          if ( (qword_1801D2460 & 1) != 0 && v14 )
          {
            v13 ^= v14;
            goto LABEL_17;
          }
LABEL_16:
          v13 = v14;
          goto LABEL_17;
        }
LABEL_22:
        RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
        a3 = v17;
      }
    }
    if ( v12 )
      v9 = 1;
    if ( v9 )
    {
      v10 = *(_QWORD *)a5;
      if ( *(_QWORD *)a5 - a1 < *(unsigned int *)(v12 + 64) )
      {
        if ( (*(_DWORD *)(v12 + 104) & 0x8000) != 0 )
        {
          v10 = LdrpHandleProtectedDelayload(v12, a2, a3, a4, a5, a6);
        }
        else
        {
          v10 = LdrpHandleUnprotectedDelayLoad(v12, (_DWORD)a2, a3, a4, (__int64)a5, a6);
          if ( v10
            && LdrControlFlowGuardEnforcedWithExportSuppression()
            && (int)LdrpUnsuppressAddressTakenIat(a1, (int)a5 - (int)a1, (int)a5 - (int)a1) < 0 )
          {
            LdrpLogInternal(
              (__int64)"minkernel\\ldr\\ldrdload.c",
              1237,
              (__int64)"LdrResolveDelayLoadedAPI",
              0,
              "LdrResolveDelayLoadedAPI:Unable to unsuppress the export suppressed functions that are imported in the DLL"
              " based at 0x%p.Status = 0x%x\n",
              a1);
          }
        }
      }
      LdrpDereferenceModule(v12);
    }
    else
    {
      LdrpLogInternal(
        (__int64)"minkernel\\ldr\\ldrdload.c",
        1259,
        (__int64)"LdrResolveDelayLoadedAPI",
        0,
        "LdrResolveDelayLoadedAPI:Unable to locate DLL based at 0x%p.Status = 0x%x\n",
        a1);
    }
  }
  return v10;
}

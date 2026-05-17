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

__int64 __fastcall LdrResolveDelayLoadedAPI(unsigned __int64 a1, _BYTE *a2, int a3, int a4, __int64 *a5, int a6)
{
  int v7; // r12d
  int v9; // edi
  __int64 v10; // r14
  bool v11; // al
  __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v20; // [rsp+90h] [rbp+18h]

  v20 = a3;
  v7 = (int)a2;
  v9 = 0;
  v10 = 0LL;
  v11 = (a6 & 0xFFFFDFFF) == 8 || (~((LdrpPolicyBits & 4 | 0x7B) << 8) & a6) == 0;
  if ( v11 && (*a2 & 1) != 0 )
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
        if ( (qword_1801D44B0 & 1) != 0 )
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
            if ( (qword_1801D44B0 & 1) == 0 || !v14 )
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
          if ( (qword_1801D44B0 & 1) != 0 && v14 )
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
        a3 = v20;
      }
    }
    if ( v12 )
      v9 = 1;
    if ( v9 )
    {
      v10 = *a5;
      if ( *a5 - a1 < *(unsigned int *)(v12 + 64) )
      {
        if ( (*(_DWORD *)(v12 + 104) & 0x8000) != 0 )
        {
          v10 = LdrpHandleProtectedDelayload(v12, v7, a3, a4, (__int64)a5, a6);
        }
        else
        {
          v10 = LdrpHandleUnprotectedDelayLoad(v12, v7, a3, a4, (__int64)a5, a6);
          if ( v10
            && (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression(v17, v16, v18)
            && (int)LdrpUnsuppressAddressTakenIat(a1, (unsigned int)((_DWORD)a5 - a1), (unsigned int)((_DWORD)a5 - a1)) < 0 )
          {
            LdrpLogInternal(
              (int)"minkernel\\ldr\\ldrdload.c",
              1237,
              (int)"LdrResolveDelayLoadedAPI",
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
        (int)"minkernel\\ldr\\ldrdload.c",
        1259,
        (int)"LdrResolveDelayLoadedAPI",
        0,
        "LdrResolveDelayLoadedAPI:Unable to locate DLL based at 0x%p.Status = 0x%x\n",
        a1);
    }
  }
  return v10;
}

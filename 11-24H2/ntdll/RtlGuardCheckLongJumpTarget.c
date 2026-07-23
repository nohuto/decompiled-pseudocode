/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x180035CB0
 * Callers:
 *     <none>
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180036000 (LdrImageDirectoryEntryToLoadConfig.c)
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlpxLookupFunctionTable @ 0x1800430E0 (RtlpxLookupFunctionTable.c)
 *     RtlFailFast2 @ 0x18011F8A0 (RtlFailFast2.c)
 *     bsearch @ 0x180121F70 (bsearch.c)
 *     bsearch_s @ 0x180122070 (bsearch_s.c)
 */

NTSTATUS __cdecl RtlGuardCheckLongJumpTarget(PVOID PcValue, BOOL IsFastFail, PBOOL IsLongJumpTarget)
{
  bool v4; // r14
  char v6; // bp
  __int64 Config; // rax
  rsize_t v9; // r8
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __int128 v12; // [rsp+30h] [rbp-38h]
  int Key; // [rsp+88h] [rbp+20h] BYREF

  v4 = IsFastFail;
  Key = 0;
  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    v6 = 0;
    v12 = 0LL;
    if ( (unsigned __int64)PcValue < *((_QWORD *)&xmmword_1801E6440 + 1)
      || (unsigned __int64)PcValue >= *((_QWORD *)&xmmword_1801E6440 + 1)
                                    + (unsigned __int64)(unsigned int)qword_1801E6450 )
    {
      RtlpxLookupFunctionTable(PcValue);
    }
    else
    {
      *((_QWORD *)&v12 + 1) = *((_QWORD *)&xmmword_1801E6440 + 1);
    }
    if ( *((_QWORD *)&v12 + 1) )
    {
      Config = LdrImageDirectoryEntryToLoadConfig(*((_QWORD *)&v12 + 1));
      if ( Config )
      {
        if ( *(_DWORD *)Config >= 0xC0u && (*(_DWORD *)(Config + 144) & 0x10000) != 0 )
        {
          Key = (_DWORD)PcValue - DWORD2(v12);
          v9 = *(_QWORD *)(Config + 184);
          if ( !v9
            || !bsearch_s(
                  &Key,
                  *(const void **)(Config + 176),
                  v9,
                  (unsigned int)((*(_DWORD *)(Config + 144) >> 28) + 4),
                  RtlpTargetCompare,
                  0LL) )
          {
            goto LABEL_21;
          }
        }
      }
    }
    else
    {
      if ( !RtlpProtectedPolicies )
        goto LABEL_21;
      RtlAcquireSRWLockShared(&RtlpProtectedPoliciesSRWLock);
      v11 = bsearch(
              &unk_18017A140,
              RtlpProtectedPolicies,
              (unsigned int)RtlpProtectedPoliciesActiveCount,
              0x18uLL,
              RtlpCompareProtectedPolicyEntry);
      if ( !v11 )
      {
        RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
        goto LABEL_21;
      }
      v10 = v11[2];
      RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
      if ( !v10 )
      {
LABEL_21:
        if ( !v4 )
          RtlFailFast2(38LL, PcValue);
        goto LABEL_8;
      }
    }
    v6 = 1;
LABEL_8:
    if ( IsLongJumpTarget )
      *(_BYTE *)IsLongJumpTarget = v6;
    return 0;
  }
  if ( IsLongJumpTarget )
    *(_BYTE *)IsLongJumpTarget = 1;
  return 0;
}

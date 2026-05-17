/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x1800092B0
 * Callers:
 *     <none>
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180009600 (LdrImageDirectoryEntryToLoadConfig.c)
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlpxLookupFunctionTable @ 0x1800166E0 (RtlpxLookupFunctionTable.c)
 *     RtlFailFast2 @ 0x180121670 (RtlFailFast2.c)
 *     bsearch @ 0x180123D40 (bsearch.c)
 *     bsearch_s @ 0x180123E40 (bsearch_s.c)
 */

__int64 __fastcall RtlGuardCheckLongJumpTarget(unsigned __int64 a1, char a2, char *a3)
{
  char v6; // bp
  int v7; // edi
  __int64 Config; // rax
  rsize_t v10; // r8
  __int64 v11; // rdi
  _QWORD *v12; // rax
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-28h]
  int Key; // [rsp+88h] [rbp+20h] BYREF

  Key = 0;
  if ( qword_1801EA508 && (dword_1801EA4EC & 1) == 0 )
  {
    v6 = 0;
    v13 = 0LL;
    v14 = 0LL;
    if ( a1 < *((_QWORD *)&xmmword_1801E7440 + 1)
      || a1 >= *((_QWORD *)&xmmword_1801E7440 + 1) + (unsigned __int64)(unsigned int)qword_1801E7450 )
    {
      RtlpxLookupFunctionTable(a1, &v13);
    }
    else
    {
      v13 = xmmword_1801E7440;
    }
    v7 = DWORD2(v13);
    if ( *((_QWORD *)&v13 + 1) )
    {
      Config = LdrImageDirectoryEntryToLoadConfig(*((_QWORD *)&v13 + 1));
      if ( Config )
      {
        if ( *(_DWORD *)Config >= 0xC0u && (*(_DWORD *)(Config + 144) & 0x10000) != 0 )
        {
          Key = a1 - v7;
          v10 = *(_QWORD *)(Config + 184);
          if ( !v10
            || !bsearch_s(
                  &Key,
                  *(const void **)(Config + 176),
                  v10,
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
      v12 = bsearch(
              &unk_180179B78,
              RtlpProtectedPolicies,
              (unsigned int)RtlpProtectedPoliciesActiveCount,
              0x18uLL,
              RtlpCompareProtectedPolicyEntry);
      if ( !v12 )
      {
        RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
        goto LABEL_21;
      }
      v11 = v12[2];
      RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
      if ( !v11 )
      {
LABEL_21:
        if ( !a2 )
          RtlFailFast2(38LL, a1);
        goto LABEL_8;
      }
    }
    v6 = 1;
LABEL_8:
    if ( a3 )
      *a3 = v6;
    return 0LL;
  }
  if ( a3 )
    *a3 = 1;
  return 0LL;
}

/*
 * XREFs of RtlGuardRestoreContext @ 0x180008EA0
 * Callers:
 *     KiUserExceptionDispatcher @ 0x180165CF0 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlGuardIsValidStackPointer @ 0x180009240 (RtlGuardIsValidStackPointer.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180009600 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180009670 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrControlFlowGuardEnforced @ 0x180009CF0 (LdrControlFlowGuardEnforced.c)
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlpxLookupFunctionTable @ 0x1800166E0 (RtlpxLookupFunctionTable.c)
 *     LdrpValidateUserCallTarget @ 0x180121510 (LdrpValidateUserCallTarget.c)
 *     LdrpValidateUserCallTargetES @ 0x180121560 (LdrpValidateUserCallTargetES.c)
 *     RtlFailFast2 @ 0x180121670 (RtlFailFast2.c)
 *     bsearch @ 0x180123D40 (bsearch.c)
 *     bsearch_s @ 0x180123E40 (bsearch_s.c)
 */

void __cdecl RtlGuardRestoreContext(PCONTEXT ContextRecord, struct _EXCEPTION_RECORD *ExceptionRecord)
{
  int ExceptionCode; // eax
  unsigned __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 v7; // rbp
  int v8; // r14d
  __int64 v9; // rax
  rsize_t v10; // r8
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  DWORD64 Rip; // rbp
  unsigned __int64 v16; // rdi
  __int64 Config; // rax
  __int64 v18; // rdx
  rsize_t v19; // r8
  unsigned int v20; // eax
  __int64 v21; // rdi
  _QWORD *v22; // rax
  __int128 v23; // [rsp+30h] [rbp-38h] BYREF
  __int64 v24; // [rsp+40h] [rbp-28h]
  int Key; // [rsp+78h] [rbp+10h] BYREF

  if ( !ExceptionRecord )
  {
LABEL_23:
    if ( !qword_1801EA508 || (dword_1801EA4EC & 1) != 0 || (unsigned int)RtlGuardIsValidStackPointer(ContextRecord->Rsp) )
      goto LABEL_26;
    goto LABEL_45;
  }
  ExceptionCode = ExceptionRecord->ExceptionCode;
  if ( ExceptionRecord->ExceptionCode != -2147483610 )
  {
    if ( ExceptionCode == -2147483607 )
    {
      if ( ExceptionRecord->NumberParameters )
      {
        v11 = ExceptionRecord->ExceptionInformation[0];
        if ( (unsigned int)LdrControlFlowGuardEnforced(ContextRecord, ExceptionRecord) )
        {
          if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression(v13, v12, v14) )
            LdrpValidateUserCallTargetES(v11);
          else
            LdrpValidateUserCallTarget(v11);
        }
      }
    }
    else if ( ExceptionCode == -1073741785 )
    {
      if ( ((*((_QWORD *)&xmmword_1801EA4F0 + 1) >> 60) & 3) != 1 )
      {
        Rip = ContextRecord->Rip;
        if ( (unsigned int)LdrControlFlowGuardEnforced(ContextRecord, ExceptionRecord) )
        {
          v24 = 0LL;
          v23 = 0LL;
          if ( Rip < *((_QWORD *)&xmmword_1801E7440 + 1)
            || Rip >= *((_QWORD *)&xmmword_1801E7440 + 1) + (unsigned __int64)(unsigned int)qword_1801E7450 )
          {
            RtlpxLookupFunctionTable(Rip, &v23);
          }
          else
          {
            v23 = xmmword_1801E7440;
          }
          v16 = *((_QWORD *)&v23 + 1);
          if ( *((_QWORD *)&v23 + 1) )
          {
            Config = LdrImageDirectoryEntryToLoadConfig(*((_QWORD *)&v23 + 1));
            v18 = Config;
            if ( Config )
            {
              if ( *(_DWORD *)Config >= 0x118u
                && (*(_DWORD *)(Config + 144) & 0x400000) != 0
                && *(_QWORD *)(Config + 264) > v16 )
              {
                Key = Rip - v16;
                v19 = *(_QWORD *)(Config + 272);
                v20 = (*(_DWORD *)(Config + 144) >> 28) + 4;
                if ( !v19 || !bsearch_s(&Key, *(const void **)(v18 + 264), v19, v20, RtlpTargetCompare, 0LL) )
                  RtlFailFast2(38LL, Rip);
              }
            }
          }
        }
      }
      goto LABEL_26;
    }
    goto LABEL_23;
  }
  v5 = ExceptionRecord->ExceptionInformation[0];
  v6 = qword_1801EA508;
  if ( qword_1801EA508 && (dword_1801EA4EC & 1) == 0 )
  {
    if ( (unsigned int)RtlGuardIsValidStackPointer(*(_QWORD *)(v5 + 16)) )
    {
      v6 = qword_1801EA508;
      goto LABEL_7;
    }
LABEL_45:
    __fastfail(0xDu);
  }
LABEL_7:
  if ( ((*((_QWORD *)&xmmword_1801EA4F0 + 1) >> 60) & 3) != 1 )
  {
    v7 = *(_QWORD *)(v5 + 80);
    Key = 0;
    if ( v6 )
    {
      if ( (dword_1801EA4EC & 1) == 0 )
      {
        v24 = 0LL;
        v23 = 0LL;
        if ( v7 < *((_QWORD *)&xmmword_1801E7440 + 1)
          || v7 >= *((_QWORD *)&xmmword_1801E7440 + 1) + (unsigned __int64)(unsigned int)qword_1801E7450 )
        {
          RtlpxLookupFunctionTable(v7, &v23);
        }
        else
        {
          v23 = xmmword_1801E7440;
        }
        v8 = DWORD2(v23);
        if ( *((_QWORD *)&v23 + 1) )
        {
          v9 = LdrImageDirectoryEntryToLoadConfig(*((_QWORD *)&v23 + 1));
          if ( v9 )
          {
            if ( *(_DWORD *)v9 >= 0xC0u && (*(_DWORD *)(v9 + 144) & 0x10000) != 0 )
            {
              Key = v7 - v8;
              v10 = *(_QWORD *)(v9 + 184);
              if ( !v10
                || !bsearch_s(
                      &Key,
                      *(const void **)(v9 + 176),
                      v10,
                      (unsigned int)((*(_DWORD *)(v9 + 144) >> 28) + 4),
                      RtlpTargetCompare,
                      0LL) )
              {
                goto LABEL_48;
              }
            }
          }
        }
        else
        {
          if ( !RtlpProtectedPolicies )
            goto LABEL_48;
          RtlAcquireSRWLockShared(&RtlpProtectedPoliciesSRWLock);
          v22 = bsearch(
                  &unk_180179B78,
                  RtlpProtectedPolicies,
                  (unsigned int)RtlpProtectedPoliciesActiveCount,
                  0x18uLL,
                  RtlpCompareProtectedPolicyEntry);
          if ( !v22 )
          {
            RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
            goto LABEL_48;
          }
          v21 = v22[2];
          RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
          if ( !v21 )
LABEL_48:
            RtlFailFast2(38LL, v7);
        }
      }
    }
  }
LABEL_26:
  RtlRestoreContext(ContextRecord, ExceptionRecord);
}

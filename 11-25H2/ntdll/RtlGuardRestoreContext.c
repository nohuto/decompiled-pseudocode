/*
 * XREFs of RtlGuardRestoreContext @ 0x1800226C0
 * Callers:
 *     KiUserExceptionDispatcher @ 0x180167280 (KiUserExceptionDispatcher.c)
 * Callees:
 *     RtlGuardIsValidStackPointer @ 0x180022A60 (RtlGuardIsValidStackPointer.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180022E20 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180022E90 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrControlFlowGuardEnforced @ 0x180023510 (LdrControlFlowGuardEnforced.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlpxLookupFunctionTable @ 0x1800787D0 (RtlpxLookupFunctionTable.c)
 *     LdrpValidateUserCallTarget @ 0x180122FF0 (LdrpValidateUserCallTarget.c)
 *     LdrpValidateUserCallTargetES @ 0x180123040 (LdrpValidateUserCallTargetES.c)
 *     RtlFailFast2 @ 0x180123150 (RtlFailFast2.c)
 *     bsearch @ 0x180125820 (bsearch.c)
 *     bsearch_s @ 0x180125920 (bsearch_s.c)
 */

void __cdecl RtlGuardRestoreContext(PCONTEXT ContextRecord, struct _EXCEPTION_RECORD *ExceptionRecord)
{
  int ExceptionCode; // eax
  unsigned __int64 v5; // rdi
  ULONG_PTR CfgBitMap; // rdx
  void *v7; // rbp
  __int64 v8; // rax
  rsize_t v9; // r8
  unsigned __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  void *Rip; // rbp
  int v16; // eax
  __int64 Config; // rax
  __int64 v18; // rdx
  rsize_t v19; // r8
  unsigned int v20; // eax
  __int64 v21; // rdi
  _QWORD *v22; // rax
  __int128 v23; // [rsp+30h] [rbp-38h]
  __int128 v24; // [rsp+30h] [rbp-38h]
  int Key; // [rsp+78h] [rbp+10h] BYREF

  if ( !ExceptionRecord )
  {
LABEL_23:
    if ( !LdrSystemDllInitBlock.CfgBitMap
      || (LdrSystemDllInitBlock.Flags & 1) != 0
      || (unsigned int)RtlGuardIsValidStackPointer(ContextRecord->Rsp) )
    {
      goto LABEL_26;
    }
    goto LABEL_45;
  }
  ExceptionCode = ExceptionRecord->ExceptionCode;
  if ( ExceptionRecord->ExceptionCode != -2147483610 )
  {
    if ( ExceptionCode == -2147483607 )
    {
      if ( ExceptionRecord->NumberParameters )
      {
        v10 = ExceptionRecord->ExceptionInformation[0];
        LOBYTE(v11) = LdrControlFlowGuardEnforced();
        if ( v11 )
        {
          if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression(v13, v12, v14) )
            LdrpValidateUserCallTargetES(v10);
          else
            LdrpValidateUserCallTarget(v10);
        }
      }
    }
    else if ( ExceptionCode == -1073741785 )
    {
      if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) != 1 )
      {
        Rip = (void *)ContextRecord->Rip;
        LOBYTE(v16) = LdrControlFlowGuardEnforced();
        if ( v16 )
        {
          v24 = 0LL;
          if ( (unsigned __int64)Rip < *((_QWORD *)&xmmword_1801E9430 + 1)
            || (unsigned __int64)Rip >= *((_QWORD *)&xmmword_1801E9430 + 1)
                                      + (unsigned __int64)(unsigned int)qword_1801E9440 )
          {
            RtlpxLookupFunctionTable(Rip);
          }
          else
          {
            *((_QWORD *)&v24 + 1) = *((_QWORD *)&xmmword_1801E9430 + 1);
          }
          if ( *((_QWORD *)&v24 + 1) )
          {
            Config = LdrImageDirectoryEntryToLoadConfig(*((_QWORD *)&v24 + 1));
            v18 = Config;
            if ( Config )
            {
              if ( *(_DWORD *)Config >= 0x118u
                && (*(_DWORD *)(Config + 144) & 0x400000) != 0
                && *(_QWORD *)(Config + 264) > *((_QWORD *)&v24 + 1) )
              {
                Key = (_DWORD)Rip - DWORD2(v24);
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
  CfgBitMap = LdrSystemDllInitBlock.CfgBitMap;
  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    if ( (unsigned int)RtlGuardIsValidStackPointer(*(_QWORD *)(v5 + 16)) )
    {
      CfgBitMap = LdrSystemDllInitBlock.CfgBitMap;
      goto LABEL_7;
    }
LABEL_45:
    __fastfail(0xDu);
  }
LABEL_7:
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) != 1 )
  {
    v7 = *(void **)(v5 + 80);
    Key = 0;
    if ( CfgBitMap )
    {
      if ( (LdrSystemDllInitBlock.Flags & 1) == 0 )
      {
        v23 = 0LL;
        if ( (unsigned __int64)v7 < *((_QWORD *)&xmmword_1801E9430 + 1)
          || (unsigned __int64)v7 >= *((_QWORD *)&xmmword_1801E9430 + 1)
                                   + (unsigned __int64)(unsigned int)qword_1801E9440 )
        {
          RtlpxLookupFunctionTable(v7);
        }
        else
        {
          *((_QWORD *)&v23 + 1) = *((_QWORD *)&xmmword_1801E9430 + 1);
        }
        if ( *((_QWORD *)&v23 + 1) )
        {
          v8 = LdrImageDirectoryEntryToLoadConfig(*((_QWORD *)&v23 + 1));
          if ( v8 )
          {
            if ( *(_DWORD *)v8 >= 0xC0u && (*(_DWORD *)(v8 + 144) & 0x10000) != 0 )
            {
              Key = (_DWORD)v7 - DWORD2(v23);
              v9 = *(_QWORD *)(v8 + 184);
              if ( !v9
                || !bsearch_s(
                      &Key,
                      *(const void **)(v8 + 176),
                      v9,
                      (unsigned int)((*(_DWORD *)(v8 + 144) >> 28) + 4),
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
                  &unk_18017B5F8,
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

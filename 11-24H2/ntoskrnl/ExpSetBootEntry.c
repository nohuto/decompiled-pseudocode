/*
 * XREFs of ExpSetBootEntry @ 0x1407BC32C
 * Callers:
 *     NtAddBootEntry @ 0x1407BD850 (NtAddBootEntry.c)
 *     NtModifyBootEntry @ 0x1407BE280 (NtModifyBootEntry.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 *     swprintf_s @ 0x140502E50 (swprintf_s.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwTranslateFilePath @ 0x1406A9EF0 (ZwTranslateFilePath.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     strcmp @ 0x1406C0400 (strcmp.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ExpVerifyWindowsOsOptions @ 0x140964D78 (ExpVerifyWindowsOsOptions.c)
 *     ExpSafeWcslen @ 0x140965898 (ExpSafeWcslen.c)
 *     ExpVerifyFilePath @ 0x1409659F0 (ExpVerifyFilePath.c)
 *     IoSetEnvironmentVariableEx @ 0x1409664F0 (IoSetEnvironmentVariableEx.c)
 *     IoGetEnvironmentVariableEx @ 0x140966F70 (IoGetEnvironmentVariableEx.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpSetBootEntry(int a1, const void *a2, unsigned __int64 a3)
{
  unsigned int i; // r12d
  KPROCESSOR_MODE PreviousMode; // di
  unsigned __int64 v8; // rsi
  __int64 v9; // rbx
  unsigned int v10; // esi
  unsigned __int64 v12; // rcx
  char *Pool2; // rax
  char *v14; // rdi
  char *v15; // r15
  int EnvironmentVariable; // ebx
  void *v17; // r13
  __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // rbx
  char *v21; // rsi
  __int64 v22; // r14
  char *v23; // r12
  int v24; // eax
  size_t v25; // r13
  int v26; // eax
  int v27; // eax
  unsigned int v28; // esi
  _WORD *v29; // rax
  _WORD *v30; // rbx
  int v31; // ecx
  char *v32; // rbx
  struct _KTHREAD *v33; // rax
  _QWORD v34[2]; // [rsp+38h] [rbp-B0h] BYREF
  int v35; // [rsp+4Ch] [rbp-9Ch]
  unsigned int v37; // [rsp+54h] [rbp-94h]
  int v38; // [rsp+58h] [rbp-90h]
  _DWORD Size[3]; // [rsp+5Ch] [rbp-8Ch]
  int v40; // [rsp+68h] [rbp-80h]
  PVOID P; // [rsp+70h] [rbp-78h]
  unsigned __int64 v42; // [rsp+78h] [rbp-70h]
  _DWORD *v43; // [rsp+80h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-50h]
  wchar_t Dst[12]; // [rsp+A0h] [rbp-48h] BYREF

  v43 = (_DWORD *)a3;
  v40 = a1;
  *(_QWORD *)&Size[1] = 0LL;
  i = 0;
  v42 = 0LL;
  P = 0LL;
  v35 = 0;
  memset(v34, 0, sizeof(v34));
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v8 = (unsigned __int64)a2 + 4;
  v9 = 0x7FFFFFFF0000LL;
  if ( PreviousMode )
  {
    if ( v8 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    v10 = *(_DWORD *)v8;
    v37 = v10;
  }
  else
  {
    v10 = *(_DWORD *)v8;
    v37 = v10;
  }
  if ( v10 < 0x1C )
    return 3221225485LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225474LL;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = (unsigned __int64)a2 + v10;
    if ( v12 > 0x7FFFFFFF0000LL || v12 < (unsigned __int64)a2 )
      v10 = v37;
    if ( a3 )
    {
      if ( a3 < 0x7FFFFFFF0000LL )
        v9 = a3;
      *(_DWORD *)v9 = *(_DWORD *)v9;
      v10 = v37;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  Pool2 = (char *)ExAllocatePool2(0x40uLL);
  v14 = Pool2;
  *(_QWORD *)&Size[1] = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, a2, v10);
  v15 = &v14[v10];
  if ( *(_DWORD *)v14 == 1 && (a1 || *((_DWORD *)v14 + 2) <= 0xFFFFu) )
  {
    *((_DWORD *)v14 + 3) &= 0x13u;
    v18 = *((unsigned int *)v14 + 4);
    if ( (v18 & 1) != 0 )
      goto LABEL_36;
    v19 = *((unsigned int *)v14 + 5);
    if ( (v19 & 3) != 0 )
      goto LABEL_36;
    v20 = *((unsigned int *)v14 + 6);
    if ( (unsigned int)v20 > v10 )
      goto LABEL_36;
    v21 = &v14[v20 + 28];
    if ( v21 >= v15 )
      goto LABEL_36;
    if ( (unsigned int)v20 >= 8 && !strcmp(v14 + 28, "WINDOWS") )
    {
      if ( (unsigned int)v20 <= 0x14 )
      {
LABEL_36:
        EnvironmentVariable = -1073741811;
LABEL_88:
        i = 0;
        v17 = 0LL;
        goto LABEL_89;
      }
      EnvironmentVariable = ExpVerifyWindowsOsOptions(v14 + 28, (unsigned int)v20);
      if ( EnvironmentVariable < 0 )
        goto LABEL_88;
      v38 = 1;
      v22 = (__int64)&v14[*((unsigned int *)v14 + 11) + 28];
    }
    else
    {
      v38 = 0;
      v22 = 0LL;
    }
    v23 = &v14[v18];
    v24 = ExpSafeWcslen(v23, v15);
    if ( v24 == -1 )
      goto LABEL_36;
    Size[0] = 2 * v24 + 2;
    v42 = (unsigned __int64)&v14[v19];
    EnvironmentVariable = ExpVerifyFilePath(&v14[v19]);
    if ( EnvironmentVariable < 0 )
      goto LABEL_88;
    if ( v21 > v23 )
      goto LABEL_36;
    v25 = Size[0];
    if ( (unsigned __int64)&v23[Size[0]] > v42 )
      goto LABEL_36;
    if ( *(_DWORD *)(v42 + 8) == 4 )
    {
      v26 = *(_DWORD *)(v42 + 4);
      v34[1] = v42;
    }
    else
    {
      EnvironmentVariable = ZwTranslateFilePath(v42, 4LL);
      if ( EnvironmentVariable != -1073741789 )
        goto LABEL_88;
      v34[1] = ExAllocatePool2(0x40uLL);
      if ( !v34[1] )
      {
        EnvironmentVariable = -1073741670;
        i = 0;
        v17 = 0LL;
        goto LABEL_89;
      }
      LODWORD(v34[0]) = HIDWORD(v34[0]);
      EnvironmentVariable = ZwTranslateFilePath(v42, 4LL);
      if ( EnvironmentVariable < 0 )
        goto LABEL_58;
      v26 = HIDWORD(v34[0]);
    }
    v27 = v26 - 12;
    HIDWORD(v34[0]) = v27;
    if ( !v38 || *(_DWORD *)(v22 + 8) == 4 )
    {
      v28 = *((_DWORD *)v14 + 6);
      goto LABEL_56;
    }
    EnvironmentVariable = ZwTranslateFilePath(v22, 4LL);
    if ( EnvironmentVariable == -1073741789 )
    {
      v28 = v35 + *((_DWORD *)v14 + 6) - *(_DWORD *)(v22 + 4);
      v27 = HIDWORD(v34[0]);
LABEL_56:
      Size[0] += v28 + v27 + 6;
      v29 = (_WORD *)ExAllocatePool2(0x40uLL);
      v30 = v29;
      P = v29;
      if ( v29 )
      {
        *(_DWORD *)v29 = 0;
        v31 = 0;
        if ( (*((_DWORD *)v14 + 3) & 1) != 0 )
        {
          *(_DWORD *)v29 = 1;
          v31 = 1;
        }
        if ( (*((_DWORD *)v14 + 3) & 0x10) != 0 )
          *(_DWORD *)v29 = v31 | 8;
        v29[2] = WORD2(v34[0]);
        memmove(v29 + 3, v23, v25);
        v32 = (char *)v30 + v25 + 6;
        v17 = (void *)v34[1];
        memmove(v32, (const void *)(v34[1] + 12LL), HIDWORD(v34[0]));
        if ( !v38 || *(_DWORD *)(v22 + 8) == 4 )
        {
          memmove(&v32[HIDWORD(v34[0])], v14 + 28, v28);
        }
        else
        {
          memmove(&v32[HIDWORD(v34[0])], v14 + 28, *((unsigned int *)v14 + 11));
          *(_DWORD *)&v32[HIDWORD(v34[0]) + 12] = v28;
          LODWORD(v34[0]) = v35;
          EnvironmentVariable = ZwTranslateFilePath(v22, 4LL);
          if ( EnvironmentVariable )
          {
            i = 0;
            goto LABEL_89;
          }
        }
        v33 = KeGetCurrentThread();
        --v33->KernelApcDisable;
        ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
        if ( v40 )
        {
          for ( i = 0; i <= 0xFFFF; ++i )
          {
            swprintf_s(Dst, 9uLL, L"Boot%04x", i);
            LODWORD(v34[0]) = 0;
            EnvironmentVariable = IoGetEnvironmentVariableEx(
                                    (unsigned int)Dst,
                                    (unsigned int)&EfiBootVariablesGuid,
                                    0,
                                    (unsigned int)v34,
                                    0LL);
            if ( EnvironmentVariable == -1073741568 && ((2 * ((i | (2 * i)) & 0xC4444444)) & i) != 0 )
            {
              swprintf_s(Dst, 9uLL, L"Boot%04X", i);
              LODWORD(v34[0]) = 0;
              EnvironmentVariable = IoGetEnvironmentVariableEx(
                                      (unsigned int)Dst,
                                      (unsigned int)&EfiBootVariablesGuid,
                                      0,
                                      (unsigned int)v34,
                                      0LL);
            }
            if ( EnvironmentVariable == -1073741568 )
            {
              v14 = *(char **)&Size[1];
              goto LABEL_86;
            }
            if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
              goto LABEL_80;
          }
          EnvironmentVariable = -1073741670;
LABEL_80:
          v14 = *(char **)&Size[1];
        }
        else
        {
          v14 = *(char **)&Size[1];
          i = *(_DWORD *)(*(_QWORD *)&Size[1] + 8LL);
          swprintf_s(Dst, 9uLL, L"Boot%04X", i);
          LODWORD(v34[0]) = 0;
          EnvironmentVariable = IoGetEnvironmentVariableEx(
                                  (unsigned int)Dst,
                                  (unsigned int)&EfiBootVariablesGuid,
                                  0,
                                  (unsigned int)v34,
                                  0LL);
          if ( EnvironmentVariable == -1073741568
            && ((2 * ((*((_DWORD *)v14 + 2) | (2 * *((_DWORD *)v14 + 2))) & 0xC4444444)) & *((_DWORD *)v14 + 2)) != 0 )
          {
            swprintf_s(Dst, 9uLL, L"Boot%04x");
            LODWORD(v34[0]) = 0;
            EnvironmentVariable = IoGetEnvironmentVariableEx(
                                    (unsigned int)Dst,
                                    (unsigned int)&EfiBootVariablesGuid,
                                    0,
                                    (unsigned int)v34,
                                    0LL);
          }
          if ( !EnvironmentVariable || EnvironmentVariable == -1073741789 )
LABEL_86:
            EnvironmentVariable = IoSetEnvironmentVariableEx(
                                    (unsigned int)Dst,
                                    (unsigned int)&EfiBootVariablesGuid,
                                    (_DWORD)P,
                                    Size[0],
                                    1);
        }
        ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
        KeLeaveCriticalRegion();
        goto LABEL_89;
      }
      EnvironmentVariable = -1073741670;
    }
LABEL_58:
    i = 0;
    goto LABEL_28;
  }
  EnvironmentVariable = -1073741811;
LABEL_28:
  v17 = (void *)v34[1];
LABEL_89:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v17 && v17 != (void *)v42 )
    ExFreePoolWithTag(v17, 0);
  ExFreePoolWithTag(v14, 0);
  if ( v40 && v43 && EnvironmentVariable >= 0 )
    *v43 = i;
  return (unsigned int)EnvironmentVariable;
}

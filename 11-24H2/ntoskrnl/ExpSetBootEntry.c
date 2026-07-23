/*
 * XREFs of ExpSetBootEntry @ 0x1407BC77C
 * Callers:
 *     NtAddBootEntry @ 0x1407BDCA0 (NtAddBootEntry.c)
 *     NtModifyBootEntry @ 0x1407BE6D0 (NtModifyBootEntry.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     swprintf_s @ 0x140500710 (swprintf_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwTranslateFilePath @ 0x1406AAE90 (ZwTranslateFilePath.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     strcmp @ 0x1406C1300 (strcmp.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExpVerifyWindowsOsOptions @ 0x14094D80C (ExpVerifyWindowsOsOptions.c)
 *     ExpSafeWcslen @ 0x14094E328 (ExpSafeWcslen.c)
 *     ExpVerifyFilePath @ 0x14094E480 (ExpVerifyFilePath.c)
 *     IoSetEnvironmentVariableEx @ 0x14094EF80 (IoSetEnvironmentVariableEx.c)
 *     IoGetEnvironmentVariableEx @ 0x14094FA00 (IoGetEnvironmentVariableEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  NTSTATUS EnvironmentVariable; // ebx
  _FILE_PATH *v17; // r13
  __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // rbx
  char *v21; // rsi
  _FILE_PATH *v22; // r14
  char *v23; // r12
  int v24; // eax
  int v25; // r15d
  size_t v26; // r13
  _FILE_PATH *v27; // rsi
  _FILE_PATH *v28; // rcx
  ULONG Length; // eax
  ULONG v30; // eax
  ULONG v31; // esi
  _WORD *v32; // rax
  _WORD *v33; // rbx
  int v34; // ecx
  char *v35; // rbx
  char *v36; // r15
  _FILE_PATH *v37; // r8
  struct _KTHREAD *v38; // rax
  ULONG v39; // [rsp+38h] [rbp-B0h] BYREF
  ULONG OutputFilePathLength; // [rsp+3Ch] [rbp-ACh] BYREF
  PVOID v41; // [rsp+40h] [rbp-A8h]
  ULONG v42; // [rsp+4Ch] [rbp-9Ch] BYREF
  unsigned int v44; // [rsp+54h] [rbp-94h]
  int v45; // [rsp+58h] [rbp-90h]
  _DWORD Size[3]; // [rsp+5Ch] [rbp-8Ch]
  int v47; // [rsp+68h] [rbp-80h]
  PVOID P; // [rsp+70h] [rbp-78h]
  PFILE_PATH InputFilePath; // [rsp+78h] [rbp-70h]
  _DWORD *v50; // [rsp+80h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-50h]
  wchar_t Dst[12]; // [rsp+A0h] [rbp-48h] BYREF

  v50 = (_DWORD *)a3;
  v47 = a1;
  *(_QWORD *)&Size[1] = 0LL;
  i = 0;
  InputFilePath = 0LL;
  v41 = 0LL;
  P = 0LL;
  OutputFilePathLength = 0;
  v42 = 0;
  v39 = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v8 = (unsigned __int64)a2 + 4;
  v9 = 0x7FFFFFFF0000LL;
  if ( PreviousMode )
  {
    if ( v8 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    v10 = *(_DWORD *)v8;
    v44 = v10;
  }
  else
  {
    v10 = *(_DWORD *)v8;
    v44 = v10;
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
      v10 = v44;
    if ( a3 )
    {
      if ( a3 < 0x7FFFFFFF0000LL )
        v9 = a3;
      *(_DWORD *)v9 = *(_DWORD *)v9;
      v10 = v44;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  Pool2 = (char *)ExAllocatePool2(0x40uLL, v10, 0x72766E45u);
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
      v45 = 1;
      v22 = (_FILE_PATH *)&v14[*((unsigned int *)v14 + 11) + 28];
    }
    else
    {
      v45 = 0;
      v22 = 0LL;
    }
    v23 = &v14[v18];
    v24 = ExpSafeWcslen(v23, v15);
    if ( v24 == -1 )
      goto LABEL_36;
    Size[0] = 2 * v24 + 2;
    InputFilePath = (PFILE_PATH)&v14[v19];
    EnvironmentVariable = ExpVerifyFilePath(&v14[v19]);
    if ( EnvironmentVariable < 0 )
      goto LABEL_88;
    if ( v21 > v23 )
      goto LABEL_36;
    v25 = Size[0];
    v26 = Size[0];
    v27 = InputFilePath;
    if ( &v23[Size[0]] > (char *)InputFilePath )
      goto LABEL_36;
    if ( InputFilePath->Type == 4 )
    {
      Length = InputFilePath->Length;
      v41 = InputFilePath;
    }
    else
    {
      EnvironmentVariable = ZwTranslateFilePath(InputFilePath, 4u, 0LL, &OutputFilePathLength);
      if ( EnvironmentVariable != -1073741789 )
        goto LABEL_88;
      v28 = (_FILE_PATH *)ExAllocatePool2(0x40uLL, OutputFilePathLength, 0x72766E45u);
      v41 = v28;
      if ( !v28 )
      {
        EnvironmentVariable = -1073741670;
        i = 0;
        v17 = 0LL;
        goto LABEL_89;
      }
      v39 = OutputFilePathLength;
      EnvironmentVariable = ZwTranslateFilePath(v27, 4u, v28, &v39);
      if ( EnvironmentVariable < 0 )
        goto LABEL_58;
      Length = OutputFilePathLength;
    }
    v30 = Length - 12;
    OutputFilePathLength = v30;
    if ( !v45 || v22->Type == 4 )
    {
      v31 = *((_DWORD *)v14 + 6);
      goto LABEL_56;
    }
    EnvironmentVariable = ZwTranslateFilePath(v22, 4u, 0LL, &v42);
    if ( EnvironmentVariable == -1073741789 )
    {
      v31 = v42 + *((_DWORD *)v14 + 6) - v22->Length;
      v30 = OutputFilePathLength;
LABEL_56:
      Size[0] = v25 + v31 + v30 + 6;
      v32 = (_WORD *)ExAllocatePool2(0x40uLL, Size[0], 0x72766E45u);
      v33 = v32;
      P = v32;
      if ( v32 )
      {
        *(_DWORD *)v32 = 0;
        v34 = 0;
        if ( (*((_DWORD *)v14 + 3) & 1) != 0 )
        {
          *(_DWORD *)v32 = 1;
          v34 = 1;
        }
        if ( (*((_DWORD *)v14 + 3) & 0x10) != 0 )
          *(_DWORD *)v32 = v34 | 8;
        v32[2] = OutputFilePathLength;
        memmove(v32 + 3, v23, v26);
        v35 = (char *)v33 + v26 + 6;
        v17 = (_FILE_PATH *)v41;
        memmove(v35, (char *)v41 + 12, OutputFilePathLength);
        v36 = &v35[OutputFilePathLength];
        if ( !v45 || v22->Type == 4 )
        {
          memmove(&v35[OutputFilePathLength], v14 + 28, v31);
        }
        else
        {
          memmove(&v35[OutputFilePathLength], v14 + 28, *((unsigned int *)v14 + 11));
          *((_DWORD *)v36 + 3) = v31;
          v37 = (_FILE_PATH *)&v36[*((unsigned int *)v14 + 11)];
          v39 = v42;
          EnvironmentVariable = ZwTranslateFilePath(v22, 4u, v37, &v42);
          if ( EnvironmentVariable )
          {
            i = 0;
            goto LABEL_89;
          }
        }
        v38 = KeGetCurrentThread();
        --v38->KernelApcDisable;
        ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
        if ( v47 )
        {
          for ( i = 0; i <= 0xFFFF; ++i )
          {
            swprintf_s(Dst, 9uLL, L"Boot%04x", i);
            v39 = 0;
            EnvironmentVariable = IoGetEnvironmentVariableEx(
                                    (unsigned int)Dst,
                                    (unsigned int)&EfiBootVariablesGuid,
                                    0,
                                    (unsigned int)&v39,
                                    0LL);
            if ( EnvironmentVariable == -1073741568 && ((2 * ((i | (2 * i)) & 0xC4444444)) & i) != 0 )
            {
              swprintf_s(Dst, 9uLL, L"Boot%04X", i);
              v39 = 0;
              EnvironmentVariable = IoGetEnvironmentVariableEx(
                                      (unsigned int)Dst,
                                      (unsigned int)&EfiBootVariablesGuid,
                                      0,
                                      (unsigned int)&v39,
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
          v39 = 0;
          EnvironmentVariable = IoGetEnvironmentVariableEx(
                                  (unsigned int)Dst,
                                  (unsigned int)&EfiBootVariablesGuid,
                                  0,
                                  (unsigned int)&v39,
                                  0LL);
          if ( EnvironmentVariable == -1073741568
            && ((2 * ((*((_DWORD *)v14 + 2) | (2 * *((_DWORD *)v14 + 2))) & 0xC4444444)) & *((_DWORD *)v14 + 2)) != 0 )
          {
            swprintf_s(Dst, 9uLL, L"Boot%04x");
            v39 = 0;
            EnvironmentVariable = IoGetEnvironmentVariableEx(
                                    (unsigned int)Dst,
                                    (unsigned int)&EfiBootVariablesGuid,
                                    0,
                                    (unsigned int)&v39,
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
  v17 = (_FILE_PATH *)v41;
LABEL_89:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v17 && v17 != InputFilePath )
    ExFreePoolWithTag(v17, 0);
  ExFreePoolWithTag(v14, 0);
  if ( v47 && v50 && EnvironmentVariable >= 0 )
    *v50 = i;
  return (unsigned int)EnvironmentVariable;
}

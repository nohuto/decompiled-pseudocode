/*
 * XREFs of ExpSetDriverEntry @ 0x1407BCE74
 * Callers:
 *     NtAddDriverEntry @ 0x1407BDCD0 (NtAddDriverEntry.c)
 *     NtModifyDriverEntry @ 0x1407BE700 (NtModifyDriverEntry.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     swprintf_s @ 0x140500710 (swprintf_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwTranslateFilePath @ 0x1406AAE90 (ZwTranslateFilePath.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExpSafeWcslen @ 0x14094E328 (ExpSafeWcslen.c)
 *     ExpVerifyFilePath @ 0x14094E480 (ExpVerifyFilePath.c)
 *     IoSetEnvironmentVariableEx @ 0x14094EF80 (IoSetEnvironmentVariableEx.c)
 *     IoGetEnvironmentVariableEx @ 0x14094FA00 (IoGetEnvironmentVariableEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpSetDriverEntry(int a1, const void *a2, unsigned int *a3)
{
  unsigned int i; // r15d
  _FILE_PATH *v5; // r13
  _FILE_PATH *v6; // r12
  KPROCESSOR_MODE PreviousMode; // si
  unsigned __int64 v8; // rdi
  __int64 v9; // rbx
  unsigned int v10; // edi
  unsigned __int64 v12; // rcx
  size_t v13; // rbx
  _DWORD *Pool2; // rax
  _DWORD *v15; // rdi
  NTSTATUS EnvironmentVariable; // ebx
  __int64 v17; // rax
  char *v18; // rsi
  int v19; // eax
  __int64 v20; // r8
  size_t v21; // r12
  _FILE_PATH *v22; // rcx
  ULONG Length; // eax
  _FILE_PATH *v24; // rbx
  char *v25; // rdi
  struct _KTHREAD *v26; // rax
  ULONG v27[2]; // [rsp+34h] [rbp-A4h] BYREF
  ULONG OutputFilePathLength; // [rsp+3Ch] [rbp-9Ch] BYREF
  _FILE_PATH *v29; // [rsp+40h] [rbp-98h]
  unsigned int v31; // [rsp+4Ch] [rbp-8Ch]
  int v32; // [rsp+50h] [rbp-88h]
  unsigned int v33; // [rsp+54h] [rbp-84h]
  PVOID v34; // [rsp+58h] [rbp-80h]
  PVOID P; // [rsp+60h] [rbp-78h]
  unsigned int *v36; // [rsp+68h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-58h]
  wchar_t Dst[12]; // [rsp+88h] [rbp-50h] BYREF

  v36 = a3;
  v32 = a1;
  v34 = 0LL;
  i = 0;
  v5 = 0LL;
  v6 = 0LL;
  v29 = 0LL;
  P = 0LL;
  OutputFilePathLength = 0;
  v27[0] = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v8 = (unsigned __int64)a2 + 4;
  v9 = 0x7FFFFFFF0000LL;
  if ( PreviousMode )
  {
    if ( v8 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    v10 = *(_DWORD *)v8;
    v31 = v10;
  }
  else
  {
    v10 = *(_DWORD *)v8;
    v31 = v10;
  }
  if ( v10 < 0x14 )
    return 3221225485LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225474LL;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = (unsigned __int64)a2 + v10;
    if ( v12 > 0x7FFFFFFF0000LL || v12 < (unsigned __int64)a2 )
      v10 = v31;
    if ( v36 )
    {
      if ( (unsigned __int64)v36 < 0x7FFFFFFF0000LL )
        v9 = (__int64)v36;
      *(_DWORD *)v9 = *(_DWORD *)v9;
      v10 = v31;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  v13 = v10;
  Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL, v10, 0x72766E45u);
  v15 = Pool2;
  v34 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, a2, v13);
  if ( *v15 == 1 && (v32 || v15[2] <= 0xFFFFu) )
  {
    v17 = (unsigned int)v15[3];
    if ( (v17 & 1) == 0 && (v15[4] & 3) == 0 )
    {
      v18 = (char *)v15 + v17;
      v19 = ExpSafeWcslen((char *)v15 + v17, (char *)v15 + v13);
      if ( v19 != -1 )
      {
        v21 = (unsigned int)(2 * v19 + 2);
        v5 = (_FILE_PATH *)((char *)v15 + v20);
        EnvironmentVariable = ExpVerifyFilePath((char *)v15 + v20);
        if ( EnvironmentVariable < 0 )
        {
LABEL_63:
          v6 = v29;
          goto LABEL_64;
        }
        if ( &v18[v21] > (char *)v5 )
        {
          EnvironmentVariable = -1073741811;
          goto LABEL_63;
        }
        if ( v5->Type == 4 )
        {
          Length = v5->Length;
          v24 = v5;
          v29 = v5;
        }
        else
        {
          EnvironmentVariable = ZwTranslateFilePath(v5, 4u, 0LL, &OutputFilePathLength);
          if ( EnvironmentVariable != -1073741789 )
            goto LABEL_63;
          v22 = (_FILE_PATH *)ExAllocatePool2(0x40uLL, OutputFilePathLength, 0x72766E45u);
          v29 = v22;
          if ( !v22 )
          {
            EnvironmentVariable = -1073741670;
            v6 = 0LL;
            goto LABEL_64;
          }
          v27[0] = OutputFilePathLength;
          EnvironmentVariable = ZwTranslateFilePath(v5, 4u, v22, v27);
          if ( EnvironmentVariable < 0 )
            goto LABEL_63;
          Length = OutputFilePathLength;
          v24 = v29;
        }
        OutputFilePathLength = Length - 12;
        v33 = v21 + 6 + Length - 12;
        P = (PVOID)ExAllocatePool2(0x40uLL, v33, 0x72766E45u);
        if ( P )
        {
          v25 = (char *)P;
          *((_WORD *)P + 2) = OutputFilePathLength;
          memmove(v25 + 6, v18, v21);
          memmove(&v25[v21 + 6], v24->FilePath, OutputFilePathLength);
          v26 = KeGetCurrentThread();
          --v26->KernelApcDisable;
          ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
          if ( v32 )
          {
            for ( i = 0; i <= 0xFFFF; ++i )
            {
              swprintf_s(Dst, 0xBuLL, L"Driver%04x", i);
              v27[0] = 0;
              EnvironmentVariable = IoGetEnvironmentVariableEx(
                                      (unsigned int)Dst,
                                      (unsigned int)&EfiDriverVariablesGuid,
                                      0,
                                      (unsigned int)v27,
                                      0LL);
              if ( EnvironmentVariable == -1073741568 && ((2 * ((i | (2 * i)) & 0xC4444444)) & i) != 0 )
              {
                swprintf_s(Dst, 0xBuLL, L"Driver%04X", i);
                v27[0] = 0;
                EnvironmentVariable = IoGetEnvironmentVariableEx(
                                        (unsigned int)Dst,
                                        (unsigned int)&EfiDriverVariablesGuid,
                                        0,
                                        (unsigned int)v27,
                                        0LL);
              }
              if ( EnvironmentVariable == -1073741568 )
              {
                v15 = v34;
                goto LABEL_61;
              }
              if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
                goto LABEL_55;
            }
            EnvironmentVariable = -1073741670;
LABEL_55:
            v15 = v34;
          }
          else
          {
            v15 = v34;
            i = *((_DWORD *)v34 + 2);
            swprintf_s(Dst, 0xBuLL, L"Driver%04X", i);
            v27[0] = 0;
            EnvironmentVariable = IoGetEnvironmentVariableEx(
                                    (unsigned int)Dst,
                                    (unsigned int)&EfiDriverVariablesGuid,
                                    0,
                                    (unsigned int)v27,
                                    0LL);
            if ( EnvironmentVariable == -1073741568 && ((2 * ((v15[2] | (2 * v15[2])) & 0xC4444444)) & v15[2]) != 0 )
            {
              swprintf_s(Dst, 0xBuLL, L"Driver%04x");
              v27[0] = 0;
              EnvironmentVariable = IoGetEnvironmentVariableEx(
                                      (unsigned int)Dst,
                                      (unsigned int)&EfiDriverVariablesGuid,
                                      0,
                                      (unsigned int)v27,
                                      0LL);
            }
            if ( !EnvironmentVariable || EnvironmentVariable == -1073741789 )
LABEL_61:
              EnvironmentVariable = IoSetEnvironmentVariableEx(
                                      (unsigned int)Dst,
                                      (unsigned int)&EfiDriverVariablesGuid,
                                      (_DWORD)P,
                                      v33,
                                      1);
          }
          ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
          KeLeaveCriticalRegion();
        }
        else
        {
          EnvironmentVariable = -1073741670;
        }
        goto LABEL_63;
      }
    }
  }
  EnvironmentVariable = -1073741811;
LABEL_64:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v6 && v6 != v5 )
    ExFreePoolWithTag(v6, 0);
  ExFreePoolWithTag(v15, 0);
  if ( v32 && v36 && EnvironmentVariable >= 0 )
    *v36 = i;
  return (unsigned int)EnvironmentVariable;
}

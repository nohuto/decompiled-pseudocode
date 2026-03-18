/*
 * XREFs of ExpSetDriverEntry @ 0x1407AD5A4
 * Callers:
 *     NtAddDriverEntry @ 0x1407AE0B0 (NtAddDriverEntry.c)
 *     NtModifyDriverEntry @ 0x1407AEAE0 (NtModifyDriverEntry.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     swprintf_s @ 0x1405006D0 (swprintf_s.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwTranslateFilePath @ 0x14069EC20 (ZwTranslateFilePath.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExpSafeWcslen @ 0x140820FC8 (ExpSafeWcslen.c)
 *     ExpVerifyFilePath @ 0x140821120 (ExpVerifyFilePath.c)
 *     IoSetEnvironmentVariableEx @ 0x140821C20 (IoSetEnvironmentVariableEx.c)
 *     IoGetEnvironmentVariableEx @ 0x1408224D8 (IoGetEnvironmentVariableEx.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpSetDriverEntry(int a1, const void *a2, unsigned int *a3)
{
  unsigned int i; // r15d
  unsigned __int64 v5; // r13
  void *v6; // r12
  KPROCESSOR_MODE PreviousMode; // si
  unsigned __int64 v8; // rdi
  __int64 v9; // rbx
  unsigned int v10; // edi
  unsigned __int64 v12; // rcx
  size_t v13; // rbx
  _DWORD *Pool2; // rax
  _DWORD *v15; // rdi
  int EnvironmentVariable; // ebx
  __int64 v17; // rax
  char *v18; // rsi
  int v19; // eax
  __int64 v20; // r8
  size_t v21; // r12
  int v22; // eax
  unsigned __int64 v23; // rbx
  char *v24; // rdi
  struct _KTHREAD *v25; // rax
  _DWORD v26[5]; // [rsp+34h] [rbp-A4h] BYREF
  unsigned int v28; // [rsp+4Ch] [rbp-8Ch]
  int v29; // [rsp+50h] [rbp-88h]
  int v30; // [rsp+54h] [rbp-84h]
  PVOID v31; // [rsp+58h] [rbp-80h]
  PVOID P; // [rsp+60h] [rbp-78h]
  unsigned int *v33; // [rsp+68h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-58h]
  wchar_t Dst[12]; // [rsp+88h] [rbp-50h] BYREF

  v33 = a3;
  v29 = a1;
  v31 = 0LL;
  i = 0;
  v5 = 0LL;
  v6 = 0LL;
  P = 0LL;
  memset(&v26[2], 0, 12);
  v26[0] = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v8 = (unsigned __int64)a2 + 4;
  v9 = 0x7FFFFFFF0000LL;
  if ( PreviousMode )
  {
    if ( v8 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    v10 = *(_DWORD *)v8;
    v28 = v10;
  }
  else
  {
    v10 = *(_DWORD *)v8;
    v28 = v10;
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
      v10 = v28;
    if ( v33 )
    {
      if ( (unsigned __int64)v33 < 0x7FFFFFFF0000LL )
        v9 = (__int64)v33;
      *(_DWORD *)v9 = *(_DWORD *)v9;
      v10 = v28;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  v13 = v10;
  Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
  v15 = Pool2;
  v31 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, a2, v13);
  if ( *v15 == 1 && (v29 || v15[2] <= 0xFFFFu) )
  {
    v17 = (unsigned int)v15[3];
    if ( (v17 & 1) == 0 && (v15[4] & 3) == 0 )
    {
      v18 = (char *)v15 + v17;
      v19 = ExpSafeWcslen((char *)v15 + v17, (char *)v15 + v13);
      if ( v19 != -1 )
      {
        v21 = (unsigned int)(2 * v19 + 2);
        v5 = (unsigned __int64)v15 + v20;
        EnvironmentVariable = ExpVerifyFilePath((char *)v15 + v20);
        if ( EnvironmentVariable < 0 )
        {
LABEL_63:
          v6 = *(void **)&v26[3];
          goto LABEL_64;
        }
        if ( (unsigned __int64)&v18[v21] > v5 )
        {
          EnvironmentVariable = -1073741811;
          goto LABEL_63;
        }
        if ( *(_DWORD *)(v5 + 8) == 4 )
        {
          v22 = *(_DWORD *)(v5 + 4);
          v23 = v5;
          *(_QWORD *)&v26[3] = v5;
        }
        else
        {
          EnvironmentVariable = ZwTranslateFilePath(v5, 4LL);
          if ( EnvironmentVariable != -1073741789 )
            goto LABEL_63;
          *(_QWORD *)&v26[3] = ExAllocatePool2(0x40uLL);
          if ( !*(_QWORD *)&v26[3] )
          {
            EnvironmentVariable = -1073741670;
            v6 = 0LL;
            goto LABEL_64;
          }
          v26[0] = v26[2];
          EnvironmentVariable = ZwTranslateFilePath(v5, 4LL);
          if ( EnvironmentVariable < 0 )
            goto LABEL_63;
          v22 = v26[2];
          v23 = *(_QWORD *)&v26[3];
        }
        v26[2] = v22 - 12;
        v30 = v21 + 6 + v22 - 12;
        P = (PVOID)ExAllocatePool2(0x40uLL);
        if ( P )
        {
          v24 = (char *)P;
          *((_WORD *)P + 2) = v26[2];
          memmove(v24 + 6, v18, v21);
          memmove(&v24[v21 + 6], (const void *)(v23 + 12), v26[2]);
          v25 = KeGetCurrentThread();
          --v25->KernelApcDisable;
          ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
          if ( v29 )
          {
            for ( i = 0; i <= 0xFFFF; ++i )
            {
              swprintf_s(Dst, 0xBuLL, L"Driver%04x", i);
              v26[0] = 0;
              EnvironmentVariable = IoGetEnvironmentVariableEx(
                                      (unsigned int)Dst,
                                      (unsigned int)&EfiDriverVariablesGuid,
                                      0,
                                      (unsigned int)v26,
                                      0LL);
              if ( EnvironmentVariable == -1073741568 && ((2 * ((i | (2 * i)) & 0xC4444444)) & i) != 0 )
              {
                swprintf_s(Dst, 0xBuLL, L"Driver%04X", i);
                v26[0] = 0;
                EnvironmentVariable = IoGetEnvironmentVariableEx(
                                        (unsigned int)Dst,
                                        (unsigned int)&EfiDriverVariablesGuid,
                                        0,
                                        (unsigned int)v26,
                                        0LL);
              }
              if ( EnvironmentVariable == -1073741568 )
              {
                v15 = v31;
                goto LABEL_61;
              }
              if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
                goto LABEL_55;
            }
            EnvironmentVariable = -1073741670;
LABEL_55:
            v15 = v31;
          }
          else
          {
            v15 = v31;
            i = *((_DWORD *)v31 + 2);
            swprintf_s(Dst, 0xBuLL, L"Driver%04X", i);
            v26[0] = 0;
            EnvironmentVariable = IoGetEnvironmentVariableEx(
                                    (unsigned int)Dst,
                                    (unsigned int)&EfiDriverVariablesGuid,
                                    0,
                                    (unsigned int)v26,
                                    0LL);
            if ( EnvironmentVariable == -1073741568 && ((2 * ((v15[2] | (2 * v15[2])) & 0xC4444444)) & v15[2]) != 0 )
            {
              swprintf_s(Dst, 0xBuLL, L"Driver%04x");
              v26[0] = 0;
              EnvironmentVariable = IoGetEnvironmentVariableEx(
                                      (unsigned int)Dst,
                                      (unsigned int)&EfiDriverVariablesGuid,
                                      0,
                                      (unsigned int)v26,
                                      0LL);
            }
            if ( !EnvironmentVariable || EnvironmentVariable == -1073741789 )
LABEL_61:
              EnvironmentVariable = IoSetEnvironmentVariableEx(
                                      (unsigned int)Dst,
                                      (unsigned int)&EfiDriverVariablesGuid,
                                      (_DWORD)P,
                                      v30,
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
  if ( v6 && v6 != (void *)v5 )
    ExFreePoolWithTag(v6, 0);
  ExFreePoolWithTag(v15, 0);
  if ( v29 && v33 && EnvironmentVariable >= 0 )
    *v33 = i;
  return (unsigned int)EnvironmentVariable;
}

/*
 * XREFs of NtQueryBootOptions @ 0x140A937F0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     IoGetEnvironmentVariableEx @ 0x1408224D8 (IoGetEnvironmentVariableEx.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 */

__int64 __fastcall NtQueryBootOptions(_DWORD *Address, _DWORD *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  unsigned int v7; // ebx
  struct _KTHREAD *v8; // rax
  unsigned int EnvironmentVariable; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-44h] BYREF
  int v14; // [rsp+3Ch] [rbp-3Ch] BYREF
  int v15; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+44h] [rbp-34h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-20h]
  KPROCESSOR_MODE PreviousMode; // [rsp+90h] [rbp+18h]

  v13 = 0;
  v14 = 0;
  v15 = 0;
  v12 = 0;
  if ( dword_140EFE810 != 2 || PsIsCurrentThreadInServerSilo() )
    return 3221225474LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v4 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v4 = (__int64)a2;
    *(_DWORD *)v4 = *(_DWORD *)v4;
    v5 = Address != 0LL ? *a2 : 0;
    v16 = v5;
    if ( v5 )
      ProbeForWrite(Address, v5, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    v5 = Address != 0LL ? *a2 : 0;
    v16 = v5;
  }
  if ( v5 >= 0x16 )
  {
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    v12 = 4;
    EnvironmentVariable = IoGetEnvironmentVariableEx(
                            L"Timeout",
                            (__int64)&EfiBootVariablesGuid,
                            (__int64)&v13,
                            (int *)&v12,
                            0LL);
    v7 = EnvironmentVariable;
    if ( EnvironmentVariable == -1073741789 )
    {
      v13 = -2;
LABEL_23:
      v12 = 4;
      v10 = IoGetEnvironmentVariableEx(L"BootCurrent", (__int64)&EfiBootVariablesGuid, (__int64)&v14, (int *)&v12, 0LL);
      v7 = v10;
      if ( v10 == -1073741789 || v10 == -1073741568 )
      {
        v14 = -2;
LABEL_29:
        v12 = 2;
        v11 = IoGetEnvironmentVariableEx(L"BootNext", (__int64)&EfiBootVariablesGuid, (__int64)&v15, (int *)&v12, 0LL);
        v7 = v11;
        if ( v11 == -1073741789 || v11 == -1073741568 )
        {
          v15 = -2;
          v7 = 0;
        }
        else if ( !v11 && v12 > 2 )
        {
          v15 = (unsigned __int16)v15;
        }
        goto LABEL_35;
      }
      if ( !v10 )
      {
        if ( v12 > 2 )
          v14 = (unsigned __int16)v14;
        goto LABEL_29;
      }
LABEL_35:
      ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
      KeLeaveCriticalRegion();
      goto LABEL_36;
    }
    if ( EnvironmentVariable != -1073741568 )
    {
      if ( EnvironmentVariable )
        goto LABEL_35;
      if ( v12 <= 2 )
      {
LABEL_20:
        if ( v13 != 0xFFFF )
          goto LABEL_23;
        goto LABEL_21;
      }
      if ( v13 != -1 )
      {
        if ( v13 > 0xFFFE )
          v13 = 65534;
        goto LABEL_20;
      }
    }
LABEL_21:
    v13 = -1;
    goto LABEL_23;
  }
  v7 = -1073741789;
LABEL_36:
  if ( !v7 )
  {
    if ( Address )
    {
      *Address = 1;
      Address[1] = 22;
      Address[2] = v13;
      Address[3] = v14;
      Address[4] = v15;
      *((_WORD *)Address + 10) = 0;
    }
  }
  *a2 = 22;
  return v7;
}

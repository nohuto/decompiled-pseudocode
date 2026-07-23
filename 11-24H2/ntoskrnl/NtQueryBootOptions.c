/*
 * XREFs of NtQueryBootOptions @ 0x140A942B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     IoGetEnvironmentVariableEx @ 0x14094FA00 (IoGetEnvironmentVariableEx.c)
 */

NTSTATUS __cdecl NtQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  __int64 v4; // rcx
  ULONG v5; // ebx
  NTSTATUS v7; // ebx
  struct _KTHREAD *v8; // rax
  NTSTATUS EnvironmentVariable; // eax
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  unsigned int v12; // [rsp+30h] [rbp-48h] BYREF
  ULONG v13[2]; // [rsp+34h] [rbp-44h] BYREF
  ULONG v14; // [rsp+3Ch] [rbp-3Ch] BYREF
  ULONG v15; // [rsp+40h] [rbp-38h] BYREF
  ULONG v16; // [rsp+44h] [rbp-34h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-20h]
  KPROCESSOR_MODE PreviousMode; // [rsp+90h] [rbp+18h]

  v13[0] = 0;
  v14 = 0;
  v15 = 0;
  v12 = 0;
  if ( dword_140EFEE10 != 2 || PsIsCurrentThreadInServerSilo() )
    return -1073741822;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v4 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)BootOptionsLength < 0x7FFFFFFF0000LL )
      v4 = (__int64)BootOptionsLength;
    *(_DWORD *)v4 = *(_DWORD *)v4;
    v5 = BootOptions != 0LL ? *BootOptionsLength : 0;
    v16 = v5;
    if ( v5 )
      ProbeForWrite(BootOptions, v5, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v5 = BootOptions != 0LL ? *BootOptionsLength : 0;
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
                            (__int64)v13,
                            (int *)&v12,
                            0LL);
    v7 = EnvironmentVariable;
    if ( EnvironmentVariable == -1073741789 )
    {
      v13[0] = -2;
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
        if ( v13[0] != 0xFFFF )
          goto LABEL_23;
        goto LABEL_21;
      }
      if ( v13[0] != -1 )
      {
        if ( v13[0] > 0xFFFE )
          v13[0] = 65534;
        goto LABEL_20;
      }
    }
LABEL_21:
    v13[0] = -1;
    goto LABEL_23;
  }
  v7 = -1073741789;
LABEL_36:
  if ( !v7 )
  {
    if ( BootOptions )
    {
      BootOptions->Version = 1;
      BootOptions->Length = 22;
      BootOptions->Timeout = v13[0];
      BootOptions->CurrentBootEntryId = v14;
      BootOptions->NextBootEntryId = v15;
      BootOptions->HeadlessRedirection[0] = 0;
    }
  }
  *BootOptionsLength = 22;
  return v7;
}

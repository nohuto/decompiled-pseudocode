/*
 * XREFs of NtQuerySystemEnvironmentValueEx @ 0x140821EF0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x1402D31E0 (ExUnlockUserBuffer.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     RtlCheckTokenMembershipEx @ 0x140472DB0 (RtlCheckTokenMembershipEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x140821DF0 (ExGetFirmwareEnvironmentVariable.c)
 *     IoGetEnvironmentVariableEx @ 0x1408224D8 (IoGetEnvironmentVariableEx.c)
 *     ExLockUserBuffer @ 0x140823168 (ExLockUserBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     PsIsProcessAppContainer @ 0x140969C10 (PsIsProcessAppContainer.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140A9AD58 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQuerySystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        PCGUID VendorGuid,
        PVOID Value,
        PULONG ValueLength,
        PULONG Attributes)
{
  BOOLEAN v9; // bl
  __int64 v10; // rbx
  __int64 v11; // rcx
  ULONG v12; // eax
  unsigned __int64 v13; // rbx
  _WORD *Pool2; // rax
  _WORD *v15; // rsi
  __int64 v16; // r8
  NTSTATUS EnvironmentVariable; // ebx
  int v18; // eax
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v21; // eax
  BOOLEAN v22; // cl
  BOOLEAN IsMember[4]; // [rsp+30h] [rbp-A8h] BYREF
  ULONG v24; // [rsp+34h] [rbp-A4h] BYREF
  int v25; // [rsp+38h] [rbp-A0h]
  _WORD *v26; // [rsp+40h] [rbp-98h]
  ULONG v27; // [rsp+48h] [rbp-90h] BYREF
  __int64 v28; // [rsp+50h] [rbp-88h] BYREF
  PVOID P; // [rsp+58h] [rbp-80h] BYREF
  __m128i Src; // [rsp+60h] [rbp-78h]
  GUID v31; // [rsp+80h] [rbp-58h] BYREF

  Src = 0LL;
  v26 = 0LL;
  v31 = 0LL;
  v24 = 0;
  v27 = 0;
  if ( PsIsCurrentThreadInServerSilo() )
    return -1073741822;
  if ( !KeGetCurrentThread()->PreviousMode )
    return ExGetFirmwareEnvironmentVariable(
             (__int64)VariableName,
             (int)VendorGuid,
             (int)Value,
             (int)ValueLength,
             (__int64)Attributes);
  v9 = SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, 1);
  if ( !v9 )
  {
    if ( (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
      v9 = ExpFirmwareAccessAppContainerCheck(1LL);
    if ( !v9 )
    {
      IsMember[0] = 0;
      v21 = RtlCheckTokenMembershipEx(0LL, SeExports->SeUserModeDriversSid, 0, IsMember);
      v22 = IsMember[0];
      if ( v21 < 0 )
        v22 = 0;
      IsMember[0] = v22;
      if ( !v22 )
      {
        EnvironmentVariable = -1073741727;
        goto LABEL_40;
      }
    }
  }
  if ( dword_140EFE810 != 2 )
  {
    EnvironmentVariable = -1073741822;
LABEL_40:
    v15 = v26;
    goto LABEL_36;
  }
  if ( ((unsigned __int8)VariableName & 3) != 0 )
LABEL_24:
    ExRaiseDatatypeMisalignment();
  v10 = 0x7FFFFFFF0000LL;
  Src = *(__m128i *)VariableName;
  if ( (unsigned __int16)_mm_cvtsi128_si32(Src) )
  {
    if ( (Src.m128i_i8[8] & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)VendorGuid & 3) == 0 )
    {
      v11 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ValueLength < 0x7FFFFFFF0000LL )
        v11 = (__int64)ValueLength;
      *(_DWORD *)v11 = *(_DWORD *)v11;
      v12 = *ValueLength;
      v24 = *ValueLength;
      if ( !Value )
      {
        v24 = 0;
        v12 = 0;
      }
      if ( v12 )
        ProbeForWrite(Value, v12, 1u);
      if ( Attributes )
      {
        if ( (unsigned __int64)Attributes < 0x7FFFFFFF0000LL )
          v10 = (__int64)Attributes;
        *(_DWORD *)v10 = *(_DWORD *)v10;
      }
      v31 = *VendorGuid;
      v13 = Src.m128i_u16[0];
      Pool2 = (_WORD *)ExAllocatePool2(0x40uLL);
      v15 = Pool2;
      v26 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, (const void *)Src.m128i_i64[1], (unsigned int)v13);
        v15[v13 >> 1] = 0;
        P = 0LL;
        v28 = 0LL;
        if ( v24
          && (LOBYTE(v16) = 1, v18 = ExLockUserBuffer(Value, v24, v16, 1LL, &v28, &P),
                               EnvironmentVariable = v18,
                               v18 < 0) )
        {
          v25 = v18;
        }
        else
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
          v15 = v26;
          EnvironmentVariable = IoGetEnvironmentVariableEx(
                                  (_DWORD)v26,
                                  (unsigned int)&v31,
                                  v28,
                                  (unsigned int)&v24,
                                  (__int64)&v27);
          ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
          KeLeaveCriticalRegion();
          if ( P )
            ExUnlockUserBuffer((struct _MDL *)P);
          v25 = EnvironmentVariable;
        }
        if ( (int)(EnvironmentVariable + 0x80000000) < 0 || EnvironmentVariable == -1073741789 )
          *ValueLength = v24;
        if ( Attributes && EnvironmentVariable >= 0 )
          *Attributes = v27;
      }
      else
      {
        EnvironmentVariable = -1073741670;
        v25 = -1073741670;
      }
      goto LABEL_36;
    }
    goto LABEL_24;
  }
  EnvironmentVariable = -1073741819;
  v25 = -1073741819;
  v15 = v26;
LABEL_36:
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  return EnvironmentVariable;
}

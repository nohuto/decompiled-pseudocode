/*
 * XREFs of NtQuerySystemEnvironmentValue @ 0x1407AEDE0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     RtlInitAnsiString @ 0x14046B2E0 (RtlInitAnsiString.c)
 *     HalGetEnvironmentVariable @ 0x14053EC90 (HalGetEnvironmentVariable.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408E5A80 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeToMultiByteSize @ 0x1408E66F0 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x1408E67D0 (RtlUnicodeStringToAnsiString.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQuerySystemEnvironmentValue(
        PUNICODE_STRING VariableName,
        PWSTR VariableValue,
        USHORT ValueLength,
        PUSHORT ReturnLength)
{
  SIZE_T v5; // r15
  __int64 v9; // rbx
  unsigned __int16 v10; // si
  const WCHAR *v11; // rdi
  const WCHAR *v12; // rcx
  unsigned __int16 v13; // bx
  int v14; // ebx
  void *Pool2; // rdi
  struct _KTHREAD *v16; // rax
  int EnvironmentVariable; // ebx
  NTSTATUS v18; // ebx
  KPROCESSOR_MODE PreviousMode; // [rsp+20h] [rbp-78h]
  PCWCH UnicodeString[2]; // [rsp+28h] [rbp-70h] BYREF
  ULONG BytesInMultiByteString; // [rsp+38h] [rbp-60h] BYREF
  _STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  ULONG v23; // [rsp+50h] [rbp-48h]
  int v24; // [rsp+54h] [rbp-44h]
  PVOID P; // [rsp+60h] [rbp-38h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-28h]

  v5 = ValueLength;
  v23 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  *(_OWORD *)UnicodeString = 0LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return -1073741822;
  DestinationString.Buffer = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)VariableName & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = 0x7FFFFFFF0000LL;
    *(UNICODE_STRING *)UnicodeString = *VariableName;
    v10 = _mm_cvtsi128_si32(*(__m128i *)UnicodeString);
    if ( !v10 )
      return -1073741819;
    if ( ((__int64)UnicodeString[1] & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = UnicodeString[1];
    v12 = (PCWCH)((char *)UnicodeString[1] + v10);
    if ( (unsigned __int64)v12 > 0x7FFFFFFF0000LL || v12 < UnicodeString[1] )
    {
      v11 = UnicodeString[1];
      v10 = (unsigned __int16)UnicodeString[0];
    }
    ProbeForWrite(VariableValue, v5, 2u);
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v9 = (__int64)ReturnLength;
      *(_WORD *)v9 = *(_WORD *)v9;
      v11 = UnicodeString[1];
      v10 = (unsigned __int16)UnicodeString[0];
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    *(UNICODE_STRING *)UnicodeString = *VariableName;
    v11 = (const WCHAR *)_mm_srli_si128(*(__m128i *)UnicodeString, 8).m128i_u64[0];
    v10 = _mm_cvtsi128_si32(*(__m128i *)UnicodeString);
  }
  BytesInMultiByteString = 0;
  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, v11, v10);
  v13 = BytesInMultiByteString + 1;
  v23 = BytesInMultiByteString + 1;
  DestinationString.Buffer = (char *)ExAllocatePool2(0x40uLL);
  if ( !DestinationString.Buffer )
    return -1073741670;
  DestinationString.MaximumLength = v13;
  v14 = RtlUnicodeStringToAnsiString(&DestinationString, (PCUNICODE_STRING)UnicodeString, 0);
  v24 = v14;
  if ( v14 >= 0 )
  {
    Pool2 = (void *)ExAllocatePool2(0x40uLL);
    P = Pool2;
    if ( Pool2 )
    {
      v16 = KeGetCurrentThread();
      --v16->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
      EnvironmentVariable = HalGetEnvironmentVariable(DestinationString.Buffer, 0x400u, (char *)Pool2);
      ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
      KeLeaveCriticalRegion();
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      if ( EnvironmentVariable )
      {
        ExFreePoolWithTag(Pool2, 0);
        return -1073741823;
      }
      else
      {
        RtlInitAnsiString(&DestinationString, (PCSZ)Pool2);
        UnicodeString[1] = VariableValue;
        WORD1(UnicodeString[0]) = v5;
        LOWORD(UnicodeString[0]) = 0;
        v18 = RtlAnsiStringToUnicodeString((PUNICODE_STRING)UnicodeString, &DestinationString, 0);
        v24 = v18;
        if ( ReturnLength )
          *ReturnLength = (USHORT)UnicodeString[0];
        ExFreePoolWithTag(Pool2, 0);
        return v18;
      }
    }
    else
    {
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      return -1073741670;
    }
  }
  else
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    return v14;
  }
}

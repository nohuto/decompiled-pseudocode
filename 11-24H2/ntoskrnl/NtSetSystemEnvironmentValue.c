/*
 * XREFs of NtSetSystemEnvironmentValue @ 0x1407BF0A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     HalSetEnvironmentVariable @ 0x14053EE50 (HalSetEnvironmentVariable.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     RtlUnicodeToMultiByteSize @ 0x140905100 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x1409051E0 (RtlUnicodeStringToAnsiString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetSystemEnvironmentValue(PUNICODE_STRING VariableName, PUNICODE_STRING VariableValue)
{
  unsigned __int16 v5; // di
  const WCHAR *v6; // rbx
  const WCHAR *v7; // rcx
  unsigned __int16 v8; // si
  int v9; // esi
  unsigned __int16 v10; // bx
  int v11; // ebx
  struct _KTHREAD *v12; // rax
  int v13; // ebx
  ULONG BytesInMultiByteString; // [rsp+24h] [rbp-84h] BYREF
  ULONG v15; // [rsp+28h] [rbp-80h] BYREF
  _STRING DestinationString; // [rsp+30h] [rbp-78h] BYREF
  _STRING v17; // [rsp+40h] [rbp-68h] BYREF
  ULONG v18; // [rsp+50h] [rbp-58h]
  ULONG v19; // [rsp+54h] [rbp-54h]
  int v20; // [rsp+58h] [rbp-50h]
  PCWCH UnicodeString[2]; // [rsp+60h] [rbp-48h] BYREF
  __m128i v22; // [rsp+70h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-20h]
  KPROCESSOR_MODE PreviousMode; // [rsp+C0h] [rbp+18h]

  v18 = 0;
  v19 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  *(_QWORD *)&v17.Length = 0LL;
  *(_OWORD *)UnicodeString = 0LL;
  v22 = 0LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return -1073741822;
  DestinationString.Buffer = 0LL;
  v17.Buffer = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)VariableName & 3) != 0 )
      goto LABEL_19;
    *(UNICODE_STRING *)UnicodeString = *VariableName;
    if ( !(unsigned __int16)_mm_cvtsi128_si32(*(__m128i *)UnicodeString) )
      return -1073741670;
    if ( ((__int64)UnicodeString[1] & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)VariableValue & 3) != 0 )
LABEL_19:
      ExRaiseDatatypeMisalignment();
    v22 = *(__m128i *)VariableValue;
    v5 = _mm_cvtsi128_si32(v22);
    if ( !v5 )
      return -1073741670;
    v6 = (const WCHAR *)v22.m128i_i64[1];
    if ( (v22.m128i_i8[8] & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (const WCHAR *)(v22.m128i_i64[1] + v5);
    if ( (unsigned __int64)v7 > 0x7FFFFFFF0000LL || (unsigned __int64)v7 < v22.m128i_i64[1] )
    {
      v6 = (const WCHAR *)v22.m128i_i64[1];
      v5 = v22.m128i_i16[0];
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    *(UNICODE_STRING *)UnicodeString = *VariableName;
    v22 = *(__m128i *)VariableValue;
    v6 = (const WCHAR *)_mm_srli_si128(v22, 8).m128i_u64[0];
    v5 = _mm_cvtsi128_si32(v22);
  }
  BytesInMultiByteString = 0;
  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, UnicodeString[1], LOWORD(UnicodeString[0]));
  v8 = BytesInMultiByteString + 1;
  v18 = BytesInMultiByteString + 1;
  DestinationString.Buffer = (char *)ExAllocatePool2(0x40uLL, BytesInMultiByteString + 1, 0x72766E45u);
  if ( !DestinationString.Buffer )
    return -1073741670;
  DestinationString.MaximumLength = v8;
  v9 = RtlUnicodeStringToAnsiString(&DestinationString, (PCUNICODE_STRING)UnicodeString, 0);
  v20 = v9;
  if ( v9 >= 0 )
  {
    v15 = 0;
    RtlUnicodeToMultiByteSize(&v15, v6, v5);
    v10 = v15 + 1;
    v19 = v15 + 1;
    v17.Buffer = (char *)ExAllocatePool2(0x40uLL, v15 + 1, 0x72766E45u);
    if ( v17.Buffer )
    {
      v17.MaximumLength = v10;
      v11 = RtlUnicodeStringToAnsiString(&v17, (PCUNICODE_STRING)&v22, 0);
      v20 = v11;
      if ( v11 >= 0 )
      {
        v12 = KeGetCurrentThread();
        --v12->KernelApcDisable;
        ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
        v13 = HalSetEnvironmentVariable(DestinationString.Buffer, v17.Buffer);
        ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
        KeLeaveCriticalRegion();
        ExFreePoolWithTag(DestinationString.Buffer, 0);
        ExFreePoolWithTag(v17.Buffer, 0);
        return v13 != 0 ? 0xC000009A : 0;
      }
      else
      {
        ExFreePoolWithTag(DestinationString.Buffer, 0);
        ExFreePoolWithTag(v17.Buffer, 0);
        return v11;
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
    return v9;
  }
}

/*
 * XREFs of NtSetSystemEnvironmentValueEx @ 0x1407BF3E0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1407BB8C0 (ExSetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1407BD3F8 (ExpSetFirmwareEnvironmentVariable.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     PsIsProcessAppContainer @ 0x1408592D0 (PsIsProcessAppContainer.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140A9BEA8 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetSystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        PCGUID VendorGuid,
        PVOID Value,
        ULONG ValueLength,
        ULONG Attributes)
{
  _WORD *Pool2; // rax
  _WORD *v10; // rdi
  __int64 v11; // rcx
  NTSTATUS v12; // ebx
  BOOLEAN v13; // [rsp+30h] [rbp-78h]
  unsigned int v15; // [rsp+38h] [rbp-70h]
  UNICODE_STRING Src; // [rsp+48h] [rbp-60h]
  GUID v17; // [rsp+68h] [rbp-40h] BYREF

  v17 = 0LL;
  if ( dword_140EFEE10 != 2 || PsIsCurrentThreadInServerSilo() )
    return -1073741822;
  if ( !KeGetCurrentThread()->PreviousMode )
    return ExSetFirmwareEnvironmentVariable(
             (__int64)VariableName,
             (int)VendorGuid,
             (__int64)Value,
             ValueLength,
             Attributes);
  if ( ((unsigned __int8)VariableName & 3) != 0 )
    goto LABEL_24;
  Src = *VariableName;
  if ( !(unsigned __int16)_mm_cvtsi128_si32(*(__m128i *)VariableName) )
    return -1073741819;
  if ( ((__int64)Src.Buffer & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( ((unsigned __int8)VendorGuid & 3) != 0 )
LABEL_24:
    ExRaiseDatatypeMisalignment();
  v15 = Value != 0LL ? ValueLength : 0;
  v13 = SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, 1);
  if ( v13 )
    goto LABEL_16;
  if ( (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
    v13 = ExpFirmwareAccessAppContainerCheck(2LL);
  if ( !v13 )
    return -1073741727;
LABEL_16:
  v17 = *VendorGuid;
  Pool2 = (_WORD *)ExAllocatePool2(0x40uLL, Src.Length + 2LL, 0x72766E45u);
  v10 = Pool2;
  if ( !Pool2 )
    return -1073741670;
  memmove(Pool2, Src.Buffer, Src.Length);
  v10[(unsigned __int64)Src.Length >> 1] = 0;
  v11 = *(_QWORD *)&v17.Data1 - ExpSecureBootVendorGuid;
  if ( *(_QWORD *)&v17.Data1 == ExpSecureBootVendorGuid )
    v11 = *(_QWORD *)v17.Data4 - 0x4B788FE7F42860BDLL;
  if ( v11 || wcsnicmp(v10, L"Kernel_", 7uLL) )
  {
    v12 = ExpSetFirmwareEnvironmentVariable((int)v10, (int)&v17, (__int64)Value, v15, Attributes, 1);
    ExFreePoolWithTag(v10, 0);
    return v12;
  }
  else
  {
    ExFreePoolWithTag(v10, 0);
    return -1073741790;
  }
}

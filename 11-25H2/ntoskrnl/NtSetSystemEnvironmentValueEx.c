/*
 * XREFs of NtSetSystemEnvironmentValueEx @ 0x1407AF7C0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     _wcsnicmp @ 0x1404FBD70 (_wcsnicmp.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1407ABFC0 (ExSetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1407ADB28 (ExpSetFirmwareEnvironmentVariable.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     PsIsProcessAppContainer @ 0x140969C10 (PsIsProcessAppContainer.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140A9AD58 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetSystemEnvironmentValueEx(__m128i *a1, __int128 *a2, __int64 a3, int a4, int a5)
{
  _WORD *Pool2; // rax
  _WORD *v10; // rdi
  __int64 v11; // rcx
  unsigned int v12; // ebx
  BOOLEAN v13; // [rsp+30h] [rbp-78h]
  unsigned int v15; // [rsp+38h] [rbp-70h]
  __m128i Src; // [rsp+48h] [rbp-60h]
  __int128 v17; // [rsp+68h] [rbp-40h] BYREF

  v17 = 0LL;
  if ( dword_140EFE810 != 2 || PsIsCurrentThreadInServerSilo() )
    return 3221225474LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return ExSetFirmwareEnvironmentVariable((__int64)a1, (int)a2, a3, a4, a5);
  if ( ((unsigned __int8)a1 & 3) != 0 )
    goto LABEL_24;
  Src = *a1;
  if ( !(unsigned __int16)_mm_cvtsi128_si32(*a1) )
    return 3221225477LL;
  if ( (Src.m128i_i8[8] & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( ((unsigned __int8)a2 & 3) != 0 )
LABEL_24:
    ExRaiseDatatypeMisalignment();
  v15 = a3 != 0 ? a4 : 0;
  v13 = SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, 1);
  if ( v13 )
    goto LABEL_16;
  if ( (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
    v13 = ExpFirmwareAccessAppContainerCheck(2LL);
  if ( !v13 )
    return 3221225569LL;
LABEL_16:
  v17 = *a2;
  Pool2 = (_WORD *)ExAllocatePool2(0x40uLL);
  v10 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, (const void *)Src.m128i_i64[1], Src.m128i_u16[0]);
  v10[(unsigned __int64)Src.m128i_u16[0] >> 1] = 0;
  v11 = v17 - ExpSecureBootVendorGuid;
  if ( (_QWORD)v17 == ExpSecureBootVendorGuid )
    v11 = *((_QWORD *)&v17 + 1) - 0x4B788FE7F42860BDLL;
  if ( v11 || wcsnicmp(v10, L"Kernel_", 7uLL) )
  {
    v12 = ExpSetFirmwareEnvironmentVariable((int)v10, (int)&v17, a3, v15, a5, 1);
    ExFreePoolWithTag(v10, 0);
    return v12;
  }
  else
  {
    ExFreePoolWithTag(v10, 0);
    return 3221225506LL;
  }
}

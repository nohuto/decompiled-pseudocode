/*
 * XREFs of RtlHpInitializeHeapManager @ 0x18009AFC8
 * Callers:
 *     RtlInitializeHeapManager @ 0x180114300 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlHpHeapManagerInitialize @ 0x18009B0B0 (RtlHpHeapManagerInitialize.c)
 *     RtlHpHeapManagerStart @ 0x18009B698 (RtlHpHeapManagerStart.c)
 *     NtQuerySystemInformation @ 0x180160710 (NtQuerySystemInformation.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS RtlHpInitializeHeapManager()
{
  __int64 v0; // rcx
  NTSTATUS result; // eax
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // [rsp+30h] [rbp-68h] BYREF
  _BYTE SystemInformation[40]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v8; // [rsp+68h] [rbp-30h]

  memset_thunk_772440563353939046(SystemInformation, 0, 0x40uLL);
  v6 = 0x4000LL;
  RtlHpHeapManagerInitialize(v0, &v6);
  memset_thunk_772440563353939046(&xmmword_1801CCF48, 0, 0x58uLL);
  RtlpHpEnvFlsContext.0 = 0LL;
  qword_1801CCF90 = (__int64)&qword_1801CCF88;
  qword_1801CCF88 = (__int64)&qword_1801CCF88;
  xmmword_1801CCF48 = 0LL;
  xmmword_1801CCF58 = 0LL;
  xmmword_1801CCF68 = 0LL;
  xmmword_1801CCF78 = 0LL;
  RtlpHpEnvHandle = 0LL;
  result = NtQuerySystemInformation(SystemEmulationBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
    return RtlHpHeapManagerStart(v3, v2, v4, v5, v8 + 1);
  return result;
}

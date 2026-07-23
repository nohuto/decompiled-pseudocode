/*
 * XREFs of RtlHpInitializeHeapManager @ 0x1800B97BC
 * Callers:
 *     RtlInitializeHeapManager @ 0x18011BFFC (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlHpHeapManagerInitialize @ 0x1800B98A4 (RtlHpHeapManagerInitialize.c)
 *     RtlHpHeapManagerStart @ 0x1800B9E8C (RtlHpHeapManagerStart.c)
 *     NtQuerySystemInformation @ 0x1801638E0 (NtQuerySystemInformation.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
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
  memset_thunk_772440563353939046(&xmmword_1801CFF48, 0, 0x58uLL);
  RtlpHpEnvFlsContext.0 = 0LL;
  qword_1801CFF90 = (__int64)&qword_1801CFF88;
  qword_1801CFF88 = (__int64)&qword_1801CFF88;
  xmmword_1801CFF48 = 0LL;
  xmmword_1801CFF58 = 0LL;
  xmmword_1801CFF68 = 0LL;
  xmmword_1801CFF78 = 0LL;
  RtlpHpEnvHandle = 0LL;
  result = NtQuerySystemInformation(SystemEmulationBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
    return RtlHpHeapManagerStart(v3, v2, v4, v5, v8 + 1);
  return result;
}

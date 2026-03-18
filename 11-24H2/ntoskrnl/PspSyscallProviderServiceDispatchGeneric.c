/*
 * XREFs of PspSyscallProviderServiceDispatchGeneric @ 0x1407716B4
 * Callers:
 *     PsSyscallProviderDispatch @ 0x140A9D400 (PsSyscallProviderDispatch.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PspCaptureSystemServiceInMemoryArgs @ 0x1407711A0 (PspCaptureSystemServiceInMemoryArgs.c)
 */

__int64 __fastcall PspSyscallProviderServiceDispatchGeneric(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned int a4,
        _QWORD *a5)
{
  unsigned __int64 v5; // rbx
  int v6; // eax
  int v8; // ecx
  __int128 *v9; // rdx
  _QWORD v10[4]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v11[128]; // [rsp+50h] [rbp-A8h] BYREF

  v10[0] = a1[7];
  v10[1] = a1[8];
  v10[2] = a1[9];
  v10[3] = a1[10];
  v5 = a4;
  if ( a3 && (v6 = PspCaptureSystemServiceInMemoryArgs((void *)(a1[48] + 40LL), v11, a3), v6 < 0) )
  {
    *a5 = (unsigned int)v6;
    return 0LL;
  }
  else
  {
    v8 = *((_DWORD *)&KeGetCurrentThread()->0 + 1) & 0x200000;
    if ( (v5 & 0x7000) != 0x1000 || (v9 = KeServiceDescriptorTableFilter, !v8) )
      v9 = &KeServiceDescriptorTableShadow;
    return guard_dispatch_icall_no_overrides(
             *(_QWORD *)&v9[2 * ((v5 >> 12) & 7)]
           + ((__int64)*(int *)(*(_QWORD *)&v9[2 * ((v5 >> 12) & 7)] + 4 * (v5 & 0xFFF)) >> 4),
             (unsigned int)v5,
             v10,
             a5);
  }
}

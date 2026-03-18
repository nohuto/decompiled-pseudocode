/*
 * XREFs of PspSyscallProviderServiceDispatch @ 0x1406A8440
 * Callers:
 *     PsSyscallProviderDispatch @ 0x140A978D0 (PsSyscallProviderDispatch.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PspCaptureSystemServiceInMemoryArgs @ 0x1407617E0 (PspCaptureSystemServiceInMemoryArgs.c)
 */

__int64 __fastcall PspSyscallProviderServiceDispatch(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  _BYTE v5[136]; // [rsp+20h] [rbp-88h] BYREF

  if ( (a3 & 0xF) == 0 )
    return guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 56));
  result = PspCaptureSystemServiceInMemoryArgs((void *)(*(_QWORD *)(a1 + 384) + 40LL), v5);
  if ( (int)result >= 0 )
    return guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 56));
  return result;
}

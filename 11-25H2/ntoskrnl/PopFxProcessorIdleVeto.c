/*
 * XREFs of PopFxProcessorIdleVeto @ 0x1405CD020
 * Callers:
 *     <none>
 * Callees:
 *     PopFxDereferenceDevice @ 0x1403589F8 (PopFxDereferenceDevice.c)
 *     PopFxTryReferenceDevice @ 0x1403596E8 (PopFxTryReferenceDevice.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopFxProcessorIdleVeto(__int64 a1)
{
  int v2; // ebx

  v2 = -1073741822;
  if ( *(_QWORD *)(a1 + 152) )
  {
    v2 = PopFxTryReferenceDevice(a1, 1);
    if ( v2 >= 0 )
    {
      v2 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 192));
      PopFxDereferenceDevice(a1, 1);
    }
  }
  return (unsigned int)v2;
}

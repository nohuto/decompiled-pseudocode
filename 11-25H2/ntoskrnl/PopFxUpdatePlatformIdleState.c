/*
 * XREFs of PopFxUpdatePlatformIdleState @ 0x1405CD8B0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxDereferenceDevice @ 0x1403589F8 (PopFxDereferenceDevice.c)
 *     PopFxTryReferenceDevice @ 0x1403596E8 (PopFxTryReferenceDevice.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopFxUpdatePlatformIdleState(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v4; // ebx

  if ( *a3 )
  {
    v4 = -1073741822;
    if ( *(_QWORD *)(a1 + 152) )
    {
      v4 = PopFxTryReferenceDevice(a1, 1);
      if ( v4 >= 0 )
      {
        v4 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 192));
        PopFxDereferenceDevice(a1, 1);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v4;
}

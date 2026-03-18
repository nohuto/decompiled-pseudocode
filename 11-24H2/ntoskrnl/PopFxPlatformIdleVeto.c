/*
 * XREFs of PopFxPlatformIdleVeto @ 0x1404A1080
 * Callers:
 *     <none>
 * Callees:
 *     PopFxDereferenceDevice @ 0x140376880 (PopFxDereferenceDevice.c)
 *     PopFxTryReferenceDevice @ 0x140377BF0 (PopFxTryReferenceDevice.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopFxPlatformIdleVeto(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  int v8; // ebx
  __int64 v9; // rcx
  unsigned __int64 v11; // [rsp+48h] [rbp-40h] BYREF
  int v12; // [rsp+50h] [rbp-38h]

  v11 = 0LL;
  v8 = -1073741822;
  v12 = 0;
  if ( *(_QWORD *)(a1 + 152) )
  {
    v8 = PopFxTryReferenceDevice(a1, 1);
    if ( v8 >= 0 )
    {
      v9 = *(_QWORD *)(a1 + 192);
      v11 = __PAIR64__(a3, a2);
      LOBYTE(v12) = a4;
      v8 = guard_dispatch_icall_no_overrides(v9, &GUID_PLATFORM_IDLE_VETO, &v11, 12LL);
      PopFxDereferenceDevice(a1, 1);
    }
  }
  return (unsigned int)v8;
}

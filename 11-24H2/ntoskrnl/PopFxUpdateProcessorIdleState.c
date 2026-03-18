/*
 * XREFs of PopFxUpdateProcessorIdleState @ 0x1405D2210
 * Callers:
 *     <none>
 * Callees:
 *     PopFxDereferenceDevice @ 0x140376880 (PopFxDereferenceDevice.c)
 *     PopFxTryReferenceDevice @ 0x140377BF0 (PopFxTryReferenceDevice.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopFxUpdateProcessorIdleState(__int64 a1, int a2, _DWORD *a3)
{
  int v6; // ebx
  __int64 v7; // rcx
  _DWORD v9[4]; // [rsp+48h] [rbp-30h] BYREF

  if ( *a3 )
  {
    v6 = -1073741822;
    if ( *(_QWORD *)(a1 + 152) )
    {
      v6 = PopFxTryReferenceDevice(a1, 1);
      if ( v6 >= 0 )
      {
        v7 = *(_QWORD *)(a1 + 192);
        v9[1] = a3[1];
        v9[2] = a3[2];
        v9[0] = a2;
        v6 = guard_dispatch_icall_no_overrides(v7, &GUID_PROCESSOR_IDLE_UPDATE, v9, 12LL);
        PopFxDereferenceDevice(a1, 1);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v6;
}

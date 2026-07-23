/*
 * XREFs of _CmDeleteDeviceContainer @ 0x140819D14
 * Callers:
 *     _CmRemoveDeviceFromContainerWorker @ 0x14081AEA0 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmAddDeviceToContainerWorker @ 0x140A4C720 (_CmAddDeviceToContainerWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _CmDeleteDeviceContainerWorker @ 0x14081A19C (_CmDeleteDeviceContainerWorker.c)
 */

__int64 __fastcall CmDeleteDeviceContainer(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  _DWORD v12[24]; // [rsp+40h] [rbp-88h] BYREF

  memset_0(v12, 0, 0x58uLL);
  v4 = *(_QWORD *)(a1 + 504);
  if ( v4 )
  {
    v5 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v5 == -1073741822 )
    {
      v4 = 0LL;
    }
    else
    {
      if ( v5 == -1073741536 )
        return v12[0];
      if ( v5 )
        return (unsigned int)-1073741595;
    }
  }
  v6 = CmDeleteDeviceContainerWorker(a1, a2, v12[4]);
  v7 = v6;
  if ( !v4 )
    return v7;
  v12[0] = v6;
  v8 = guard_dispatch_icall_no_overrides(a1, a2);
  v9 = v8;
  if ( v8 == -1073741822 )
    return v7;
  if ( v8 == -1073741536 )
    return v12[0];
  v10 = v7;
  if ( v9 )
    return (unsigned int)-1073741595;
  return v10;
}

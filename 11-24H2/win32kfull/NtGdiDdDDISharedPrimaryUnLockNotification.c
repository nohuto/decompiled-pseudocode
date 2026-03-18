/*
 * XREFs of NtGdiDdDDISharedPrimaryUnLockNotification @ 0x140325930
 * Callers:
 *     <none>
 * Callees:
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1403249A0 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiDdDDISharedPrimaryUnLockNotification(const void *a1)
{
  struct _LUID v3; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v4; // [rsp+28h] [rbp-20h]

  v3 = 0LL;
  v4 = 0;
  if ( (unsigned int)DxDdIsTearDownLddmSpriteDisabled() )
    return 0LL;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v3, a1, 0xCuLL);
  return DxLddmSharedPrimaryUnLockNotification(v3, v4);
}

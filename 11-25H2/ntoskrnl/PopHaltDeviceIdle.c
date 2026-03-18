/*
 * XREFs of PopHaltDeviceIdle @ 0x1404D69DC
 * Callers:
 *     PoInitializeBroadcast @ 0x140A3C114 (PoInitializeBroadcast.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

void PopHaltDeviceIdle()
{
  __int128 *v0; // rbx
  KIRQL v1; // al
  __int128 v2; // [rsp+30h] [rbp-20h] BYREF
  char *v3; // [rsp+40h] [rbp-10h]

  v0 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  byte_140E6717C = 1;
  if ( dword_140E67178 )
  {
    DWORD1(v2) = 0;
    v3 = (char *)&v2 + 8;
    LOWORD(v2) = 1;
    *((_QWORD *)&v2 + 1) = (char *)&v2 + 8;
    v0 = &v2;
    BYTE2(v2) = 6;
    PopDeviceIdleSync = (PRKEVENT)&v2;
  }
  KeReleaseSpinLock(&PopDopeGlobalLock, v1);
  if ( v0 )
    KeWaitForSingleObject(v0, Executive, 0, 0, 0LL);
}

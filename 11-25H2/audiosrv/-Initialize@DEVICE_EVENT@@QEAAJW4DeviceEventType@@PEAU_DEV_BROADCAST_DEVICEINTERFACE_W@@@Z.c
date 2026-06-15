/*
 * XREFs of ?Initialize@DEVICE_EVENT@@QEAAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1801454D0
 * Callers:
 *     ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1800A1864 (-PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 */

__int64 __fastcall DEVICE_EVENT::Initialize(__int64 a1, int a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  void *v6; // rax
  void *v7; // rcx
  void *v8; // rcx

  v3 = 0;
  *(_DWORD *)(a1 + 8) = a2;
  if ( a3 )
  {
    v6 = operator new[](*a3, (const struct std::nothrow_t *)&std::nothrow);
    v7 = *(void **)(a1 + 16);
    *(_QWORD *)(a1 + 16) = v6;
    if ( v7 )
      operator delete(v7, (const struct std::nothrow_t *)0x20);
    v8 = *(void **)(a1 + 16);
    if ( v8 )
      memcpy_0(v8, a3, *a3);
    else
      return (unsigned int)-2147024882;
  }
  return v3;
}

/*
 * XREFs of ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1800A1864
 * Callers:
 *     ServiceDeviceEvent @ 0x180074C2C (ServiceDeviceEvent.c)
 *     ?OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1800A1800 (-OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C1A0 (--2@YAPEAX_K@Z.c)
 *     ?Initialize@DEVICE_EVENT@@QEAAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1801454D0 (-Initialize@DEVICE_EVENT@@QEAAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PostDeviceEvent(unsigned int a1, __int64 a2)
{
  _QWORD *v4; // rbx
  signed int v5; // edi
  signed int LastError; // eax

  v4 = operator new(0x18uLL);
  if ( !v4 )
    return (unsigned int)-2147024882;
  *v4 = &DEVICE_EVENT::`vftable';
  v4[2] = 0LL;
  *((_DWORD *)v4 + 2) = 0;
  v5 = DEVICE_EVENT::Initialize(v4, a1, a2);
  if ( v5 < 0 )
    goto LABEL_6;
  if ( !PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v4, 0LL) )
  {
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
LABEL_6:
    (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 8LL))(v4, 1LL);
  }
  return (unsigned int)v5;
}

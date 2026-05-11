/*
 * XREFs of PropertyDrmAudioStream_SetContentId @ 0x140032160
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001BB10 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 *     PropertySetCopyProtection @ 0x14003359C (PropertySetCopyProtection.c)
 */

__int64 __fastcall PropertyDrmAudioStream_SetContentId(PIRP Irp, __int64 a2, unsigned int *a3)
{
  int v6; // ebx
  PKSPIN PinFromIrp; // rax
  struct _KSPIN *v8; // rdi
  PKSDEVICE Device; // rax
  _QWORD *Context; // rsi
  PKSDEVICE v11; // r12
  unsigned int v12; // ebp

  v6 = -1073741811;
  PinFromIrp = KsGetPinFromIrp(Irp);
  v8 = PinFromIrp;
  if ( PinFromIrp )
  {
    Device = KsGetDevice(PinFromIrp);
    Context = v8->Context;
    v11 = Device;
    KsPinAcquireProcessingMutex(v8);
    v12 = *a3;
    v6 = PropertySetCopyProtection(Irp);
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, PDEVICE_OBJECT, _QWORD))(a2 + 56))(
             v12,
             v11->NextDeviceObject,
             Context[20]);
      if ( v6 >= 0 )
        *((_DWORD *)Context + 10) = v12;
    }
    KsPinReleaseProcessingMutex(v8);
  }
  return (unsigned int)v6;
}

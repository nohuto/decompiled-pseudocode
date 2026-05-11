/*
 * XREFs of ?IoQueueThread@CSidebandDevice@@AEAAXXZ @ 0x140006868
 * Callers:
 *     ?staticIoQueueThread@CSidebandDevice@@SAXPEAX@Z @ 0x140014C70 (-staticIoQueueThread@CSidebandDevice@@SAXPEAX@Z.c)
 * Callees:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400092C8 (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B328 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?EmptyAndCancelIrpsInQueue@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x14001014C (-EmptyAndCancelIrpsInQueue@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall CSidebandDevice::IoQueueThread(struct _LIST_ENTRY *this)
{
  char v2; // bl
  char v3; // dl
  char v4; // r8
  char v5; // dl
  char v6; // r8
  struct _IRP *v7; // rax
  NTSTATUS v8; // eax
  char v9; // dl
  char v10; // dl
  char v11; // dl
  char v12; // dl
  char v13; // dl
  char v14; // dl
  char v15; // dl
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  Object[0] = &this[12].Blink;
  Object[1] = &this[11];
  v2 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (v3 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v3 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v4 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v4 = 0;
  }
  if ( v3 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v3, v4, WPP_GLOBAL_Control->DeviceExtension);
  while ( 1 )
  {
    v8 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    if ( v8 )
      break;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (v5 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v5 = 0;
    }
    if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v6 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v6 = 0;
    }
    if ( v5 || v6 )
      WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v5, v6, WPP_GLOBAL_Control->DeviceExtension);
    v7 = IoCsqRemoveNextIrp((PIO_CSQ)&this[2].Blink[10], &this[4]);
    if ( v7 )
      CSidebandDevice::SidebandApi((CSidebandDevice *)this, v7);
  }
  if ( v8 == 1 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v9 = 0;
    }
    if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        WPP_GLOBAL_Control->DeviceExtension);
    CSidebandDevice::EmptyAndCancelIrpsInQueue((CSidebandDevice *)this, this + 4);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v10 = 0;
    }
    if ( v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        WPP_GLOBAL_Control->DeviceExtension);
    CSidebandDevice::EmptyAndCancelIrpsInQueue((CSidebandDevice *)this, this + 5);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v11 = 0;
    }
    if ( v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        WPP_GLOBAL_Control->DeviceExtension);
    CSidebandDevice::EmptyAndCancelIrpsInQueue((CSidebandDevice *)this, this + 6);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (v12 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v12 = 0;
    }
    if ( v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        WPP_GLOBAL_Control->DeviceExtension);
    CSidebandDevice::EmptyAndCancelIrpsInQueue((CSidebandDevice *)this, this + 7);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (v13 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v13 = 0;
    }
    if ( v13 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        WPP_GLOBAL_Control->DeviceExtension);
    CSidebandDevice::EmptyAndCancelIrpsInQueue((CSidebandDevice *)this, this + 8);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (v14 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v14 = 0;
    }
    if ( v14 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
        WPP_GLOBAL_Control->DeviceExtension);
    CSidebandDevice::EmptyAndCancelIrpsInQueue((CSidebandDevice *)this, this + 9);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (v15 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v15 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v2 = 0;
  if ( v15 || v2 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v15, v2, WPP_GLOBAL_Control->DeviceExtension);
  PsTerminateSystemThread(0);
}

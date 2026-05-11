/*
 * XREFs of InitializeSideband @ 0x14000E32C
 * Callers:
 *     DeviceStart @ 0x14002E730 (DeviceStart.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005BFC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B318 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??2@YAPEAX_KW4_POOL_TYPE@@K@Z @ 0x14000E2BC (--2@YAPEAX_KW4_POOL_TYPE@@K@Z.c)
 *     ??0CSidebandDevice@@QEAA@PEAU_KSDEVICE@@PEAUIUnknown@@@Z @ 0x14000E85C (--0CSidebandDevice@@QEAA@PEAU_KSDEVICE@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 */

__int64 __fastcall InitializeSideband(struct _KSDEVICE *a1)
{
  char *Context; // rbp
  char v3; // si
  char v4; // dl
  char v5; // r8
  int v6; // edx
  NTSTATUS v7; // edi
  int v8; // r8d
  enum _POOL_TYPE v9; // edx
  CSidebandDevice *v10; // rax
  int v11; // edx
  struct IUnknown *v12; // r8
  CSidebandDevice *v13; // rax
  CSidebandDevice *v14; // rbx
  CSidebandDevice *v15; // r14

  Context = (char *)a1->Context;
  v3 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || (v4 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v4 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v5 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v5 = 0;
  }
  if ( v4 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v4, v5, WPP_GLOBAL_Control->DeviceExtension);
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(Context + 728), 0LL, File, 1u, 0x20u);
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( (_BYTE)v6 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v6, v8, WPP_GLOBAL_Control->DeviceExtension);
    }
    goto LABEL_37;
  }
  KeWaitForSingleObject(Context + 760, Executive, 0, 0, 0LL);
  v10 = (CSidebandDevice *)operator new(0x108uLL, v9, 0x32627845u);
  if ( !v10 )
  {
    v15 = 0LL;
LABEL_27:
    v7 = -1073741670;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( (_BYTE)v11 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        (_DWORD)v12,
        WPP_GLOBAL_Control->DeviceExtension);
    }
    goto LABEL_24;
  }
  v13 = CSidebandDevice::CSidebandDevice(v10, a1, v12);
  v14 = v13;
  v15 = v13;
  if ( !v13 )
    goto LABEL_27;
  (*(void (__fastcall **)(CSidebandDevice *))(*(_QWORD *)v13 + 8LL))(v13);
  v7 = (*(__int64 (__fastcall **)(CSidebandDevice *))(*(_QWORD *)v14 + 24LL))(v14);
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(CSidebandDevice *))(*(_QWORD *)v14 + 48LL))(v14);
    if ( v7 < 0 )
      (*(void (__fastcall **)(CSidebandDevice *))(*(_QWORD *)v14 + 40LL))(v14);
  }
LABEL_24:
  KeReleaseMutex((PRKMUTEX)(Context + 760), 0);
  if ( v7 < 0 )
  {
    if ( v15 )
      (*(void (__fastcall **)(CSidebandDevice *))(*(_QWORD *)v15 + 16LL))(v15);
    IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)(Context + 728), 0LL, 0x20u);
  }
  else
  {
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(Context + 728), 0LL, 0x20u);
  }
LABEL_37:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 8u)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v3 = 0;
  }
  if ( v3 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = v3;
    LOBYTE(v8) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v6, v8, WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)v7;
}

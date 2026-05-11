/*
 * XREFs of ?AddFileToOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z @ 0x14000F3A4
 * Callers:
 *     ?IrpMJCreateHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1400127E0 (-IrpMJCreateHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005F60 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B328 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??2@YAPEAX_KW4_POOL_TYPE@@K@Z @ 0x14000EBCC (--2@YAPEAX_KW4_POOL_TYPE@@K@Z.c)
 */

__int64 __fastcall CSidebandDevice::AddFileToOpenHandles(CSidebandDevice *this, struct _FILE_OBJECT *a2)
{
  unsigned int v3; // ebx
  char *v5; // rax
  int v6; // edx
  int v7; // r8d
  int v8; // edx
  int v9; // r8d

  v3 = 0;
  v5 = (char *)operator new(0x18uLL, (enum _POOL_TYPE)a2, 0x33627845u);
  if ( v5 )
  {
    *((_QWORD *)v5 + 2) = v5 + 8;
    *((_QWORD *)v5 + 1) = v5 + 8;
    *(_QWORD *)v5 = a2;
    ExInterlockedInsertTailList(
      (PLIST_ENTRY)(*((_QWORD *)this + 5) + 224LL),
      (PLIST_ENTRY)(v5 + 8),
      (PKSPIN_LOCK)(*((_QWORD *)this + 5) + 240LL));
    LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v8, v9, WPP_GLOBAL_Control->DeviceExtension);
    }
  }
  else
  {
    v3 = -1073741670;
    LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v6 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v6, v7, WPP_GLOBAL_Control->DeviceExtension);
    }
  }
  return v3;
}

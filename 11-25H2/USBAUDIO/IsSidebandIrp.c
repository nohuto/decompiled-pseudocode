/*
 * XREFs of IsSidebandIrp @ 0x140003100
 * Callers:
 *     UsbAudioIrpDispatcher @ 0x14003A810 (UsbAudioIrpDispatcher.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B328 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall IsSidebandIrp(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  unsigned __int8 *v2; // rbx
  unsigned int v3; // edi
  PKSDEVICE DeviceForDeviceObject; // rax
  int v5; // edx
  int v6; // r8d
  char *Context; // rsi
  __int64 v9; // rbp
  KSPIN_LOCK *v10; // rbx
  KIRQL v11; // al
  _QWORD **v12; // rsi
  _QWORD *i; // rcx

  v2 = *(unsigned __int8 **)(a2 + 184);
  v3 = 0;
  DeviceForDeviceObject = KsGetDeviceForDeviceObject(a1);
  if ( !DeviceForDeviceObject )
  {
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v5 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v5, v6, WPP_GLOBAL_Control->DeviceExtension);
    }
    return v3;
  }
  Context = (char *)DeviceForDeviceObject->Context;
  if ( !*v2 )
  {
    LOBYTE(v3) = RtlCompareUnicodeString((PCUNICODE_STRING)(*((_QWORD *)v2 + 6) + 88LL), &String2, 1u) == 0;
    return v3;
  }
  if ( *v2 != 2 && (unsigned int)*v2 - 14 >= 2 )
    return v3;
  v9 = *((_QWORD *)v2 + 6);
  v10 = (KSPIN_LOCK *)(Context + 960);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 120);
  v12 = (_QWORD **)(Context + 944);
  for ( i = *v12; i != v12; i = (_QWORD *)*i )
  {
    if ( *(i - 1) == v9 )
    {
      v3 = 1;
      break;
    }
  }
  KeReleaseSpinLock(v10, v11);
  return v3;
}

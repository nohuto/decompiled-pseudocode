/*
 * XREFs of ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x140006FA0
 * Callers:
 *     ?StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140006AA8 (-StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140007FD8 (-GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140017588 (-SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140017F7C (-StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400182C4 (-StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005BFC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B318 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall CSidebandDevice::GetPinFromPinsInUseList(CSidebandDevice *this, int a2, struct _KSPIN **a3)
{
  struct _KSPIN **v3; // r14
  int v4; // r15d
  unsigned int v6; // esi
  char v7; // di
  __int64 v8; // rax
  __int64 v9; // rbx
  KSPIN_LOCK *v10; // rbp
  KIRQL v11; // al
  _QWORD *v12; // rbx
  KIRQL v13; // dl
  _QWORD *i; // rax
  struct _KSPIN *v15; // rcx
  int v16; // edx
  void *v17; // r8

  v3 = a3;
  v4 = a2;
  v6 = -1073741811;
  v7 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, a2, (_DWORD)a3, WPP_GLOBAL_Control->DeviceExtension);
  v8 = *((_QWORD *)this + 4);
  *v3 = 0LL;
  v9 = *(_QWORD *)(v8 + 16);
  v10 = (KSPIN_LOCK *)(v9 + 96);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 96));
  v12 = (_QWORD *)(v9 + 104);
  v13 = v11;
  for ( i = (_QWORD *)*v12; i != v12; i = (_QWORD *)*i )
  {
    v15 = (struct _KSPIN *)i[3];
    if ( v15->Id == v4 )
    {
      *v3 = v15;
      v6 = 0;
      break;
    }
  }
  KeReleaseSpinLock(v10, v13);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v16) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v7 = 0;
  if ( (_BYTE)v16 || v7 )
  {
    v17 = &WPP_309f1687d4053247ca5427ea11d9cc71_Traceguids;
    LOBYTE(v17) = v7;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v16,
      (_DWORD)v17,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  return v6;
}

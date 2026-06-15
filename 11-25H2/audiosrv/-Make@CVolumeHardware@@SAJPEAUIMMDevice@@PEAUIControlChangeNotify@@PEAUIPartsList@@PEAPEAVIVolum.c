/*
 * XREFs of ?Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolumeControlHandler@@@Z @ 0x18008DC14
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x1800202E8 (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800D0F00 (-MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CVolumeHardware@@AEAA@PEAUIControlChangeNotify@@@Z @ 0x18002E4A0 (--0CVolumeHardware@@AEAA@PEAUIControlChangeNotify@@@Z.c)
 *     ?Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180054718 (-Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVolumeHardware::Make(
        struct IMMDevice *a1,
        struct IControlChangeNotify *a2,
        struct IPartsList *a3,
        struct IVolumeControlHandler **a4)
{
  CVolumeHardware *v7; // rax
  CVolumeHardware *v8; // rax
  struct IPartsList *v9; // r8
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IVolumeControlHandler *v14; // [rsp+50h] [rbp+18h]

  *a4 = 0LL;
  v7 = (CVolumeHardware *)operator new(0x1B0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 && (v8 = CVolumeHardware::CVolumeHardware(v7, a2), (v14 = v8) != 0LL) )
  {
    v10 = CVolumeHardware::Initialize(v8, a1, v9);
    v11 = v10;
    if ( v10 >= 0 )
    {
      *a4 = v14;
      (*(void (__fastcall **)(struct IVolumeControlHandler *))(*(_QWORD *)v14 + 8LL))(v14);
      (*(void (__fastcall **)(struct IVolumeControlHandler *))(*(_QWORD *)v14 + 16LL))(v14);
      return 0LL;
    }
    if ( v10 == -2147023728 )
    {
      (*(void (__fastcall **)(struct IVolumeControlHandler *))(*(_QWORD *)v14 + 16LL))(v14);
      return 2147943568LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v10);
    (*(void (__fastcall **)(struct IVolumeControlHandler *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  else
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46D,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x8007000ELL);
  }
  return v11;
}

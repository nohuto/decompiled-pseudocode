/*
 * XREFs of ?Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolumeControlHandler@@@Z @ 0x180114928
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18005213C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     BluetoothControls::CreateRealControls @ 0x1800D3228 (BluetoothControls--CreateRealControls.c)
 *     ?MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D581C (-MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CVolumeHardware@@AEAA@PEAUIControlChangeNotify@@@Z @ 0x1800748CC (--0CVolumeHardware@@AEAA@PEAUIControlChangeNotify@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEBGPEAUIPartsList@@@Z @ 0x1801138A8 (-Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEBGPEAUIPartsList@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVolumeHardware::Make(
        struct IMMDevice *a1,
        const unsigned __int16 *a2,
        struct IControlChangeNotify *a3,
        struct IPartsList *a4,
        struct IVolumeControlHandler **a5)
{
  CVolumeHardware *v8; // rax
  struct IPartsList *v9; // r9
  unsigned int v10; // ebx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IVolumeControlHandler *v14; // [rsp+58h] [rbp+20h]

  *a5 = 0LL;
  v8 = (CVolumeHardware *)operator new(0x1C0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
    v8 = CVolumeHardware::CVolumeHardware(v8, a3);
  v14 = v8;
  if ( !v8 )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A4,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x8007000ELL);
    return v10;
  }
  v12 = CVolumeHardware::Initialize(v8, a1, a2, v9);
  v10 = v12;
  if ( v12 >= 0 )
  {
    *a5 = v14;
    (*(void (__fastcall **)(struct IVolumeControlHandler *))(*(_QWORD *)v14 + 8LL))(v14);
    (*(void (__fastcall **)(struct IVolumeControlHandler *))(*(_QWORD *)v14 + 16LL))(v14);
    return 0LL;
  }
  else
  {
    if ( v12 != -2147023728 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A6,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
        (const char *)(unsigned int)v12);
      (*(void (__fastcall **)(struct IVolumeControlHandler *))(*(_QWORD *)v14 + 16LL))(v14);
      return v10;
    }
    (*(void (__fastcall **)(struct IVolumeControlHandler *))(*(_QWORD *)v14 + 16LL))(v14);
    return 2147943568LL;
  }
}

/*
 * XREFs of ?Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAPEAVIVolumeControlHandler@@@Z @ 0x180114A60
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18005213C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     BluetoothControls::CreateRealControls @ 0x1800D3228 (BluetoothControls--CreateRealControls.c)
 *     ?MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D581C (-MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CVolumeSoftware@@AEAA@PEAUIControlChangeNotify@@@Z @ 0x1801129D4 (--0CVolumeSoftware@@AEAA@PEAUIControlChangeNotify@@@Z.c)
 *     ?Initialize@CVolumeSoftware@@AEAAJPEAUIMMDevice@@PEBG@Z @ 0x180113B48 (-Initialize@CVolumeSoftware@@AEAAJPEAUIMMDevice@@PEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVolumeSoftware::Make(
        struct IMMDevice *a1,
        const unsigned __int16 *a2,
        struct IControlChangeNotify *a3,
        struct IVolumeControlHandler **a4)
{
  CVolumeSoftware *v8; // rax
  unsigned int v9; // ebx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IVolumeControlHandler *v13; // [rsp+58h] [rbp+20h]

  *a4 = 0LL;
  v8 = (CVolumeSoftware *)operator new(0x140uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
    v8 = CVolumeSoftware::CVolumeSoftware(v8, a3);
  v13 = v8;
  if ( !v8 )
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x71C,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x8007000ELL);
    return v9;
  }
  v11 = CVolumeSoftware::Initialize(v8, a1, a2);
  v9 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x71E,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v11);
    (*(void (__fastcall **)(struct IVolumeControlHandler *))(*(_QWORD *)v13 + 16LL))(v13);
    return v9;
  }
  *a4 = v13;
  (*(void (__fastcall **)(struct IVolumeControlHandler *))(*(_QWORD *)v13 + 8LL))(v13);
  (*(void (__fastcall **)(struct IVolumeControlHandler *))(*(_QWORD *)v13 + 16LL))(v13);
  return 0LL;
}

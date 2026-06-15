/*
 * XREFs of ?Make@CMuteHardware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteControlHandler@@@Z @ 0x1801025B4
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18005213C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     BluetoothControls::CreateRealControls @ 0x1800D3228 (BluetoothControls--CreateRealControls.c)
 *     ?MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D5760 (-MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEBG.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CMuteControlBase@@QEAA@PEAUIControlChangeNotify@@@Z @ 0x18006D9EC (--0CMuteControlBase@@QEAA@PEAUIControlChangeNotify@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEBGPEAUIPartsList@@@Z @ 0x180101EF8 (-Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEBGPEAUIPartsList@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CMuteHardware::Make(
        struct IMMDevice *a1,
        const unsigned __int16 *a2,
        struct IControlChangeNotify *a3,
        struct IPartsList *a4,
        struct IMuteControlHandler ***a5)
{
  CMuteControlBase *v10; // rax
  CMuteControlBase *v11; // rbx
  unsigned int v12; // ebx
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IMuteControlHandler **v16; // [rsp+70h] [rbp+28h]

  *a5 = 0LL;
  v10 = (CMuteControlBase *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( v10 )
  {
    CMuteControlBase::CMuteControlBase(v10, a3);
    *(_QWORD *)v11 = &CMuteHardware::`vftable';
    *((_QWORD *)v11 + 6) = 0LL;
    *((_QWORD *)v11 + 7) = 0LL;
    *((_DWORD *)v11 + 16) = 0;
    *(GUID *)((char *)v11 + 68) = GUID_00000000_0000_0000_0000_000000000000;
    *((_BYTE *)v11 + 84) = 0;
  }
  else
  {
    v11 = 0LL;
  }
  v16 = (struct IMuteControlHandler **)v11;
  if ( !v11 )
  {
    v12 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x116,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
      (const char *)0x8007000ELL);
    return v12;
  }
  v14 = CMuteHardware::Initialize(v11, a1, a2, a4);
  v12 = v14;
  if ( v14 >= 0 )
  {
    *a5 = v16;
    (*((void (__fastcall **)(struct IMuteControlHandler **))*v16 + 1))(v16);
    (*((void (__fastcall **)(struct IMuteControlHandler **))*v16 + 2))(v16);
    return 0LL;
  }
  else
  {
    if ( v14 != -2147023728 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x118,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
        (const char *)(unsigned int)v14);
      (*((void (__fastcall **)(struct IMuteControlHandler **))*v16 + 2))(v16);
      return v12;
    }
    (*((void (__fastcall **)(struct IMuteControlHandler **))*v16 + 2))(v16);
    return 2147943568LL;
  }
}

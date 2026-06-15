/*
 * XREFs of ?Make@CMuteSoftware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAPEAVIMuteControlHandler@@@Z @ 0x180102724
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18005213C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     BluetoothControls::CreateRealControls @ 0x1800D3228 (BluetoothControls--CreateRealControls.c)
 *     ?MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D5760 (-MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEBG.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CMuteControlBase@@QEAA@PEAUIControlChangeNotify@@@Z @ 0x18006D9EC (--0CMuteControlBase@@QEAA@PEAUIControlChangeNotify@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Initialize@CMuteSoftware@@QEAAJPEAUIMMDevice@@PEBG@Z @ 0x180102010 (-Initialize@CMuteSoftware@@QEAAJPEAUIMMDevice@@PEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CMuteSoftware::Make(
        struct IMMDevice *a1,
        const unsigned __int16 *a2,
        struct IControlChangeNotify *a3,
        struct IMuteControlHandler **a4)
{
  CMuteControlBase *v8; // rax
  CMuteControlBase *v9; // rbx
  unsigned int v10; // ebx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IMuteControlHandler *v14; // [rsp+68h] [rbp+20h]

  *a4 = 0LL;
  v8 = (CMuteControlBase *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    CMuteControlBase::CMuteControlBase(v8, a3);
    *(_QWORD *)v9 = &CMuteSoftware::`vftable';
    *((_QWORD *)v9 + 6) = 0LL;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)v9 + 56), 0, 0);
    *((_BYTE *)v9 + 96) = 0;
    *((_DWORD *)v9 + 25) = 0;
    *((_QWORD *)v9 + 13) = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  v14 = v9;
  if ( !v9 )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x322,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
      (const char *)0x8007000ELL);
    return v10;
  }
  v12 = CMuteSoftware::Initialize(v9, a1, a2);
  v10 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x324,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
      (const char *)(unsigned int)v12);
    (*(void (__fastcall **)(struct IMuteControlHandler *))(*(_QWORD *)v14 + 16LL))(v14);
    return v10;
  }
  *a4 = v14;
  (*(void (__fastcall **)(struct IMuteControlHandler *))(*(_QWORD *)v14 + 8LL))(v14);
  (*(void (__fastcall **)(struct IMuteControlHandler *))(*(_QWORD *)v14 + 16LL))(v14);
  return 0LL;
}

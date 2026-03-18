/*
 * XREFs of ?BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z @ 0x1C01F2B10
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1C0009460 (NtMITSynthesizeKeyboardInput.c)
 * Callees:
 *     ??0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z @ 0x1C01E95AC (--0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z.c)
 *     ?ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C01EE778 (-ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1C01FD078 (--1CIVSerializer@@UEAA@XZ.c)
 */

__int64 __fastcall IVRootDeliver::Keyboard::Detail::BroadcastAsyncKeyState(
        IVRootDeliver::Keyboard::Detail *this,
        const struct CONTAINER_ID *a2,
        int a3)
{
  __int16 v3; // di
  _WORD *v6; // rax
  unsigned int v7; // ebx
  _QWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  _WORD *v10; // [rsp+30h] [rbp-28h]

  v3 = (__int16)a2;
  CIVGenericSerializer::CIVGenericSerializer(v9);
  v6 = v10;
  if ( v10 )
  {
    *v10 = v3;
    *((_DWORD *)v6 + 1) = a3;
    v7 = ivrIVBroadcast((const struct CIVSerializer *)v9, 1u, this);
  }
  else
  {
    v7 = -1073741801;
  }
  v9[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v9);
  return v7;
}

/*
 * XREFs of ?SyncMagnifierRenderTargetCaptureBits@CChannel@@UEAAJIII_KU?$TMILFlagsEnum@W4FlagsEnum@MilRenderPassFlags@@@@AEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x180206420
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SyncFlushInternal@CChannel@@AEAAJXZ @ 0x18012E1F0 (-SyncFlushInternal@CChannel@@AEAAJXZ.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18012F57C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18012FF80 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::SyncMagnifierRenderTargetCaptureBits(
        CChannel *this,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        int a6,
        __int128 *a7)
{
  __int64 v7; // r14
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  _DWORD v18[2]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v19; // [rsp+50h] [rbp-19h]
  __int64 v20; // [rsp+58h] [rbp-11h]
  int v21; // [rsp+60h] [rbp-9h]
  _BYTE v22[36]; // [rsp+64h] [rbp-5h] BYREF
  __int64 v23; // [rsp+88h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+47h]

  v7 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
  CChannel::CheckHandle((__int64)this, a2, 104);
  v18[0] = 233;
  v20 = a5;
  memset(&v22[16], 0, 20);
  v21 = a6;
  *(_OWORD *)v22 = 0LL;
  v18[1] = a2;
  v19 = a3;
  v12 = *a7;
  HIDWORD(v19) = a4;
  v13 = a7[1];
  *(_OWORD *)&v22[4] = v12;
  v23 = *((_QWORD *)a7 + 4);
  *((_OWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *(_OWORD *)&v22[20] = v13;
  v14 = CChannel::SendCommand((struct CCommandBatch **)this, v18, 0x48u);
  v15 = v14;
  if ( v14 < 0 )
  {
    v16 = 208LL;
    goto LABEL_4;
  }
  v14 = CChannel::SyncFlushInternal(this);
  v15 = v14;
  if ( v14 < 0 )
  {
    v16 = 211LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v14);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x58D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)v15);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 80LL))(v7);
    return v15;
  }
  v15 = *((_DWORD *)this + 38);
  if ( (v15 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x58F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)v15);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 80LL))(v7);
    return v15;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 80LL))(v7);
  return 0LL;
}

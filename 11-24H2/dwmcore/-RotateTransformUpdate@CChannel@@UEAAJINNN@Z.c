/*
 * XREFs of ?RotateTransformUpdate@CChannel@@UEAAJINNN@Z @ 0x180262B40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18012F57C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18012FF80 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x1801D2090 (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::RotateTransformUpdate(CChannel *this, unsigned int a2, double a3, double a4, double a5)
{
  float v7; // xmm0_4
  int v8; // ebx
  __int64 v9; // rdx
  float v11; // xmm0_4
  int v12; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v13; // [rsp+24h] [rbp-3Ch]
  float v14; // [rsp+28h] [rbp-38h]
  _BYTE v15[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v15, this);
  CChannel::CheckHandle((__int64)this, a2, 136);
  v12 = 566;
  v13 = a2;
  v7 = a3;
  v14 = v7;
  v8 = CChannel::SendCommand((struct CCommandBatch **)this, &v12, 0xCu);
  if ( v8 < 0 )
  {
    v9 = 2069LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 80LL))(v16);
    return (unsigned int)v8;
  }
  v12 = 567;
  v13 = a2;
  v11 = a4;
  v14 = v11;
  v8 = CChannel::SendCommand((struct CCommandBatch **)this, &v12, 0xCu);
  if ( v8 < 0 )
  {
    v9 = 2076LL;
    goto LABEL_3;
  }
  v12 = 568;
  v13 = a2;
  v14 = a5;
  v8 = CChannel::SendCommand((struct CCommandBatch **)this, &v12, 0xCu);
  if ( v8 < 0 )
  {
    v9 = 2083LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 80LL))(v16);
  return 0LL;
}

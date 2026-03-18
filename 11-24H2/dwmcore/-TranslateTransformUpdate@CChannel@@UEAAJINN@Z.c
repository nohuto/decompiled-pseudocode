/*
 * XREFs of ?TranslateTransformUpdate@CChannel@@UEAAJINN@Z @ 0x180262F50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18012F57C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18012FF80 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x1801D2090 (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::TranslateTransformUpdate(CChannel *this, unsigned int a2, double a3, double a4)
{
  float v6; // xmm0_4
  int v7; // ebx
  __int64 v8; // rdx
  float v10; // xmm0_4
  int v11; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v12; // [rsp+24h] [rbp-3Ch]
  float v13; // [rsp+28h] [rbp-38h]
  _BYTE v14[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+38h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v14, this);
  CChannel::CheckHandle((__int64)this, a2, 178);
  v11 = 653;
  v12 = a2;
  v6 = a3;
  v13 = v6;
  v7 = CChannel::SendCommand((struct CCommandBatch **)this, &v11, 0xCu);
  if ( v7 < 0 )
  {
    v8 = 2002LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v7);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 80LL))(v15);
    return (unsigned int)v7;
  }
  v11 = 654;
  v12 = a2;
  v10 = a4;
  v13 = v10;
  v7 = CChannel::SendCommand((struct CCommandBatch **)this, &v11, 0xCu);
  if ( v7 < 0 )
  {
    v8 = 2009LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 80LL))(v15);
  return 0LL;
}

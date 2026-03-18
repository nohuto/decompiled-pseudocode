/*
 * XREFs of ?SolidColorLegacyMilBrushUpdate@CChannel@@UEAAJINAEBU_D3DCOLORVALUE@@@Z @ 0x180204B20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18012F57C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18012FF80 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::SolidColorLegacyMilBrushUpdate(
        CChannel *this,
        unsigned int a2,
        double a3,
        const struct _D3DCOLORVALUE *a4)
{
  __int64 v4; // rbx
  float v8; // xmm0_4
  int v9; // eax
  unsigned int v10; // edi
  __int128 v11; // xmm0
  int v12; // eax
  int v14; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v15[20]; // [rsp+24h] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
  CChannel::CheckHandle((__int64)this, a2, 164);
  v14 = 551;
  *(_DWORD *)v15 = a2;
  v8 = a3;
  *(float *)&v15[4] = v8;
  v9 = CChannel::SendCommand((struct CCommandBatch **)this, &v14, 0xCu);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x883,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v9);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(v4);
  }
  else
  {
    v14 = 626;
    *(_OWORD *)v15 = 0LL;
    v11 = *(_OWORD *)&a4->r;
    *(_DWORD *)v15 = a2;
    *(_OWORD *)&v15[4] = v11;
    v12 = CChannel::SendCommand((struct CCommandBatch **)this, &v14, 0x18u);
    v10 = v12;
    if ( v12 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(v4);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x88A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v12);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(v4);
  }
  return v10;
}

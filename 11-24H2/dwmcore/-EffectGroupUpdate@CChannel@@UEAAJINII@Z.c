/*
 * XREFs of ?EffectGroupUpdate@CChannel@@UEAAJINII@Z @ 0x18012F1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18012F500 (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18012F57C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18012FF80 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::EffectGroupUpdate(CChannel *this, unsigned int a2, double a3, int a4, float a5)
{
  __int64 v5; // rbx
  float v9; // xmm0_4
  int v10; // eax
  int v11; // edi
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v15; // [rsp+24h] [rbp-1Ch]
  float v16; // [rsp+28h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  v5 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
  CChannel::CheckHandle(this, a2, 58LL);
  CChannel::CheckOptionalHandle(this, LODWORD(a5), 175LL);
  v14 = 517;
  v15 = a2;
  v9 = a3;
  v16 = v9;
  v10 = CChannel::SendCommand(this, &v14, 0xCu);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x697,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v10);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 80LL))(v5);
  }
  else
  {
    v14 = 518;
    v15 = a2;
    v16 = *(float *)&a4;
    v11 = CChannel::SendCommand(this, &v14, 0xCu);
    if ( v11 < 0 )
    {
      v13 = 1694LL;
    }
    else
    {
      v14 = 519;
      v15 = a2;
      v16 = a5;
      v11 = CChannel::SendCommand(this, &v14, 0xCu);
      if ( v11 >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 80LL))(v5);
        return 0LL;
      }
      v13 = 1701LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v11);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 80LL))(v5);
  }
  return (unsigned int)v11;
}

/*
 * XREFs of ?WindowNodeInitialize@CChannel@@UEAAJIPEAUHWND__@@PEAUHSPRITE__@@K_K@Z @ 0x1801822E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180182E5C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180183860 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::WindowNodeInitialize(
        CChannel *this,
        unsigned int a2,
        HSPRITE a3,
        HSPRITE a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  __int64 v6; // rdi
  int v11; // eax
  int v12; // ebx
  __int64 v14; // rdx
  unsigned __int32 v15; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v16; // [rsp+24h] [rbp-1Ch]
  HSPRITE v17; // [rsp+28h] [rbp-18h]
  unsigned __int64 v18; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  v6 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6);
  CChannel::CheckHandle(this, a2, 190LL);
  v15 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v16 = a2;
  v17 = a3;
  v11 = CChannel::SendCommand(this, &v15, 0x10u);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4BC,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v11);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 80LL))(v6);
  }
  else
  {
    v15 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
    v16 = a2;
    v17 = a4;
    v12 = CChannel::SendCommand(this, &v15, 0x10u);
    if ( v12 < 0 )
    {
      v14 = 1219LL;
    }
    else
    {
      v15 = 664;
      v17 = (HSPRITE)a5;
      v18 = a6;
      v16 = a2;
      v12 = CChannel::SendCommand(this, &v15, 0x18u);
      if ( v12 >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 80LL))(v6);
        return 0LL;
      }
      v14 = 1227LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v12);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 80LL))(v6);
  }
  return (unsigned int)v12;
}

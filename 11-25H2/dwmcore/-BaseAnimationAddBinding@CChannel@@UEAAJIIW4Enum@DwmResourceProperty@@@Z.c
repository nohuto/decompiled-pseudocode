/*
 * XREFs of ?BaseAnimationAddBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z @ 0x180224B40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180182E5C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180183860 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::BaseAnimationAddBinding(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rsi
  __int64 v6; // r14
  int v9; // eax
  unsigned int v10; // ebx
  __m128i si128; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *(_QWORD *)(a1 + 64);
  v6 = a4;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
  CChannel::CheckHandle(a1, a2, 10);
  CChannel::CheckHandle(a1, a3, 0);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  si128.m128i_i32[1] = a2;
  si128.m128i_i32[2] = a3;
  if ( (unsigned int)v6 >= 9 )
  {
    v10 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA7E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070057LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x631,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070057LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(v4);
  }
  else
  {
    si128.m128i_i32[3] = dword_18038D160[v6];
    v9 = CChannel::SendCommand((struct CCommandBatch **)a1, &si128, 0x10u);
    v10 = v9;
    if ( v9 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(v4);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x632,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v9);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(v4);
  }
  return v10;
}

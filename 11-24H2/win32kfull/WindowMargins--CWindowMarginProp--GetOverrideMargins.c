/*
 * XREFs of WindowMargins::CWindowMarginProp::GetOverrideMargins @ 0x1402BF4A8
 * Callers:
 *     WindowMargins::CWindowMarginProp::CalculateWindowMargins @ 0x14014C388 (WindowMargins--CWindowMarginProp--CalculateWindowMargins.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140092DD0 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     _lambda_eeef72b4b24c806838652c8dfe68f68f_::operator() @ 0x1402BF368 (_lambda_eeef72b4b24c806838652c8dfe68f68f_--operator().c)
 */

char __fastcall WindowMargins::CWindowMarginProp::GetOverrideMargins(
        __int64 a1,
        __int64 a2,
        INT a3,
        int a4,
        __int16 *a5)
{
  __int64 v7; // rcx
  __int16 *v9; // rdi
  __int64 v10; // rdx
  int v11; // r15d
  bool v12; // di
  bool v13; // bl
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  __int16 v17; // r11
  __int64 v18; // rax
  __m128i v19; // xmm1
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int16 v22; // r11

  v7 = *(_QWORD *)(a2 + 40);
  if ( (*(_BYTE *)(v7 + 234) & 2) == 0 || a4 == 1 && (*(_BYTE *)(v7 + 31) & 0x21) != 0 )
    return 0;
  *a5 = EngMulDiv(*(__int16 *)(a1 + 52), a3, *(_DWORD *)(a1 + 40));
  a5[1] = EngMulDiv(*(__int16 *)(a1 + 54), a3, *(_DWORD *)(a1 + 40));
  a5[2] = EngMulDiv(*(__int16 *)(a1 + 56), a3, *(_DWORD *)(a1 + 40));
  v9 = a5 + 3;
  a5[3] = EngMulDiv(*(__int16 *)(a1 + 58), a3, *(_DWORD *)(a1 + 40));
  v11 = *(_DWORD *)(a1 + 40);
  if ( a3 != v11 )
  {
    v12 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100000) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    v13 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
       && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
    if ( v12 || v13 )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v12;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v16,
        v15,
        *(_QWORD *)(UserSessionState + 69416),
        5,
        21,
        26,
        (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
        v11,
        a3);
    }
    v9 = a5 + 3;
  }
  v17 = EngMulDiv(1, a3, 96);
  v18 = *(_QWORD *)(a2 + 40);
  v19 = *(__m128i *)(v18 + 88);
  lambda_eeef72b4b24c806838652c8dfe68f68f_::operator()(
    v20,
    a5,
    a5 + 1,
    *(_DWORD *)(v18 + 96) - 2 * v17 - _mm_cvtsi128_si32(v19));
  v21 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v19, 4));
  lambda_eeef72b4b24c806838652c8dfe68f68f_::operator()(
    v21,
    a5 + 2,
    v9,
    _mm_cvtsi128_si32(_mm_srli_si128(v19, 12)) - v22 - v21);
  return 1;
}

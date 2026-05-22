/*
 * XREFs of ?ResetAndInitializeInteractionContext@DragGestureTracker@@QEAAJXZ @ 0x1801A0B10
 * Callers:
 *     ??$make_unique@VDragGestureTracker@@_N$0A@@std@@YA?AV?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@0@$$QEA_N@Z @ 0x18014A1D4 (--$make_unique@VDragGestureTracker@@_N$0A@@std@@YA-AV-$unique_ptr@VDragGestureTracker@@U-$defaul.c)
 *     ?OnPointerInfoFrame@DragGestureTracker@@QEAAJAEAUtagPOINTER_INFO@@@Z @ 0x1801A0AD0 (-OnPointerInfoFrame@DragGestureTracker@@QEAAJAEAUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

__int64 __fastcall DragGestureTracker::ResetAndInitializeInteractionContext(DragGestureTracker *this)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v9[4]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+34h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  ResetInteractionContext(*((_QWORD *)this + 2));
  v2 = *((_QWORD *)this + 2);
  *(__m128i *)v9 = _mm_load_si128((const __m128i *)&_xmm);
  v10 = 1;
  v11 = 7;
  v3 = SetPropertyInteractionContext(v2, 1LL, 1LL);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\pointermanipulationtracker\\draggesturetracker.cpp",
      (const char *)(unsigned int)v3,
      v9[0]);
  v4 = SetPropertyInteractionContext(*((_QWORD *)this + 2), 3LL, 0LL);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\pointermanipulationtracker\\draggesturetracker.cpp",
      (const char *)(unsigned int)v4,
      v9[0]);
  v5 = SetPropertyInteractionContext(*((_QWORD *)this + 2), 2LL, 0LL);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\pointermanipulationtracker\\draggesturetracker.cpp",
      (const char *)(unsigned int)v5,
      v9[0]);
  v6 = SetInteractionConfigurationInteractionContext(*((_QWORD *)this + 2), 3LL, v9);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\pointermanipulationtracker\\draggesturetracker.cpp",
      (const char *)(unsigned int)v6,
      v9[0]);
  v7 = RegisterOutputCallbackInteractionContext(
         *((_QWORD *)this + 2),
         DragGestureTracker::s_InteractionOutputCallback,
         this);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\pointermanipulationtracker\\draggesturetracker.cpp",
      (const char *)(unsigned int)v7,
      v9[0]);
  return 0LL;
}

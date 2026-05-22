/*
 * XREFs of ?ResetAndInitializeInteractionContext@GestureTracker@@AEAAJXZ @ 0x1801A434C
 * Callers:
 *     ?OnPointerInfoFrame@GestureTracker@@QEAA_NPEAUPointerInputInfo@@@Z @ 0x18007BFFC (-OnPointerInfoFrame@GestureTracker@@QEAA_NPEAUPointerInputInfo@@@Z.c)
 *     ??0GestureTracker@@QEAA@IUtagPOINT@@_N1@Z @ 0x1801A4294 (--0GestureTracker@@QEAA@IUtagPOINT@@_N1@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GestureTracker::ResetAndInitializeInteractionContext(GestureTracker *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+34h] [rbp+Ch]

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    ResetInteractionContext(v2);
    v3 = *((_QWORD *)this + 4);
    v12 = 1;
    v13 = 2055;
    v4 = SetPropertyInteractionContext(v3, 1LL, 1LL);
    if ( v4 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\gesturetracker.cpp",
        (const char *)(unsigned int)v4,
        v10);
    v5 = SetPropertyInteractionContext(*((_QWORD *)this + 4), 3LL, 0LL);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x30,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\gesturetracker.cpp",
        (const char *)(unsigned int)v5,
        v10);
    v6 = SetPropertyInteractionContext(*((_QWORD *)this + 4), 2LL, 0LL);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x31,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\gesturetracker.cpp",
        (const char *)(unsigned int)v6,
        v10);
    v7 = SetInteractionConfigurationInteractionContext(*((_QWORD *)this + 4), 1LL, &v12);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x32,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\gesturetracker.cpp",
        (const char *)(unsigned int)v7,
        v10);
    v8 = RegisterOutputCallbackInteractionContext(
           *((_QWORD *)this + 4),
           GestureTracker::s_InteractionOutputCallback,
           this);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x33,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\gesturetracker.cpp",
        (const char *)(unsigned int)v8,
        v10);
  }
  return 0LL;
}

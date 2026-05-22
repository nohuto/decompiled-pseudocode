/*
 * XREFs of ??0GestureTracker@@QEAA@IUtagPOINT@@_N1@Z @ 0x1801A4294
 * Callers:
 *     ??0HandlerContext@ShellGesturesProcessor@@QEAA@IUtagPOINT@@_N@Z @ 0x1801590D4 (--0HandlerContext@ShellGesturesProcessor@@QEAA@IUtagPOINT@@_N@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResetAndInitializeInteractionContext@GestureTracker@@AEAAJXZ @ 0x1801A434C (-ResetAndInitializeInteractionContext@GestureTracker@@AEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHINTERACTIONCONTEXT__@@P6AJPEAU1@@Z$1?DestroyInteractionContext@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHINTERACTIONCONTEXT__@@@Z @ 0x1801A44A0 (-reset@-$unique_storage@U-$resource_policy@PEAUHINTERACTIONCONTEXT__@@P6AJPEAU1@@Z$1-DestroyInte.c)
 */

GestureTracker *__fastcall GestureTracker::GestureTracker(
        GestureTracker *this,
        int a2,
        struct tagPOINT a3,
        char a4,
        bool a5)
{
  char *v5; // rsi
  int InteractionContext; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = (char *)this + 32;
  *(_OWORD *)this = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = a2;
  *((_BYTE *)this + 52) = a5;
  *(struct tagPOINT *)((char *)this + 44) = a3;
  wil::details::unique_storage<wil::details::resource_policy<HINTERACTIONCONTEXT__ *,long (*)(HINTERACTIONCONTEXT__ *),&long DestroyInteractionContext(HINTERACTIONCONTEXT__ *),wistd::integral_constant<unsigned __int64,0>,HINTERACTIONCONTEXT__ *,HINTERACTIONCONTEXT__ *,0,std::nullptr_t>>::reset(
    (char *)this + 32,
    0LL);
  *(_QWORD *)this = _mm_unpacklo_ps(
                      (__m128)COERCE_UNSIGNED_INT((float)*((int *)this + 11)),
                      (__m128)COERCE_UNSIGNED_INT((float)*((int *)this + 12))).m128_u64[0];
  if ( a4 )
  {
    wil::details::unique_storage<wil::details::resource_policy<HINTERACTIONCONTEXT__ *,long (*)(HINTERACTIONCONTEXT__ *),&long DestroyInteractionContext(HINTERACTIONCONTEXT__ *),wistd::integral_constant<unsigned __int64,0>,HINTERACTIONCONTEXT__ *,HINTERACTIONCONTEXT__ *,0,std::nullptr_t>>::reset(
      v5,
      0LL);
    InteractionContext = CreateInteractionContext(v5);
    if ( InteractionContext < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x18,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\gesturetracker.cpp",
        (const char *)(unsigned int)InteractionContext,
        v10);
    GestureTracker::ResetAndInitializeInteractionContext(this);
  }
  return this;
}

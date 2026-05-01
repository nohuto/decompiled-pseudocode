/*
 * XREFs of DragCallbackHelpers::CreateExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___ @ 0x1804DBEFC
 * Callers:
 *     ?StartExternalDrag@ElementDragData@@AEAAJXZ @ 0x1804DD9F0 (-StartExternalDrag@ElementDragData@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Details::Make_DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486____IMultitaskingViewDragData___&__lambda_d6de005f52295972498d6004bc7f9486__const_&_ @ 0x1804DC240 (Microsoft--WRL--Details--Make_DragCallbackHelpers--ExternalDragCallback__lambda_d6de005f52295972.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DragCallbackHelpers::CreateExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___(
        __int64 a1,
        _QWORD *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // rbx
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp+10h] BYREF

  v8 = a1;
  *a2 = 0LL;
  Microsoft::WRL::Details::Make_DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486____IMultitaskingViewDragData______lambda_d6de005f52295972498d6004bc7f9486__const___(
    &v9,
    &v8);
  v3 = v9;
  if ( v9 )
  {
    v5 = (**v9)(v9, &GUID_8253a5da_57e3_4257_bbe4_a0d563ae8ff1, a2);
    v6 = v5;
    if ( v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\DragCallback.h",
        (const char *)(unsigned int)v5);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v3)[2])(v3);
    return v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\DragCallback.h",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}

/*
 * XREFs of ?InvokeInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@@Z @ 0x180232BE4
 * Callers:
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x18047DA70 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::InvokeInputAppRequestedResize(
        KeyboardHosting::TabTipAdapter *this,
        unsigned int a2,
        const struct tagRECT *a3)
{
  int v4; // r9d
  int v5; // edx
  __m128i v6; // xmm1
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, _QWORD, float *); // rax
  int v9; // eax
  unsigned int v10; // ebx
  float v12[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a3->right - a3->left;
  v5 = a3->bottom - a3->top;
  v6 = _mm_cvtsi32_si128(a3->top);
  v7 = *((_QWORD *)this + 9);
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, float *))(*(_QWORD *)v7 + 96LL);
  v12[0] = (float)a3->left;
  LODWORD(v12[1]) = _mm_cvtepi32_ps(v6).m128_u32[0];
  v12[2] = (float)v4;
  v12[3] = (float)v5;
  v9 = v8(v7, a2, v12);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB0,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}

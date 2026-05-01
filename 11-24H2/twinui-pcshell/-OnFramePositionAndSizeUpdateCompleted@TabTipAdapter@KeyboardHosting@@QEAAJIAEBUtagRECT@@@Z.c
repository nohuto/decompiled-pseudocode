/*
 * XREFs of ?OnFramePositionAndSizeUpdateCompleted@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x18047D888
 * Callers:
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x1804729F4 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18008162C (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnFramePositionAndSizeUpdateCompleted(
        RTL_SRWLOCK *this,
        __int64 a2,
        const struct tagRECT *a3)
{
  unsigned int v3; // eax
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  __int64 *Ptr; // rcx
  __m128i v8; // xmm0
  int v9; // eax
  __int128 v10; // xmm1
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rdx
  int v15; // [rsp+40h] [rbp-40h] BYREF
  int v16; // [rsp+44h] [rbp-3Ch] BYREF
  int v17; // [rsp+48h] [rbp-38h] BYREF
  __int128 v18; // [rsp+50h] [rbp-30h] BYREF
  __int128 v19; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v3 = a3->right - a3->left;
  v5 = _mm_cvtsi32_si128(a3->left);
  v6 = _mm_cvtsi32_si128(a3->top);
  Ptr = (__int64 *)this[15].Ptr;
  v15 = 0;
  v17 = 0;
  v16 = 0;
  LODWORD(v19) = _mm_cvtepi32_ps(v5).m128_u32[0];
  v8 = _mm_cvtsi32_si128(v3);
  v9 = a3->bottom - a3->top;
  DWORD1(v19) = _mm_cvtepi32_ps(v6).m128_u32[0];
  DWORD2(v19) = _mm_cvtepi32_ps(v8).m128_u32[0];
  *((float *)&v19 + 3) = (float)v9;
  v10 = v19;
  v19 = 0LL;
  v11 = *Ptr;
  v18 = v10;
  v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int128 *, int *, int *, __int128 *, int *))(v11 + 312))(
          Ptr,
          a2,
          &v18,
          &v17,
          &v16,
          &v19,
          &v15);
  if ( v12 < 0 )
  {
    v13 = 3003LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v12);
    return (unsigned int)v12;
  }
  if ( v15 == 3 )
  {
    v12 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate(this);
    if ( v12 < 0 )
    {
      v13 = 3007LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}

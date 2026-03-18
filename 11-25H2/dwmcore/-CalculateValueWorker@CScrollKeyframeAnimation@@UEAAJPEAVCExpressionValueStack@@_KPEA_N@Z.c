/*
 * XREFs of ?CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800EFBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180035880 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ @ 0x1800EFCB8 (-EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScrollKeyframeAnimation::CalculateValueWorker(
        CScrollKeyframeAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  double v4; // xmm2_8
  int v9; // esi
  int v10; // r14d
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v9 = CScrollKeyframeAnimation::EnsureInertiaStateChangeAdded(this);
  if ( v9 < 0 )
  {
    v12 = 64LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  v9 = (*(__int64 (__fastcall **)(CScrollKeyframeAnimation *, struct CExpressionValueStack *, __int64))(*(_QWORD *)this + 296LL))(
         this,
         a2,
         a3);
  if ( v9 < 0 )
  {
    v12 = 72LL;
    goto LABEL_7;
  }
  v10 = *((_DWORD *)a2 + 2);
  v9 = CKeyframeAnimation::CalculateValueWorker((unsigned __int64)this, a2, v4, a4);
  if ( v9 < 0 )
  {
    v12 = 81LL;
    goto LABEL_7;
  }
  if ( *((_DWORD *)a2 + 2) == v10 + 1 )
  {
    (*(void (__fastcall **)(CScrollKeyframeAnimation *, struct CExpressionValueStack *, __int64))(*(_QWORD *)this + 304LL))(
      this,
      a2,
      a3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x58,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
}

/*
 * XREFs of ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x1802DAE70
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJIII@Z @ 0x1802DDB60 (-FrameUpdate@CHolographicClient@@UEAAJIII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ @ 0x1802DAD9C (-ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ.c)
 *     ?DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1802DB048 (-DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CHolographicExclusiveView::ActivateView(CHolographicExclusiveView *this, struct CHolographicClient *a2)
{
  int v4; // eax
  unsigned int v5; // r9d

  if ( *((_BYTE *)this + 91) )
  {
    *((_BYTE *)this + 88) = 1;
    return *((_BYTE *)this + 88);
  }
  v4 = CHolographicExclusiveView::ActivateSwapChain(this, (__int64)a2);
  if ( v4 < 0 )
  {
    v5 = 209;
    goto LABEL_6;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, char *, _QWORD, _DWORD))(**((_QWORD **)a2 + 3) + 120LL))(
          *((_QWORD *)a2 + 3),
          *((unsigned int *)this + 40),
          (char *)this + 168,
          *((unsigned int *)this + 21),
          *((_DWORD *)this + 20)) )
  {
    v4 = -2147467259;
    v5 = 212;
LABEL_6:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, v5, 0LL);
    CHolographicExclusiveView::DeactivateSwapChain(this);
  }
  return *((_BYTE *)this + 88);
}

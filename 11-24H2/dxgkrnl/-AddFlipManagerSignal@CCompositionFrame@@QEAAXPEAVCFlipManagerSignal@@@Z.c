/*
 * XREFs of ?AddFlipManagerSignal@CCompositionFrame@@QEAAXPEAVCFlipManagerSignal@@@Z @ 0x140050C1C
 * Callers:
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x140049338 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 * Callees:
 *     <none>
 */

void __fastcall CCompositionFrame::AddFlipManagerSignal(CCompositionFrame *this, struct CFlipManagerSignal *a2)
{
  char *v2; // rcx
  char *v3; // r8
  char **v4; // rax

  v2 = (char *)this + 288;
  v3 = (char *)(((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL));
  v4 = (char **)*((_QWORD *)v2 + 1);
  if ( *v4 != v2 )
    __fastfail(3u);
  *(_QWORD *)v3 = v2;
  *(_QWORD *)((((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL)) + 8) = v4;
  *v4 = v3;
  *((_QWORD *)v2 + 1) = v3;
}

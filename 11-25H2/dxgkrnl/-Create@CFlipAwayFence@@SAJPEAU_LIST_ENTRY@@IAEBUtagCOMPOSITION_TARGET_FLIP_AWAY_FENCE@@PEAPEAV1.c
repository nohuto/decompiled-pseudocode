/*
 * XREFs of ?Create@CFlipAwayFence@@SAJPEAU_LIST_ENTRY@@IAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@PEAPEAV1@@Z @ 0x140099F20
 * Callers:
 *     ?IssueFlipManagerWaitForFlipAway@CAdapter@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@_K@Z @ 0x140099804 (-IssueFlipManagerWaitForFlipAway@CAdapter@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSITION_TARGET.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GCFlipAwayFence@@QEAAPEAXI@Z @ 0x140099070 (--_GCFlipAwayFence@@QEAAPEAXI@Z.c)
 *     ??0CFlipAwayFence@@AEAA@PEAU_LIST_ENTRY@@IAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z @ 0x140099E2C (--0CFlipAwayFence@@AEAA@PEAU_LIST_ENTRY@@IAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z.c)
 *     ?Initialize@CFlipAwayFence@@AEAAJAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z @ 0x140099FB8 (-Initialize@CFlipAwayFence@@AEAAJAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z.c)
 */

__int64 __fastcall CFlipAwayFence::Create(
        struct _LIST_ENTRY *a1,
        int a2,
        const struct tagCOMPOSITION_TARGET_FLIP_AWAY_FENCE *a3,
        struct CFlipAwayFence **a4)
{
  CFlipAwayFence *v8; // rax
  CFlipAwayFence *v9; // rax
  CFlipAwayFence *v10; // rdi
  int v11; // ebx

  v8 = (CFlipAwayFence *)operator new(0x38uLL, 0x61664D54u, 256LL, (__int64)a4);
  if ( v8 && (v9 = CFlipAwayFence::CFlipAwayFence(v8, a1, a2, a3), (v10 = v9) != 0LL) )
  {
    v11 = CFlipAwayFence::Initialize(v9, a3);
    if ( v11 < 0 )
      CFlipAwayFence::`scalar deleting destructor'(v10);
    else
      *a4 = v10;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v11;
}

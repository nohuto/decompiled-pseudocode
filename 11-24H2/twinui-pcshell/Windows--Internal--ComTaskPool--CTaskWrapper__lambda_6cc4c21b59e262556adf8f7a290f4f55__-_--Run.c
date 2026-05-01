/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6cc4c21b59e262556adf8f7a290f4f55__&_::Run @ 0x18051CAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@TabletModePositioner@@AEAAJXZ @ 0x180076C78 (-Initialize@TabletModePositioner@@AEAAJXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6cc4c21b59e262556adf8f7a290f4f55____::Run(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = TabletModePositioner::Initialize(*(IUnknown **)(a1 + 16));
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x208,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v1);
}

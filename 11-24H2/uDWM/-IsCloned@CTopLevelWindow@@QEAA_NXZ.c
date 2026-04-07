/*
 * XREFs of ?IsCloned@CTopLevelWindow@@QEAA_NXZ @ 0x180080CDC
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_3b64230422d311f937c4d9a7616fc4ea___ @ 0x180004D50 (CTransitionVisualController--ForEachOwnedWindow__lambda_3b64230422d311f937c4d9a7616fc4ea___.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_99e2d1a5823ec03a5ca5bd7b77684933___ @ 0x180080B04 (CTransitionVisualController--ForEachOwnedWindow__lambda_99e2d1a5823ec03a5ca5bd7b77684933___.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___ @ 0x180080BF0 (CTransitionVisualController--ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___ @ 0x1800DC864 (CTransitionVisualController--ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_7821d6dce4a3388ce42fd2cdd0f5ae9d___ @ 0x1800DC944 (CTransitionVisualController--ForEachOwnedWindow__lambda_7821d6dce4a3388ce42fd2cdd0f5ae9d___.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_8668eb8e46af08c9eb1e7b72b67bd2fa___ @ 0x1800DCA5C (CTransitionVisualController--ForEachOwnedWindow__lambda_8668eb8e46af08c9eb1e7b72b67bd2fa___.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_c4981a34b712861f178222345c08e43a___ @ 0x1800DCB10 (CTransitionVisualController--ForEachOwnedWindow__lambda_c4981a34b712861f178222345c08e43a___.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_d312cc5a8d717c33b98f354ae26b71f9___ @ 0x1800DCBCC (CTransitionVisualController--ForEachOwnedWindow__lambda_d312cc5a8d717c33b98f354ae26b71f9___.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow::IsCloned(CTopLevelWindow *this)
{
  return (*((_BYTE *)this + 200) & 0x18) != 0;
}

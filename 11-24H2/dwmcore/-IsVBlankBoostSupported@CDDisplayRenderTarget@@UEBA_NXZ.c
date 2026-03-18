/*
 * XREFs of ?IsVBlankBoostSupported@CDDisplayRenderTarget@@UEBA_NXZ @ 0x180226940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDDisplayRenderTarget::IsVBlankBoostSupported(CDDisplayRenderTarget *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 6);
  return v1 && *(_QWORD *)(v1 + 136) && *(_DWORD *)(v1 + 152) > 1u;
}

/*
 * XREFs of ?NotifyPresent@CTargetStats@@QEAAXJ_K@Z @ 0x18027E900
 * Callers:
 *     ?Present@CDDisplayRenderTarget@@IEAAJXZ @ 0x18009912C (-Present@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x180099BC8 (-Present@CLegacyRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18003A510 (-GetCurrentFrameId@@YA_KXZ.c)
 */

void __fastcall CTargetStats::NotifyPresent(CTargetStats *this, int a2, __int64 a3)
{
  CTargetStats *v3; // r9
  __int64 v4; // rcx
  CGlobalComposition *CurrentFrameId; // rax
  int v6; // edx

  v3 = this;
  if ( a2 == 142213121 )
  {
    v6 = 1;
  }
  else
  {
    ++*((_DWORD *)this + 62);
    ++*((_DWORD *)this + 63);
    v4 = *((_QWORD *)this + 24);
    if ( v4 )
    {
      *((_QWORD *)v3 + 24) = *((_QWORD *)v3 + 25) + v4;
      ++*((_DWORD *)v3 + 52);
    }
    *((_QWORD *)v3 + 32) = a3;
    CurrentFrameId = GetCurrentFrameId();
    *((_QWORD *)v3 + 33) = CurrentFrameId;
  }
  *((_DWORD *)v3 + 10) = v6;
}

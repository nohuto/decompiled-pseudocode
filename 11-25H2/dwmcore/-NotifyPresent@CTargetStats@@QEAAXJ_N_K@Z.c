/*
 * XREFs of ?NotifyPresent@CTargetStats@@QEAAXJ_N_K@Z @ 0x180109E20
 * Callers:
 *     ?Present@CDDisplayRenderTarget@@IEAAJXZ @ 0x1800C6E9C (-Present@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x1800C7AC8 (-Present@CLegacyRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18010A060 (-GetCurrentFrameId@@YA_KXZ.c)
 */

void __fastcall CTargetStats::NotifyPresent(CTargetStats *this, int a2, char a3, __int64 a4)
{
  CTargetStats *v4; // r10
  int v5; // edx
  __int64 v6; // rcx
  unsigned __int64 CurrentFrameId; // rax

  v4 = this;
  if ( a2 == 142213121 )
  {
    v5 = 1;
  }
  else
  {
    v5 = 0;
    if ( a3 )
    {
      ++*((_DWORD *)this + 62);
      ++*((_DWORD *)this + 63);
      v6 = *((_QWORD *)this + 24);
      if ( v6 )
      {
        *((_QWORD *)v4 + 24) = *((_QWORD *)v4 + 25) + v6;
        ++*((_DWORD *)v4 + 52);
      }
      *((_QWORD *)v4 + 32) = a4;
      CurrentFrameId = GetCurrentFrameId();
      *((_QWORD *)v4 + 33) = CurrentFrameId;
    }
  }
  *((_DWORD *)v4 + 10) = v5;
}

/*
 * XREFs of ?CheckVRRPresentDurationSupport@COverlaySwapChain@@IEBAJIPEAI0@Z @ 0x18021E0AC
 * Callers:
 *     ?CheckPresentDurationSupport@CLegacySwapChain@@UEBAJIPEAI0@Z @ 0x18021E040 (-CheckPresentDurationSupport@CLegacySwapChain@@UEBAJIPEAI0@Z.c)
 *     ?CheckPresentDurationSupport@CDDisplaySwapChain@@UEBAJIPEAI0@Z @ 0x1802C7C20 (-CheckPresentDurationSupport@CDDisplaySwapChain@@UEBAJIPEAI0@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlaySwapChain::CheckVRRPresentDurationSupport(
        COverlaySwapChain *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __int64 v5; // rsi
  char v8; // al
  unsigned int v9; // r9d
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax

  v5 = a2;
  v8 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 3) + 248LL))((char *)this + 24, 0LL);
  v9 = 0;
  if ( !v8 )
    return 0LL;
  v11 = g_qpcFrequency.QuadPart * v5 / 0x989680uLL;
  if ( v11 >= *((_QWORD *)this + 17) )
  {
    v12 = *((_QWORD *)this + 18);
    if ( v12 && v11 > v12 )
    {
      *a3 = v12;
    }
    else
    {
      *a3 = v5;
      v9 = v5;
    }
  }
  else
  {
    *a3 = 0;
    v9 = *((_DWORD *)this + 34);
  }
  *a4 = v9;
  return 1LL;
}

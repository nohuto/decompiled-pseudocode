/*
 * XREFs of ?ApplyColorizationParameters@CDesktopManager@@QEAA_NPEAVCGlassColorizationParameters@@@Z @ 0x180071BEC
 * Callers:
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x1800717A8 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x1800719AC (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     DwmpCalculateColorizationColor @ 0x180071CB4 (DwmpCalculateColorizationColor.c)
 *     memcmp_0 @ 0x1800F636C (memcmp_0.c)
 */

char __fastcall CDesktopManager::ApplyColorizationParameters(
        CDesktopManager *this,
        struct CGlassColorizationParameters *a2)
{
  char v2; // si
  _OWORD *v4; // rdi
  WPARAM v6; // r9
  WPARAM wParam; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( !*((_BYTE *)this + 26) )
    *((_DWORD *)a2 + 5) = 1;
  v4 = (_OWORD *)((char *)this + 484);
  if ( memcmp_0(a2, (char *)this + 484, 0x20uLL) )
  {
    v2 = 1;
    *v4 = *(_OWORD *)a2;
    v4[1] = *((_OWORD *)a2 + 1);
  }
  LODWORD(wParam) = 0;
  DwmpCalculateColorizationColor(v4, &wParam);
  if ( (_DWORD)wParam != dword_18012698C )
  {
    dword_18012698C = wParam;
    v6 = (unsigned int)wParam;
    LODWORD(wParam) = 8;
    BroadcastSystemMessageW(0xB2u, (LPDWORD)&wParam, 0x320u, v6, 1LL);
  }
  return v2;
}

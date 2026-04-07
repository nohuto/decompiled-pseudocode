/*
 * XREFs of ?ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z @ 0x18006F8D8
 * Callers:
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x18000DF78 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x18006F600 (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 * Callees:
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18000F658 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::ShowBarrel(CPenBarrelKeyVisual *this, char a2)
{
  if ( *((_BYTE *)this + 300) != a2 )
  {
    *((_BYTE *)this + 300) = a2;
    CPenBarrelKeyVisual::UpdateBarrelAlpha((CVisual **)this);
  }
  return 0LL;
}

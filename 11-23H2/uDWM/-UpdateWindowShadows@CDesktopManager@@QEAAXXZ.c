/*
 * XREFs of ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x180025C2C
 * Callers:
 *     ??0CDesktopManager@@AEAA@XZ @ 0x180025E20 (--0CDesktopManager@@AEAA@XZ.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18002FF48 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopManager::UpdateWindowShadows(CDesktopManager *this)
{
  if ( *((int *)this + 8) > 2 )
    *((_BYTE *)this + 17) = 0;
  else
    SystemParametersInfoW(0x1024u, 0, (char *)this + 17, 0);
}

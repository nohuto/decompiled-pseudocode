/*
 * XREFs of xxxMNKeyFilter @ 0x1402EB098
 * Callers:
 *     xxxSysCommand @ 0x1402B5464 (xxxSysCommand.c)
 * Callees:
 *     xxxMNStartMenu @ 0x14009A980 (xxxMNStartMenu.c)
 *     xxxMNLoop @ 0x14009B5E0 (xxxMNLoop.c)
 *     xxxMNOpenHierarchy @ 0x14009BE5C (xxxMNOpenHierarchy.c)
 *     xxxMNCancel @ 0x14009D784 (xxxMNCancel.c)
 *     xxxMNSelectItem @ 0x14009DA30 (xxxMNSelectItem.c)
 *     xxxMNCloseHierarchy @ 0x14009E0A0 (xxxMNCloseHierarchy.c)
 *     xxxMessageBeep @ 0x140103034 (xxxMessageBeep.c)
 *     MNPositionSysMenu @ 0x140202B2C (MNPositionSysMenu.c)
 *     xxxMNChar @ 0x1402BD9E4 (xxxMNChar.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1402BEC74 (xxxMNSwitchToAlternateMenu.c)
 */

void __fastcall xxxMNKeyFilter(unsigned int ***a1, __int64 a2, unsigned int a3)
{
  int v3; // ebp

  v3 = *(_DWORD *)(a2 + 8);
  if ( (v3 & 8) == 0 )
  {
    if ( (v3 & 4) == 0 )
    {
      if ( !xxxMNStartMenu(a1, a2, 1) )
        return;
      *(_DWORD *)(a2 + 8) |= 4u;
    }
    if ( a3 )
    {
      if ( a3 == 32
        || a3 == 45
        && (!*((_QWORD *)**a1 + 1) || (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)**a1 + 1) + 40LL) + 31LL) & 0xC0) == 0x40) )
      {
        if ( *((_QWORD *)**a1 + 1) && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)**a1 + 1) + 40LL) + 30LL) & 8) == 0 )
        {
          xxxMessageBeep(0LL, a2);
          goto LABEL_19;
        }
        xxxMNCloseHierarchy((__int64)**a1, a2);
        if ( (***a1 & 4) == 0 && *((_QWORD *)**a1 + 6) )
          xxxMNSwitchToAlternateMenu((__int64 **)a1, a2);
        if ( (***a1 & 4) == 0 )
          goto LABEL_19;
        MNPositionSysMenu(*((_QWORD *)**a1 + 2), *((_QWORD **)**a1 + 5));
        xxxMNSelectItem((__int64 **)a1, a2, 0);
        xxxMNOpenHierarchy((__int64 **)a1, a2);
        ***a1 &= ~0x80u;
      }
      else
      {
        xxxMNChar((__int64 **)a1, a2, a3);
        if ( (**a1)[20] == -1 )
        {
LABEL_19:
          *(_DWORD *)(a2 + 8) &= ~0x100u;
          if ( (***a1 & 0x80000) == 0 )
            xxxMNCancel(a2, 0, 0, 0LL);
          return;
        }
      }
    }
    else
    {
      xxxMNSelectItem((__int64 **)a1, a2, 0);
    }
    if ( (v3 & 4) == 0 && (*(_DWORD *)(a2 + 8) & 4) != 0 )
      xxxMNLoop(a1, a2, 0LL, 0);
  }
}

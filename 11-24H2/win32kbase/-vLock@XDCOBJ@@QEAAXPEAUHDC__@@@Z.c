/*
 * XREFs of ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1400348A0
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400150B4 (-vCleanupDCs@@YAXK@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001D9D8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 * Callees:
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x140034950 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x140034BE0 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14003506C (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1400350A0 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 */

void __fastcall XDCOBJ::vLock(XDCOBJ *this, HDC a2)
{
  struct _DC_ATTR *UserAttr; // rax
  unsigned int v4; // ecx
  __int64 v5; // rdx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  int v9; // ecx

  XDCOBJ::vLockIgnoreAttributes(this, a2);
  if ( *(_QWORD *)this )
  {
    if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) == 0 )
    {
      if ( (*((_DWORD *)this + 8) & 2) == 0 )
      {
        UserAttr = XDCOBJ::GetUserAttr(this);
        if ( UserAttr )
        {
          if ( !(unsigned int)DC::SaveAttributes(*(DC **)this, UserAttr) )
          {
            OBJECT::InterlockedDecrementExclusiveLockCount(*(OBJECT **)this);
            *(_QWORD *)this = 0LL;
            return;
          }
        }
      }
      *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
      *((_DWORD *)this + 2) = 1;
    }
    v8 = *(_QWORD *)this;
    v9 = *(_DWORD *)(*(_QWORD *)this + 520LL);
    if ( (v9 & 4) != 0 )
    {
      v4 = v9 & 0xFFFFFFFB;
      *(_DWORD *)(v8 + 520) = v4;
      v5 = *(_QWORD *)(v8 + 976);
      v6 = *(_DWORD *)(v5 + 340);
      if ( (v4 & 1) != 0 )
        v7 = v6 | 0x16090;
      else
        v7 = v6 | 0x6090;
      *(_DWORD *)(v5 + 340) = v7;
    }
  }
}

/*
 * XREFs of ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001FBC0
 * Callers:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x14001D230 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB398 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1402595AC (--0DCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140325C78 (--0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?LookUpWndobjs@@YAHAEAVXDCOBJ@@PEAVDCOBJ@@PEAPEAUHDC__@@H@Z @ 0x140326B28 (-LookUpWndobjs@@YAHAEAVXDCOBJ@@PEAVDCOBJ@@PEAPEAUHDC__@@H@Z.c)
 * Callees:
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001FC80 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001FD60 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 */

void __fastcall XDCOBJ::vLock(XDCOBJ *this, HDC a2)
{
  struct _DC_ATTR *UserAttr; // rax
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // eax
  int v8; // ecx
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
          if ( !DC::SaveAttributes(*(DC **)this, UserAttr) )
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
    v4 = *(_QWORD *)this;
    v5 = *(_DWORD *)(*(_QWORD *)this + 520LL);
    if ( (v5 & 4) != 0 )
    {
      v6 = *(_QWORD *)(v4 + 976);
      v7 = v5 & 0xFFFFFFFB;
      *(_DWORD *)(v4 + 520) = v7;
      v8 = *(_DWORD *)(v6 + 340);
      if ( (v7 & 1) != 0 )
        v9 = v8 | 0x16090;
      else
        v9 = v8 | 0x6090;
      *(_DWORD *)(v6 + 340) = v9;
    }
  }
}

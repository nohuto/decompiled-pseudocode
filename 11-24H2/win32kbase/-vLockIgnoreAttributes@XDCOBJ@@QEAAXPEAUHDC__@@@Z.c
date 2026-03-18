/*
 * XREFs of ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x140034950
 * Callers:
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14000E5A8 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x140020190 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1400348A0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     GrepDeleteDC @ 0x140034C20 (GrepDeleteDC.c)
 * Callees:
 *     ?HmgLockEx2@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x14002F070 (-HmgLockEx2@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14003506C (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?GrepGetCurrentProcessBehaviorRestriction@@YA?AW4GreBehaviorRestriction@@XZ @ 0x1400E7320 (-GrepGetCurrentProcessBehaviorRestriction@@YA-AW4GreBehaviorRestriction@@XZ.c)
 *     ?GrepAuditBehaviorRestrictionViolations@@YA_NW4GreBehaviorRestriction@@@Z @ 0x1400FE660 (-GrepAuditBehaviorRestrictionViolations@@YA_NW4GreBehaviorRestriction@@@Z.c)
 */

void __fastcall XDCOBJ::vLockIgnoreAttributes(XDCOBJ *this, HDC a2)
{
  __int64 v3; // rax
  int v4; // ebx

  v3 = HmgLockEx2(*((_QWORD *)this + 2), (unsigned int)a2, 1, *((_DWORD *)this + 8));
  *(_QWORD *)this = v3;
  if ( v3 )
  {
    if ( (*((_DWORD *)this + 8) & 2) != 0 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v3 + 48) + 40LL) & 0x8000) == 0
        || (v4 = *(_DWORD *)(v3 + 2112), v4 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)) )
      {
        OBJECT::InterlockedDecrementExclusiveLockCount(*(OBJECT **)this);
        *(_QWORD *)this = 0LL;
      }
    }
    else if ( *(_DWORD *)(v3 + 2112) )
    {
      *(_DWORD *)(v3 + 2112) = 0;
    }
  }
  else if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() != 1 )
  {
    GrepAuditBehaviorRestrictionViolations(1LL);
  }
}

/*
 * XREFs of ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001FC80
 * Callers:
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x14001A5E0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x14001D230 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14001EB5C (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x14001F2D8 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001F73C (-vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14001F7E4 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x14001F8D0 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001FBC0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x140021474 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::vLockIgnoreAttributes(XDCOBJ *this, HDC a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // ebx
  OBJECT *v6; // rcx

  LOBYTE(a3) = 1;
  v4 = HmgLockEx2(*((_QWORD *)this + 2), a2, a3, *((unsigned int *)this + 8));
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    if ( (*((_DWORD *)this + 8) & 2) != 0 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v4 + 48) + 40LL) & 0x8000) == 0
        || (v5 = *(_DWORD *)(v4 + 2112), v5 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)) )
      {
        v6 = *(OBJECT **)this;
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
        if ( *((_WORD *)v6 + 6) == 0xFFFF )
          OBJECT::ReportOverflow(v6, 3u);
        *(_QWORD *)this = 0LL;
      }
    }
    else if ( *(_DWORD *)(v4 + 2112) )
    {
      *(_DWORD *)(v4 + 2112) = 0;
    }
  }
  else if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() != 1 )
  {
    GrepAuditBehaviorRestrictionViolations(1LL);
  }
}

/*
 * XREFs of ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14000E5A8
 * Callers:
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x14000E350 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 * Callees:
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x14000EF64 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?SaveAttributes@XDCOBJ@@AEAAHXZ @ 0x140034840 (-SaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x140034950 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1400349F0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14003506C (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 */

char __fastcall OPTAPIDCOBJ::bValid(OPTAPIDCOBJ *this)
{
  int v2; // eax
  DC *v3; // rcx
  __int64 v4; // rax

  if ( !*(_QWORD *)this )
  {
    if ( *((_BYTE *)this + 113) == 1 )
      return 0;
    XDCOBJ::vLockIgnoreAttributes(this, *((HDC *)this + 13));
    if ( *(_QWORD *)this )
    {
      v2 = XDCOBJ::SaveAttributes(this);
      v3 = *(DC **)this;
      if ( v2 )
      {
        if ( (*((_DWORD *)v3 + 130) & 4) != 0 )
          DC::vMarkTransformDirty(v3);
      }
      else
      {
        OBJECT::InterlockedDecrementExclusiveLockCount(v3);
        *(_QWORD *)this = 0LL;
      }
    }
    v4 = *(_QWORD *)this;
    *((_BYTE *)this + 113) = 1;
    if ( !v4 )
      return 0;
    if ( *(_WORD *)(v4 + 12) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( *(_WORD *)(*(_QWORD *)this + 12LL) != 1 )
    {
      XDCOBJ::vUnlockNoNullSet(this);
      *(_QWORD *)this = 0LL;
      return 0;
    }
  }
  return 1;
}

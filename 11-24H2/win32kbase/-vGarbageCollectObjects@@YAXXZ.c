/*
 * XREFs of ?vGarbageCollectObjects@@YAXXZ @ 0x140015300
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x140015750 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     HmgNextGarbageCollectible @ 0x1400899DC (HmgNextGarbageCollectible.c)
 *     HmgIsProcessCleanupRequired @ 0x1400F2E68 (HmgIsProcessCleanupRequired.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CDF18 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CDFF8 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CE0E8 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CE1E0 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CE2C0 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 */

void __fastcall vGarbageCollectObjects(__int64 a1, __int64 a2)
{
  __int64 CurrentProcessWin32Process; // rax
  unsigned int i; // ecx
  unsigned int GarbageCollectible; // ebx

  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(a1, a2) + 88) + 1756LL) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( (unsigned int)HmgIsProcessCleanupRequired(CurrentProcessWin32Process) )
    {
      for ( i = 0; ; i = GarbageCollectible )
      {
        GarbageCollectible = HmgNextGarbageCollectible(i);
        if ( !GarbageCollectible )
          break;
      }
    }
  }
}

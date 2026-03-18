/*
 * XREFs of ?vGarbageCollectObjects@@YAXXZ @ 0x1C0035EF8
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C0034CE8 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     HmgIsProcessCleanupRequired @ 0x1C00A4C60 (HmgIsProcessCleanupRequired.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D2E48 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D2F40 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D3054 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D3170 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 *     HmgNextGarbageCollectible @ 0x1C0159430 (HmgNextGarbageCollectible.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C016C130 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 */

void __fastcall vGarbageCollectObjects(__int64 a1)
{
  __int64 v1; // rcx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int i; // ecx
  unsigned int GarbageCollectible; // ebx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( *(_DWORD *)(v1 + 1908) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v1);
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

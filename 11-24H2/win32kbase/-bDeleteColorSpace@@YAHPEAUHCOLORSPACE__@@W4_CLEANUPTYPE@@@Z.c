/*
 * XREFs of ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1401CEAD8
 * Callers:
 *     ?vCleanupLCSPs@@YAXK@Z @ 0x1400153DC (-vCleanupLCSPs@@YAXK@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CDFF8 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     NtGdiDeleteColorSpace @ 0x1401CECD0 (NtGdiDeleteColorSpace.c)
 * Callees:
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x140022A58 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     HmgRemoveObject @ 0x140031C10 (HmgRemoveObject.c)
 *     FreeObject @ 0x1401482A0 (FreeObject.c)
 */

__int64 __fastcall bDeleteColorSpace(struct HOBJ__ *a1, int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax

  v4 = 0;
  if ( a1 == *(struct HOBJ__ **)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 2240LL) )
    return a2 != 1;
  if ( a2 )
  {
    if ( a2 != 1 )
    {
LABEL_8:
      EngSetLastError(0x57u);
      return v4;
    }
    v5 = HmgRemoveObjectImpl(a1, 0, 1, 2, 9, 0LL);
  }
  else
  {
    v5 = HmgRemoveObject((__int64)a1, 0, 0, 1, 9, 0LL);
  }
  if ( !v5 )
    goto LABEL_8;
  FreeObject(v5, 9u);
  return 1;
}

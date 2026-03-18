/*
 * XREFs of ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00D33D8
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C0034CE8 (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D2F40 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     NtGdiDeleteColorSpace @ 0x1C016D340 (NtGdiDeleteColorSpace.c)
 * Callees:
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0044F10 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgRemoveObject @ 0x1C0047F80 (HmgRemoveObject.c)
 *     FreeObject @ 0x1C0088C60 (FreeObject.c)
 *     EngSetLastError @ 0x1C00AADD0 (EngSetLastError.c)
 */

__int64 __fastcall bDeleteColorSpace(struct HOBJ__ *a1, int a2)
{
  unsigned int v4; // ebx
  void *v5; // rax

  v4 = 0;
  if ( a1 == *(struct HOBJ__ **)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 2400LL) )
    return a2 != 1;
  if ( a2 )
  {
    if ( a2 != 1 )
    {
LABEL_8:
      EngSetLastError(0x57u);
      return v4;
    }
    v5 = (void *)HmgRemoveObjectImpl(a1, 0, 1, 2, 9, 0LL);
  }
  else
  {
    v5 = (void *)HmgRemoveObject((__int64)a1, 0, 0, 1, 9, 0LL);
  }
  if ( !v5 )
    goto LABEL_8;
  FreeObject(v5, 9u);
  return 1;
}

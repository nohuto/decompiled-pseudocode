/*
 * XREFs of ?CleanupRegions@SFMLOGICALSURFACE@@QEAAXXZ @ 0x14002C6EC
 * Callers:
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z @ 0x14002C62C (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x140030624 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SFMLOGICALSURFACE::CleanupRegions(SFMLOGICALSURFACE *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+10h] BYREF

  v4 = *((_QWORD *)this + 11);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v4);
  v2 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 11) = 0LL;
  v4 = v2;
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v4);
  v3 = *(_QWORD *)this;
  *((_QWORD *)this + 10) = 0LL;
  EtwTraceLifetimeAccum(v3, 1LL);
  v4 = *((_QWORD *)this + 16);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v4);
  *((_QWORD *)this + 16) = 0LL;
  if ( *((_QWORD *)this + 18) )
  {
    v4 = *((_QWORD *)this + 18);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v4);
  }
  if ( *((_QWORD *)this + 17) )
  {
    v4 = *((_QWORD *)this + 17);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v4);
    *((_QWORD *)this + 17) = 0LL;
  }
  if ( *((_QWORD *)this + 20) )
  {
    v4 = *((_QWORD *)this + 20);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v4);
  }
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 42) = 0;
}

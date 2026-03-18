/*
 * XREFs of ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1400221AC
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001C294 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1402FEE34 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x140020CB0 (-GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 */

void __fastcall DEVLOCKBLTOBJ::vFlushSpriteUpdates(DEVLOCKBLTOBJ *this)
{
  struct tagSIZE **v2; // rcx
  struct tagSIZE *v3; // r8
  int v4; // edx

  v2 = (struct tagSIZE **)((char *)this + 120);
  v3 = *v2;
  if ( *v2 )
  {
    if ( *((_BYTE *)v2 + 73) )
    {
      v4 = *((_DWORD *)this + 28);
      if ( (v4 & 0x1000) != 0 && (v3[4].cy & 0x4000) != 0 && *(_QWORD *)&v3[59] )
      {
        if ( v3[61].cx )
          GrepUpdateSpriteDevLockEnd(v2, v4 & 0x40000);
      }
    }
  }
}

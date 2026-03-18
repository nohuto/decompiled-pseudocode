/*
 * XREFs of ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C0089070
 * Callers:
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0089018 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C01078D0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0108A98 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 */

void __fastcall DEVLOCKOBJ::vFlushSpriteUpdates(DEVLOCKOBJ *this, int a2)
{
  struct XDCOBJ *v2; // rbx
  __int64 v4; // r8
  SURFACE *v5; // rcx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rbx

  v2 = (DEVLOCKOBJ *)((char *)this + 32);
  v4 = *((_QWORD *)this + 4);
  if ( v4 && *((_BYTE *)this + 81) )
  {
    if ( a2 )
    {
      if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
      {
        if ( (*(_DWORD *)(v4 + 44) & 1) == 0 )
        {
          v5 = *(SURFACE **)(v4 + 496);
          if ( v5 )
            SURFACE::bUnMap(v5, this, (struct DC *)v4);
        }
        *(_DWORD *)(*(_QWORD *)v2 + 44LL) &= ~1u;
        v6 = *(_QWORD *)v2;
        if ( (*(_DWORD *)(*(_QWORD *)v2 + 36LL) & 0x4000) != 0 && *(_QWORD *)(v6 + 472) )
        {
          if ( *(_DWORD *)(v6 + 488) )
            GreUpdateSpriteDevLockEnd(v2, *((_DWORD *)this + 6) & 0x400000);
        }
      }
    }
    else
    {
      v7 = *(_DWORD *)(v4 + 36);
      if ( (v7 & 0x4000) != 0 && (v7 & 0x40) != 0 )
      {
        if ( *(_QWORD *)(v4 + 472) )
        {
          if ( *(_DWORD *)(v4 + 488) )
          {
            v8 = *(_QWORD *)(v4 + 496);
            if ( v8 )
            {
              W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v8 + 272));
              W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v8 + 272));
            }
          }
        }
      }
    }
  }
}

/*
 * XREFs of ?bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ @ 0x1C011CD74
 * Callers:
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0276FCC (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0010D04 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0089018 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00FB428 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall DEVLOCKOBJ::bDisposeTrgDco(DEVLOCKOBJ *this)
{
  DC **v1; // rdi
  __int64 v3; // rbx
  unsigned int v4; // ebp
  __int64 v5; // rbx

  v1 = (DC **)((char *)this + 32);
  v3 = *((_QWORD *)this + 4);
  v4 = 1;
  if ( v3 && *((_BYTE *)this + 81) )
  {
    v5 = *(_QWORD *)(v3 + 48);
    if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
    {
      v4 = DEVLOCKOBJ::bUnMapTrgSurfaceView(this);
      if ( (*((_DWORD *)this + 6) & 0x10) != 0 )
      {
        *((_DWORD *)*v1 + 9) &= ~0x4000u;
        DC::pSurface(*v1, *(struct SURFACE **)(v5 + 2528));
      }
      DEVLOCKOBJ::vClearRenderState(this);
    }
    DLODCOBJ::vUnlock((DLODCOBJ *)v1);
    *v1 = 0LL;
  }
  return v4;
}

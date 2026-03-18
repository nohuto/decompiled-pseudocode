/*
 * XREFs of ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x140157A24
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x14001D230 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x14001F2D8 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1401577F0 (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(DEVLOCKBLTOBJ *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  SURFACE *v4; // rcx
  int v5; // eax

  v2 = 1;
  v3 = *((_QWORD *)this + 25);
  if ( v3 && *((_BYTE *)this + 273) && (*((_DWORD *)this + 28) & 0x1000) != 0 )
  {
    if ( (*(_DWORD *)(v3 + 44) & 1) == 0 )
    {
      v4 = *(SURFACE **)(v3 + 496);
      if ( *((SURFACE **)this + 42) != v4 )
      {
        GrepCaptureLiveMemoryDump(400LL, 57LL, 2LL);
        v4 = (SURFACE *)*((_QWORD *)this + 42);
        *((_QWORD *)this + 42) = 0LL;
      }
      if ( v4 )
      {
        v5 = *((_DWORD *)this + 28);
        if ( (v5 & 0x1000000) != 0 )
        {
          *((_DWORD *)this + 28) = v5 & 0xFEFFFFFF;
          v2 = SURFACE::bUnMap(v4);
        }
        else
        {
          GrepCaptureLiveMemoryDump(400LL, 57LL, 3LL);
        }
      }
    }
    *(_DWORD *)(*((_QWORD *)this + 25) + 44LL) &= ~1u;
  }
  return v2;
}

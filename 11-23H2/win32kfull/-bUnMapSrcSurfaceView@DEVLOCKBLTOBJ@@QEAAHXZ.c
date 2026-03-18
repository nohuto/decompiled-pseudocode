/*
 * XREFs of ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C007BAD8
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0002200 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C0085BD4 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00F98B0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     NtGdiBitBltInternal @ 0x1C0105030 (NtGdiBitBltInternal.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C026B470 (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(DEVLOCKBLTOBJ *this)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  SURFACE *v4; // rcx

  v2 = 1;
  v3 = *((_QWORD *)this + 22);
  if ( v3 && *((_BYTE *)this + 225) && (*((_DWORD *)this + 28) & 0x1000) != 0 )
  {
    if ( (*(_DWORD *)(v3 + 44) & 1) == 0 )
    {
      v4 = *(SURFACE **)(v3 + 496);
      if ( v4 )
        v2 = SURFACE::bUnMap(v4, this, 0LL);
    }
    *(_DWORD *)(*((_QWORD *)this + 22) + 44LL) &= ~1u;
  }
  return v2;
}

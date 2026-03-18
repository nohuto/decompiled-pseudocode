/*
 * XREFs of ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C0003064
 * Callers:
 *     hbmSelectBitmap @ 0x1C0002FE0 (hbmSelectBitmap.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003BD24 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 * Callees:
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C003BD8C (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?SaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0096410 (-SaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0150D70 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

void __fastcall XDCOBJ::vLock(XDCOBJ *this, HDC a2)
{
  int v3; // eax
  __int64 v4; // rcx

  XDCOBJ::vLockIgnoreAttributes(this, a2);
  if ( *(_QWORD *)this )
  {
    v3 = XDCOBJ::SaveAttributes(this);
    v4 = *(_QWORD *)this;
    if ( v3 )
    {
      if ( (*(_DWORD *)(v4 + 520) & 4) != 0 )
        DC::vMarkTransformDirty((DC *)v4);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 12));
      *(_QWORD *)this = 0LL;
    }
  }
}

/*
 * XREFs of ?bUnMap@SURFACE@@QEAAHXZ @ 0x1400B8120
 * Callers:
 *     ?bUnMap@SURFREFVIEW@@QEAAHXZ @ 0x1400B80A0 (-bUnMap@SURFREFVIEW@@QEAAHXZ.c)
 * Callees:
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1400B817C (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall SURFACE::bUnMap(SURFACE *this)
{
  if ( *((_QWORD *)this + 31) || (*((_DWORD *)this + 29) & 1) != 0 )
  {
    if ( _bittest16((const signed __int16 *)this + 51, 0xBu) )
    {
      KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)this + 39) + 64LL), 0);
      W32PIDLOCK::vUnlockSimple((SURFACE *)((char *)this + 272));
    }
  }
  return 1LL;
}

/*
 * XREFs of ??1MULTIDEVLOCKOBJ@@QEAA@XZ @ 0x14012AAB8
 * Callers:
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x14012AA90 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x14012AB08 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 */

void __fastcall MULTIDEVLOCKOBJ::~MULTIDEVLOCKOBJ(char **this)
{
  MULTIDEVLOCKOBJ::vUnlock((MULTIDEVLOCKOBJ *)this);
  if ( (*(_DWORD *)this & 2) != 0 )
    GreDeleteFastMutex(this[1]);
}

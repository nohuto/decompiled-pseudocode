/*
 * XREFs of ?DeInitialize@SfmTokenArray@@QEAAXXZ @ 0x140115F20
 * Callers:
 *     GreSfmDwmShutdown @ 0x1401CE980 (GreSfmDwmShutdown.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

void __fastcall SfmTokenArray::DeInitialize(char **this)
{
  char *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    GreDeleteFastMutex(v2);
    *this = 0LL;
  }
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 2) = 0;
}

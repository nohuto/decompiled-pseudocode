/*
 * XREFs of ?Free@QDC_AUTO_BUFFERS@@QEAAXXZ @ 0x1400C8270
 * Callers:
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1400C80E0 (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

void __fastcall QDC_AUTO_BUFFERS::Free(QDC_AUTO_BUFFERS *this)
{
  char *v2; // rcx

  v2 = (char *)*((_QWORD *)this + 55);
  if ( v2 )
  {
    if ( v2 != (char *)this )
    {
      GreDeleteFastMutex(v2);
      *((_QWORD *)this + 55) = 0LL;
    }
  }
}

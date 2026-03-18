/*
 * XREFs of ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x140038508
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x140006B60 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(ADAPTER_DISPLAY *this, int a2)
{
  unsigned int i; // r9d

  for ( i = 0; ; ++i )
  {
    if ( i >= *((_DWORD *)this + 24) )
      return 0xFFFFFFFFLL;
    if ( *(_DWORD *)(4024LL * i + *((_QWORD *)this + 16) + 1072) == a2 )
      break;
  }
  return i;
}

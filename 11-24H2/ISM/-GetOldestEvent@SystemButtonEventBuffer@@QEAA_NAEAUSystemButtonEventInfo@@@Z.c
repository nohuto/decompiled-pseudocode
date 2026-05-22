/*
 * XREFs of ?GetOldestEvent@SystemButtonEventBuffer@@QEAA_NAEAUSystemButtonEventInfo@@@Z @ 0x18009A158
 * Callers:
 *     ?OnDisconnected@SystemButtonEventController@@MEAAJXZ @ 0x180075720 (-OnDisconnected@SystemButtonEventController@@MEAAJXZ.c)
 *     ?OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z @ 0x18015C3F0 (-OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 */

char __fastcall SystemButtonEventBuffer::GetOldestEvent(void **this, struct SystemButtonEventInfo *a2)
{
  char v3; // di
  _OWORD *v4; // rcx

  v3 = 0;
  v4 = *this;
  if ( ((_BYTE *)this[1] - (_BYTE *)v4) >> 4 )
  {
    v3 = 1;
    *(_OWORD *)a2 = *v4;
    memmove_0(*this, (char *)*this + 16, (_BYTE *)this[1] - ((_BYTE *)*this + 16));
    this[1] = (char *)this[1] - 16;
  }
  return v3;
}

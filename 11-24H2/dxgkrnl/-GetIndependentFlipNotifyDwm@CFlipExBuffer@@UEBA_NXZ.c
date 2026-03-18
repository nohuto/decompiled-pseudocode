/*
 * XREFs of ?GetIndependentFlipNotifyDwm@CFlipExBuffer@@UEBA_NXZ @ 0x14003DF60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CFlipExBuffer::GetIndependentFlipNotifyDwm(CFlipExBuffer *this)
{
  char v1; // dl

  v1 = 1;
  if ( *((int *)this + 100) >= 3 && !*((_BYTE *)this + 641) )
    return *((_BYTE *)this + 642) != 0;
  return v1;
}

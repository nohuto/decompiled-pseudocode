/*
 * XREFs of ?IsMockDriverStateEnabled@DXGADAPTER@@QEAA_NXZ @ 0x14001CCE0
 * Callers:
 *     VidSchiSetFlipDevice @ 0x14001E0BC (VidSchiSetFlipDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsMockDriverStateEnabled(DXGADAPTER *this)
{
  bool result; // al

  if ( !*((_BYTE *)this + 4976) )
    return 0;
  result = 1;
  if ( *((_DWORD *)this + 74) != 1 )
    return 0;
  return result;
}

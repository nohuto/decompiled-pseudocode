/*
 * XREFs of ?IsSupported@DummyBroadcastProvider@@UEAA_NXZ @ 0x1800E1520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DummyBroadcastProvider::IsSupported(DummyBroadcastProvider *this)
{
  return *((_BYTE *)this + 16);
}

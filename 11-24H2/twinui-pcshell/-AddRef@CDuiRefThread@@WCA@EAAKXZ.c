/*
 * XREFs of ?AddRef@CDuiRefThread@@WCA@EAAKXZ @ 0x1803EBC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDuiRefThread::AddRef(__int64 a1)
{
  return CRefThread::AddRef((volatile signed __int32 **)(a1 - 32));
}

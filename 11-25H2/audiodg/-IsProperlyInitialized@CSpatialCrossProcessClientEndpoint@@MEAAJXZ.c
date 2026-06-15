/*
 * XREFs of ?IsProperlyInitialized@CSpatialCrossProcessClientEndpoint@@MEAAJXZ @ 0x14008AE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpatialCrossProcessClientEndpoint::IsProperlyInitialized(CSpatialCrossProcessClientEndpoint *this)
{
  unsigned int v1; // r8d

  v1 = -2005139378;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 163) + 64LL), 0, 0) & 0x20) != 0
    || *((_BYTE *)this + 1384) )
  {
    return 0;
  }
  return v1;
}

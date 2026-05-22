/*
 * XREFs of ?OnDeviceUpdate@MPCHeadProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801BCBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCHeadProcessor::OnDeviceUpdate(MPCHeadProcessor *this, struct DeviceInfo *a2)
{
  if ( *((_BYTE *)this + 3657) )
    *((_BYTE *)a2 + 1488) = *((_BYTE *)this + 3656);
  return 0LL;
}

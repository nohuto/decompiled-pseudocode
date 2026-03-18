/*
 * XREFs of ?SendResponse@VisualCaptureBitsResponse@@UEAAJJ@Z @ 0x180215590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VisualCaptureBitsResponse::SendResponse(HANDLE *this)
{
  if ( !*((_BYTE *)this + 1992) )
  {
    SetEvent(this[248]);
    *((_BYTE *)this + 1992) = 1;
  }
  *((_BYTE *)this + 33) = 1;
  return 0LL;
}

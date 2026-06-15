/*
 * XREFs of ?IsCaptureSession@CAudioSession@@UEAAHXZ @ 0x18006DA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CAudioSession::IsCaptureSession(CAudioSession *this)
{
  return (*((_DWORD *)this + 57) & 8) == 0;
}

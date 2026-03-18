/*
 * XREFs of NtDCompositionUpdatePointerCapture @ 0x14006CCC0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x140024300 (UserIsCurrentProcessDwm.c)
 *     ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x14006C7C0 (-UpdatePointerCapture@CInputManager@@SAJII@Z.c)
 */

__int64 __fastcall NtDCompositionUpdatePointerCapture(int a1, int a2)
{
  unsigned int updated; // ebx

  if ( UserIsCurrentProcessDwm() )
  {
    KeEnterCriticalRegion();
    updated = CInputManager::UpdatePointerCapture(a1, a2);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return updated;
}

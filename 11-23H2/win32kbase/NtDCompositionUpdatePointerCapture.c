/*
 * XREFs of NtDCompositionUpdatePointerCapture @ 0x1C0209CC0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001B580 (UserIsCurrentProcessDwm.c)
 *     ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x1C02311FC (-UpdatePointerCapture@CInputManager@@SAJII@Z.c)
 */

__int64 __fastcall NtDCompositionUpdatePointerCapture(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  unsigned int updated; // ebx

  v3 = a2;
  v4 = a1;
  if ( UserIsCurrentProcessDwm(a1, a2, a3) )
  {
    KeEnterCriticalRegion();
    updated = CInputManager::UpdatePointerCapture(v4, v3);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return updated;
}

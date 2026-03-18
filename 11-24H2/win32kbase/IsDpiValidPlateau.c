/*
 * XREFs of IsDpiValidPlateau @ 0x140222638
 * Callers:
 *     IsValidKernelDpiAwarenessContext @ 0x140045D30 (IsValidKernelDpiAwarenessContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDpiValidPlateau(__int64 a1)
{
  if ( (unsigned int)a1 >= 0x60 && (_DWORD)a1 == 24 * ((unsigned int)a1 / 0x18) )
    return (unsigned int)(a1 - 72) < 0x1B0;
  else
    return (_DWORD)a1 == *(unsigned __int16 *)(*(_QWORD *)(W32GetUserSessionState(a1) + 19928) + 6998LL);
}

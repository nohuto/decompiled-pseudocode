/*
 * XREFs of ?_GetImmersiveGhostWindow@CAppArrangementBase@@IEAAPEAVCWindowData@@PEAV2@@Z @ 0x1800D4C2C
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D5B40 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     <none>
 */

struct CWindowData *__fastcall CAppArrangementBase::_GetImmersiveGhostWindow(
        CAppArrangementBase *this,
        struct CWindowData *a2)
{
  __int64 v2; // r8
  unsigned int i; // r9d
  __int64 v5; // rdx

  v2 = 0LL;
  for ( i = 0; i < *((_DWORD *)a2 + 148); ++i )
  {
    v5 = *(_QWORD *)(*((_QWORD *)a2 + 71) + 8LL * i);
    if ( v5 && (*(_DWORD *)(v5 + 36) & 0x100000) != 0 )
      return *(struct CWindowData **)(v5 + 16);
  }
  return (struct CWindowData *)v2;
}

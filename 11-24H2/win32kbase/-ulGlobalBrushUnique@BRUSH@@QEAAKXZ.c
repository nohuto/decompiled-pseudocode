/*
 * XREFs of ?ulGlobalBrushUnique@BRUSH@@QEAAKXZ @ 0x1400861B0
 * Callers:
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1400855A4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     bDynamicProcessAllDriverRealizations @ 0x140085BF0 (bDynamicProcessAllDriverRealizations.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x140085DA8 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     GreSetSolidBrushLight @ 0x140086050 (GreSetSolidBrushLight.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BRUSH::ulGlobalBrushUnique(BRUSH *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(W32GetSessionState(this) + 88)
                                                                       + 576LL));
}

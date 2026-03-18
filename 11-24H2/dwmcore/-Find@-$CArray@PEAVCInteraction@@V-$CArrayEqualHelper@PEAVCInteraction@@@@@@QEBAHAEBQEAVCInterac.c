/*
 * XREFs of ?Find@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEBAHAEBQEAVCInteraction@@@Z @ 0x18020B5A8
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x180095454 (--1CInteraction@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::Find(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ecx
  __int64 i; // r8

  v2 = 0;
  for ( i = 0LL; ; ++i )
  {
    if ( i >= dword_1803FA900 )
      return 0xFFFFFFFFLL;
    if ( *((_QWORD *)CInteraction::s_DefaultStateLockedInteractions + i) == *a2 )
      break;
    ++v2;
  }
  return v2;
}

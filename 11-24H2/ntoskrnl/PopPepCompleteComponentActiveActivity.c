/*
 * XREFs of PopPepCompleteComponentActiveActivity @ 0x1402C2640
 * Callers:
 *     PopPepProcessEvent @ 0x1402C0980 (PopPepProcessEvent.c)
 * Callees:
 *     PopPepGetComponentPreferedIdleState @ 0x1402BF940 (PopPepGetComponentPreferedIdleState.c)
 *     PopPepTriggerActivity @ 0x1402C1E00 (PopPepTriggerActivity.c)
 */

void __fastcall PopPepCompleteComponentActiveActivity(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned int ComponentPreferedIdleState; // eax
  unsigned int i; // edx
  _QWORD *v7; // r8

  if ( a2 )
  {
    *(_QWORD *)(a2 + 136) = MEMORY[0xFFFFF78000000008];
    v4 = (unsigned int)(*(_DWORD *)(a2 + 188) - 1);
    *(_DWORD *)(a2 + 152) = v4;
    if ( !PopPepLowPowerEpoch && (_DWORD)v4 )
    {
      v7 = (_QWORD *)(*(_QWORD *)(a2 + 200) + 8 * (v4 + 2 * v4 + 1));
      do
      {
        if ( *v7 <= *(_QWORD *)(a2 + 120) )
          break;
        v7 -= 3;
        LODWORD(v4) = v4 - 1;
      }
      while ( (_DWORD)v4 );
    }
    *(_DWORD *)(a2 + 160) = v4;
    *(_DWORD *)(a2 + 4) &= ~1u;
    ComponentPreferedIdleState = PopPepGetComponentPreferedIdleState((_DWORD *)a2);
    if ( ComponentPreferedIdleState != *(_DWORD *)(a2 + 176) )
      PopPepTriggerActivity(a1, a2, 1, ComponentPreferedIdleState);
    for ( i = 1; i <= 3; ++i )
    {
      if ( **(_DWORD **)(a2 + 8LL * i + 56) )
        return;
    }
    if ( *(_DWORD *)(a2 + 176) == *(_DWORD *)(a2 + 188) - 1 )
    {
      *(_DWORD *)(a2 + 4) &= ~2u;
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 140));
    }
  }
}

/*
 * XREFs of ?UseDComposition@CStoryboard@@QEAA_NXZ @ 0x18000795C
 * Callers:
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180007864 (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CStoryboard::UseDComposition(CStoryboard *this)
{
  unsigned int v1; // r9d
  char v2; // dl
  unsigned int v3; // r8d

  v1 = *((_DWORD *)this + 30);
  v2 = 0;
  v3 = 0;
  if ( v1 )
  {
    while ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8LL * v3) + 40LL) + 976LL) )
    {
      if ( ++v3 >= v1 )
        return v2;
    }
    return 1;
  }
  return v2;
}

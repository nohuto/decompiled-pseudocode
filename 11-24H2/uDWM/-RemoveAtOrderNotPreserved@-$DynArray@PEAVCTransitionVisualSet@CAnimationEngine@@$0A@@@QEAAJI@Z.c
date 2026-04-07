/*
 * XREFs of ?RemoveAtOrderNotPreserved@?$DynArray@PEAVCTransitionVisualSet@CAnimationEngine@@$0A@@@QEAAJI@Z @ 0x1800840E4
 * Callers:
 *     ?CleanupAnimation@CAnimationEngine@@AEAAJI@Z @ 0x18006CFB8 (-CleanupAnimation@CAnimationEngine@@AEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CAnimationEngine::CTransitionVisualSet *,0>::RemoveAtOrderNotPreserved(
        __int64 a1,
        unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  if ( a2 >= v2 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x216u, 0LL);
  }
  else
  {
    v4 = v2 - 1;
    if ( a2 < (unsigned int)v4 )
      *(_QWORD *)(*(_QWORD *)a1 + 8LL * a2) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4);
    --*(_DWORD *)(a1 + 24);
  }
  return v3;
}

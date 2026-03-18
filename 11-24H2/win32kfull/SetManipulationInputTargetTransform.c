/*
 * XREFs of SetManipulationInputTargetTransform @ 0x14010F7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x14010FE84 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 *     ?SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z @ 0x1401109A8 (-SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z.c)
 */

__int64 __fastcall SetManipulationInputTargetTransform(__int64 a1, struct tagWND *a2, void *a3, __int64 a4, int a5)
{
  InputTransform *v6; // rbx

  if ( a5 )
    return 0LL;
  v6 = *(InputTransform **)(a1 + 80);
  if ( a2 )
  {
    if ( !*((_QWORD *)v6 + 34) )
      InputTransform::SetCompositionInput(*(InputTransform **)(a1 + 80), a2, a3);
  }
  return InputTransform::OnInput(v6, (struct tagWND *)a3, (unsigned __int64)a3);
}

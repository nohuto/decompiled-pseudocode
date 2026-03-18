/*
 * XREFs of InputTransformOnInput @ 0x14010F820
 * Callers:
 *     <none>
 * Callees:
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x14010FE84 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 */

__int64 __fastcall InputTransformOnInput(__int64 a1, struct tagWND *a2, unsigned __int64 a3)
{
  InputTransform *v3; // rcx

  v3 = *(InputTransform **)(a1 + 80);
  if ( v3 )
    return InputTransform::OnInput(v3, a2, a3);
  else
    return 0LL;
}

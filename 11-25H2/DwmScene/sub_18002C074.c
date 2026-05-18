/*
 * XREFs of sub_18002C074 @ 0x18002C074
 * Callers:
 *     sub_18002E4B8 @ 0x18002E4B8 (sub_18002E4B8.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_18002C074(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::Engine::EngineSceneData::`vftable';
  *a1 = &Spectre::Engine::Engine::EngineSceneData::`vftable';
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  return result;
}

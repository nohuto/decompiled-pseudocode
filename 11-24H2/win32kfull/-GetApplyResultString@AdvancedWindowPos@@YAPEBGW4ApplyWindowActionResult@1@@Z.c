/*
 * XREFs of ?GetApplyResultString@AdvancedWindowPos@@YAPEBGW4ApplyWindowActionResult@1@@Z @ 0x1402D2B4C
 * Callers:
 *     ?LogApplyWindowActionEnd@AdvancedWindowPos@@YAXPEAUtagWND@@W4ApplyWindowActionResult@1@@Z @ 0x1402D2E88 (-LogApplyWindowActionEnd@AdvancedWindowPos@@YAXPEAUtagWND@@W4ApplyWindowActionResult@1@@Z.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall AdvancedWindowPos::GetApplyResultString(int a1)
{
  int v1; // ecx
  int v2; // ecx

  if ( !a1 )
    return L"Posted";
  v1 = a1 - 1;
  if ( !v1 )
    return L"Intercepted";
  v2 = v1 - 1;
  if ( !v2 )
    return L"NoPendingRecalc";
  if ( v2 == 1 )
    return L"Applied";
  return L"Unknown";
}

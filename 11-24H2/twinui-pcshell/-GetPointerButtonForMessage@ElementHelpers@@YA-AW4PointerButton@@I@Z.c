/*
 * XREFs of ?GetPointerButtonForMessage@ElementHelpers@@YA?AW4PointerButton@@I@Z @ 0x1804CE630
 * Callers:
 *     ?_OnMouseButtonDown@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z @ 0x1804BDBCC (-_OnMouseButtonDown@CMultitaskingViewFrame@@AEAA_NIAEBUCPoint@Geometry@@@Z.c)
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1804BE1C0 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ElementHelpers::GetPointerButtonForMessage(int a1)
{
  __int64 result; // rax
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  result = 0LL;
  v2 = a1 - 513;
  if ( !v2 )
    return 1LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 1LL;
  v4 = v3 - 2;
  if ( !v4 )
    return 2LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 2LL;
  if ( (unsigned int)(v5 - 2) <= 1 )
    return 3LL;
  return result;
}

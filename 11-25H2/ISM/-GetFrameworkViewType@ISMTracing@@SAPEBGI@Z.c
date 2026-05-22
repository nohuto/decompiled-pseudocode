/*
 * XREFs of ?GetFrameworkViewType@ISMTracing@@SAPEBGI@Z @ 0x1800FAFA0
 * Callers:
 *     ?MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_K@Z @ 0x1800FC004 (-MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_K@Z.c)
 *     ?MPCTarget_UpdatedFrameworkViewType_@ISMTracing@@QEAAXPEAUIMPCTarget@@I_K@Z @ 0x1800FE2FC (-MPCTarget_UpdatedFrameworkViewType_@ISMTracing@@QEAAXPEAUIMPCTarget@@I_K@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall ISMTracing::GetFrameworkViewType(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( !a1 )
    return L"Slate";
  v1 = a1 - 1;
  if ( !v1 )
    return L"Exclusive";
  v2 = v1 - 1;
  if ( !v2 )
    return L"HologramFrameworkDefault";
  v3 = v2 - 1;
  if ( !v3 )
    return L"_HologramFrameworkMaterial";
  v4 = v3 - 1;
  if ( !v4 )
    return L"HologramFrameworkIsolated";
  v5 = v4 - 1;
  if ( !v5 )
    return L"Shell";
  if ( v5 == 1 )
    return L"Unset";
  return &WindowName;
}

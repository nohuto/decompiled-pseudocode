/*
 * XREFs of InitializeGdiSiloGlobals @ 0x140221BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@NetworkedFontFileTable@@YA_NXZ @ 0x14030414C (-Initialize@NetworkedFontFileTable@@YA_NXZ.c)
 *     ?Initialize@TrustedFontFileTable@@SA_NXZ @ 0x14030EDC4 (-Initialize@TrustedFontFileTable@@SA_NXZ.c)
 */

__int64 InitializeGdiSiloGlobals()
{
  NetworkedFontFileTable *v0; // rcx
  unsigned int v1; // ebx

  v1 = 0;
  if ( !(unsigned int)UserIsServiceSession() )
    return 1LL;
  if ( !NetworkedFontFileTable::Initialize(v0) )
    return 0LL;
  LOBYTE(v1) = TrustedFontFileTable::Initialize();
  return v1;
}

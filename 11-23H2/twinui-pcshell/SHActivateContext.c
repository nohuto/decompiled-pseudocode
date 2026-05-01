/*
 * XREFs of SHActivateContext @ 0x180390AB4
 * Callers:
 *     SHFusionLoadLibrary @ 0x180390C40 (SHFusionLoadLibrary.c)
 * Callees:
 *     SHFusionInitializeFromModuleID @ 0x180390B20 (SHFusionInitializeFromModuleID.c)
 */

BOOL __fastcall SHActivateContext(ULONG_PTR *a1)
{
  HANDLE v2; // rcx

  *a1 = 0LL;
  v2 = g_hActCtx;
  if ( g_hActCtx != (HANDLE)-1LL )
    return ActivateActCtx(v2, a1);
  if ( !qword_18098D510 )
    return 1;
  if ( qword_18098D510 == g_hActCtx )
    return 0;
  SHFusionInitializeFromModuleID();
  v2 = g_hActCtx;
  return g_hActCtx == (HANDLE)-1LL || ActivateActCtx(v2, a1);
}

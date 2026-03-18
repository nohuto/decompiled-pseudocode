/*
 * XREFs of NtGdiRemoveFontMemResourceEx @ 0x1402140E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepRemoveFontMemResource@@YAHPEAX@Z @ 0x140214100 (-GrepRemoveFontMemResource@@YAHPEAX@Z.c)
 */

__int64 __fastcall NtGdiRemoveFontMemResourceEx(void *a1)
{
  if ( a1 )
    return GrepRemoveFontMemResource(a1);
  else
    return 0LL;
}

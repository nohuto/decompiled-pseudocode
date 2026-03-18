/*
 * XREFs of ?FCursorShadowed@@YA_NPEAU_CURSINFO@@@Z @ 0x140131D1C
 * Callers:
 *     zzzUpdateCursorImage @ 0x140075AF0 (zzzUpdateCursorImage.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x140131520 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall FCursorShadowed(struct _CURSINFO *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // bl

  v5 = 0;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 43304)
    && (*(_DWORD *)(W32GetUserSessionState(v4, v3) + 67060) & 0x80002000) == 0x80002000 )
  {
    return (*(_DWORD *)a1 & 0x200) != 0;
  }
  return v5;
}

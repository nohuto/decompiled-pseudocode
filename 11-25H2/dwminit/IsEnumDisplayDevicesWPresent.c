/*
 * XREFs of IsEnumDisplayDevicesWPresent @ 0x1800033A0
 * Callers:
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000AAF8 (-CleanupOldDwmProcess@@YAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180003C15 (ApiSetQueryApiSetPresence_0.c)
 */

char IsEnumDisplayDevicesWPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180019A90 == 1 )
    return 1;
  if ( dword_180019A90 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"RT", &v1) < 0 )
    return 0;
  result = v1;
  dword_180019A90 = 2 - (v1 != 0);
  return result;
}

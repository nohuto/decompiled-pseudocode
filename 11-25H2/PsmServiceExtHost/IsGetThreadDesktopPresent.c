/*
 * XREFs of IsGetThreadDesktopPresent @ 0x180073B9C
 * Callers:
 *     ReportHangInternal @ 0x18009C0A8 (ReportHangInternal.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180073156 (ApiSetQueryApiSetPresence_0.c)
 */

char IsGetThreadDesktopPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800E822C == 1 )
    return 1;
  if ( dword_1800E822C == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0((__int64)L"LN", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_1800E822C = 2 - (v1 != 0);
  return result;
}

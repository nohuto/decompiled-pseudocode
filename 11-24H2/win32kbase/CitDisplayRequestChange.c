/*
 * XREFs of CitDisplayRequestChange @ 0x1400B542C
 * Callers:
 *     UserPowerInfoCallout @ 0x1401AEF84 (UserPowerInfoCallout.c)
 * Callees:
 *     ?CitIsEnabled@@YAEXZ @ 0x1400B3CFC (-CitIsEnabled@@YAEXZ.c)
 *     ?OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z @ 0x1400B5974 (-OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z.c)
 */

char __fastcall CitDisplayRequestChange(__int64 a1)
{
  unsigned int v1; // ebx
  char result; // al
  __int64 v3; // rcx
  __int64 v4; // rdi

  v1 = a1;
  result = CitIsEnabled(a1);
  if ( result )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v3) + 18968) + 32LL);
    result = *(_BYTE *)(v4 + 112) & 1;
    if ( (v1 != 0) != result )
    {
      if ( v1 )
      {
        if ( (unsigned int)dword_14029B11C < MEMORY[0xFFFFF7800000037C] )
          EtwTelemetryCoverageReport(&off_14029B110);
      }
      CIT_USER_ACTIVE_TRACKER::OnDisplayRequiredChange(
        (CIT_USER_ACTIVE_TRACKER *)(v4 + 228),
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
        v1);
      result = (v1 != 0) | *(_BYTE *)(v4 + 112) & 0xFE;
      *(_BYTE *)(v4 + 112) = result;
    }
  }
  return result;
}

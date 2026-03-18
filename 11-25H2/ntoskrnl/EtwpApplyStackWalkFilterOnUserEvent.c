/*
 * XREFs of EtwpApplyStackWalkFilterOnUserEvent @ 0x1409260C4
 * Callers:
 *     EtwpWriteUserEvent @ 0x1409245D0 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpApplyStackWalkIdFilter @ 0x14041DEDC (EtwpApplyStackWalkIdFilter.c)
 */

bool __fastcall EtwpApplyStackWalkFilterOnUserEvent(__int64 a1, __int64 a2, __int64 a3)
{
  return EtwpApplyStackWalkIdFilter(*(unsigned __int16 *)(a1 + 40), a2, a3, 1);
}

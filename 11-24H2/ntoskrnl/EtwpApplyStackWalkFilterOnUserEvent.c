/*
 * XREFs of EtwpApplyStackWalkFilterOnUserEvent @ 0x140A419F0
 * Callers:
 *     EtwpWriteUserEvent @ 0x140AD78A0 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpApplyStackWalkIdFilter @ 0x14040EDA4 (EtwpApplyStackWalkIdFilter.c)
 */

bool __fastcall EtwpApplyStackWalkFilterOnUserEvent(__int64 a1, __int64 a2, unsigned int a3)
{
  return EtwpApplyStackWalkIdFilter(*(unsigned __int16 *)(a1 + 40), a2, a3, 1);
}

/*
 * XREFs of ZwCreateThreadEx @ 0x1406A7D30
 * Callers:
 *     DbgkUserReportWorkRoutine @ 0x140707610 (DbgkUserReportWorkRoutine.c)
 *     MiInjectThreadForHotPatch @ 0x1407F3144 (MiInjectThreadForHotPatch.c)
 *     RtlpCreateUserThreadEx @ 0x140A0C218 (RtlpCreateUserThreadEx.c)
 *     MiForceCrashForInvalidAccess @ 0x140AB6F10 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateThreadEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

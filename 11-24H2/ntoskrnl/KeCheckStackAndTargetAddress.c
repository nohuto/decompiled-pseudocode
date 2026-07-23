/*
 * XREFs of KeCheckStackAndTargetAddress @ 0x14042A370
 * Callers:
 *     __C_specific_handler @ 0x1404F9000 (__C_specific_handler.c)
 *     longjmp @ 0x1404F91E0 (longjmp.c)
 *     RtlRestoreContext @ 0x1404FA460 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x1404FA7B0 (RcFrameConsolidation.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x14028A1E0 (KeQueryCurrentStackInformationEx.c)
 *     _guard_icall_bugcheck @ 0x1406B4CE0 (_guard_icall_bugcheck.c)
 */

bool __fastcall KeCheckStackAndTargetAddress(signed __int64 BugCheckParameter4, unsigned __int64 a2)
{
  bool result; // al
  int v5; // [rsp+30h] [rbp+8h] BYREF
  char *v6; // [rsp+40h] [rbp+18h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  v6 = 0LL;
  if ( BugCheckParameter4 >= 0
    || !(result = KeQueryCurrentStackInformationEx(a2, &v5, &v6, &v7))
    || a2 < (unsigned __int64)v6
    || a2 >= v7 )
  {
    __debugbreak();
    guard_icall_bugcheck(BugCheckParameter4);
  }
  return result;
}

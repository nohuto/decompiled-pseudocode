/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1401C3090
 * Callers:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001D9D8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140035AC0 (--0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x140068920 (PushThreadGuardedObject.c)
 */

unsigned __int64 __fastcall UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(
        unsigned __int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  PushThreadGuardedObject(
    (_QWORD *)a1,
    (a1 - 40) & ((unsigned __int128)-(__int128)a1 >> 64),
    (__int64)UnexpectedThreadTerminationHandler<DCOBJ>::OnUnexpectedThreadTerminationStatic);
  return a1;
}

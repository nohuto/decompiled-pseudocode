/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VHmgInsertObjectHelper@@@@QEAA@XZ @ 0x1C013D870
 * Callers:
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0264924 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>(
        _OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  PushThreadGuardedObject(
    a1,
    a1,
    UnexpectedThreadTerminationHandler<HmgInsertObjectHelper>::OnUnexpectedThreadTerminationStatic);
  return a1;
}

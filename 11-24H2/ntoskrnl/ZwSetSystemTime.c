/*
 * XREFs of ZwSetSystemTime @ 0x1406A9BD0
 * Callers:
 *     DifZwSetSystemTimeWrapper @ 0x1406490E0 (DifZwSetSystemTimeWrapper.c)
 *     ExpTimeZoneInitSiloState @ 0x1407B6A30 (ExpTimeZoneInitSiloState.c)
 *     ExpTimeZoneWork @ 0x1407B6AF0 (ExpTimeZoneWork.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemTime(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}

/*
 * XREFs of ??0?$HmgShareLockResult@VLFONT@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C013F6EC
 * Callers:
 *     GreSelectFontInternal @ 0x1C011A874 (GreSelectFontInternal.c)
 *     GreSelectFont @ 0x1C011C490 (GreSelectFont.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HmgShareLockResult<LFONT>::HmgShareLockResult<LFONT>(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = a2;
  *(_OWORD *)(a1 + 8) = 0LL;
  *(_OWORD *)(a1 + 24) = 0LL;
  PushThreadGuardedObject(
    a1 + 8,
    a1 & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 + 8) >> 64),
    UnexpectedThreadTerminationHandler<HmgShareLockResult<LFONT>>::OnUnexpectedThreadTerminationStatic);
  return a1;
}

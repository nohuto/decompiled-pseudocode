/*
 * XREFs of ?HmgDecrementExclusiveReferenceCountEx@@YAXPEAU_BASEOBJECT@@W4HandleLockOptions@@PEAH@Z @ 0x140173ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?HmgDecrementExclusiveReferenceCountExFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@W4HandleLockOptions@@PEAH@Z @ 0x1401C1B50 (-HmgDecrementExclusiveReferenceCountExFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@.c)
 */

__int64 __fastcall HmgDecrementExclusiveReferenceCountEx(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  return HmgDecrementExclusiveReferenceCountExFastOpt(*(_QWORD *)(SessionState + 88), a1, a2, a3);
}

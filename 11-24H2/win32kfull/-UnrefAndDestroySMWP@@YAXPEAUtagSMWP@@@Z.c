/*
 * XREFs of ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1400849C0
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x140076014 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     DestroySMWP @ 0x140083140 (DestroySMWP.c)
 */

void __fastcall UnrefAndDestroySMWP(struct tagSMWP *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  v1 = HMUnlockObject(a1);
  if ( v1 )
    DestroySMWP(v1, v2);
}

/*
 * XREFs of GreLockDisplayDevice @ 0x140013BF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x140013D84 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall GreLockDisplayDevice(__int64 a1)
{
  return GreAcquireSemaphore<8,PDEVOBJ>(a1);
}

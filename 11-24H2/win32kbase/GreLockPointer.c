/*
 * XREFs of GreLockPointer @ 0x1401308D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphore@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1401308E8 (--$GreAcquireSemaphore@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall GreLockPointer(__int64 a1)
{
  return GreAcquireSemaphore<4,PDEVOBJ>(a1);
}

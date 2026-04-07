/*
 * XREFs of ?IsOKToCleanup@CFlickVisual@@UEAA_NXZ @ 0x1800B6DF0
 * Callers:
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x18000DB14 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CFlickVisual::IsOKToCleanup(CFlickVisual *this)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *((_QWORD *)this + 39);
  result = 0;
  if ( !v1 || *(_BYTE *)(v1 + 72) )
    return 1;
  return result;
}

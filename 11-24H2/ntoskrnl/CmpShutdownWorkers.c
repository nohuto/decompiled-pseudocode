/*
 * XREFs of CmpShutdownWorkers @ 0x1407D5FB0
 * Callers:
 *     CmShutdownSystem1 @ 0x140666298 (CmShutdownSystem1.c)
 * Callees:
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 */

BOOLEAN CmpShutdownWorkers()
{
  struct _KTIMER *v0; // rbx
  __int64 v1; // rdi
  BOOLEAN result; // al

  v0 = &CmpLazyWriterData;
  v1 = 3LL;
  do
  {
    result = KeCancelTimer(v0);
    v0 += 3;
    --v1;
  }
  while ( v1 );
  return result;
}

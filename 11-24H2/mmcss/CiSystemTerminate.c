/*
 * XREFs of CiSystemTerminate @ 0x14000DD5C
 * Callers:
 *     CsTerminate @ 0x14000D470 (CsTerminate.c)
 *     DriverEntry @ 0x140010540 (DriverEntry.c)
 * Callees:
 *     CiFreeMemory @ 0x140003FF0 (CiFreeMemory.c)
 */

void CiSystemTerminate()
{
  if ( CiLastIdleStats )
  {
    CiFreeMemory((void *)CiLastIdleStats);
    CiLastIdleStats = 0LL;
  }
}

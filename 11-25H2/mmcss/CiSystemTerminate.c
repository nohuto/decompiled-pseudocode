/*
 * XREFs of CiSystemTerminate @ 0x1C000C89C
 * Callers:
 *     CsTerminate @ 0x1C000C400 (CsTerminate.c)
 *     CiSystemInitialize @ 0x1C000FA30 (CiSystemInitialize.c)
 * Callees:
 *     CiFreeMemory @ 0x1C0003FF0 (CiFreeMemory.c)
 */

void CiSystemTerminate()
{
  if ( CiLastIdleStats )
  {
    CiFreeMemory((void *)CiLastIdleStats);
    CiLastIdleStats = 0LL;
  }
}

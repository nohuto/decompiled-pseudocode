/*
 * XREFs of CcSetMaxNumberOfWriteBehindThreads @ 0x1405780F0
 * Callers:
 *     CcAdjustWriteBehindThreadPool @ 0x140577824 (CcAdjustWriteBehindThreadPool.c)
 * Callees:
 *     <none>
 */

void __fastcall CcSetMaxNumberOfWriteBehindThreads(__int64 a1, int a2)
{
  if ( (unsigned int)CcNumberNumaNodes <= 1 && !CcEnablePerVolumeLazyWriter )
    *(_DWORD *)(a1 + 1288) = a2;
}

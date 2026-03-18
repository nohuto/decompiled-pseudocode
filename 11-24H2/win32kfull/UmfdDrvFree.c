/*
 * XREFs of UmfdDrvFree @ 0x1401019B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1400FFFB0 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     UmfdDrvFreeInternal @ 0x140101948 (UmfdDrvFreeInternal.c)
 */

void __fastcall UmfdDrvFree(char *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8

  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 - 12);
    if ( v3 )
    {
      UmfdDrvFreeInternal(v3, a2, *((_DWORD *)a1 - 6));
      UmfdAllocation::ReleaseKernelmodeAllocation(a1, v4, v5);
    }
  }
}

/*
 * XREFs of ?BackPropagateSmallBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z @ 0x1C013FABC
 * Callers:
 *     ?UMPDDrvCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C02B8670 (-UMPDDrvCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0298658 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 */

void __fastcall UMPDOBJ::BackPropagateSmallBitmapBits(UMPDOBJ *this, struct _SURFOBJ *a2, void *a3, int a4)
{
  ULONG cjBits; // ebx
  const void *KernelPtr; // rax

  if ( a4 )
  {
    cjBits = a2->cjBits;
    KernelPtr = UMPDOBJ::GetKernelPtr(this, a2->pvBits);
    memmove(a3, KernelPtr, cjBits);
  }
}

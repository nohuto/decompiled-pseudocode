/*
 * XREFs of ?CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z @ 0x1403D900C
 * Callers:
 *     DXGDEVICE_CompleteAsynchronousUnpin @ 0x1400512B0 (DXGDEVICE_CompleteAsynchronousUnpin.c)
 * Callees:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1400135A0 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 */

void __fastcall DXGDEVICE::CompleteAsynchronousUnpin(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGALLOCATION *a3,
        struct DXGALLOCATION *a4)
{
  DXGDEVICE::TestAndSetDisplayedPrimary(this, a2, a3, a4);
}

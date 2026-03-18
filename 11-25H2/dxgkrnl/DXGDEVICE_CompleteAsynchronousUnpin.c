/*
 * XREFs of DXGDEVICE_CompleteAsynchronousUnpin @ 0x1400512B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z @ 0x1403D900C (-CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE_CompleteAsynchronousUnpin(unsigned int a1, DXGDEVICE **a2)
{
  DXGDEVICE::CompleteAsynchronousUnpin(a2[1], a1, (struct DXGALLOCATION *)a2);
}

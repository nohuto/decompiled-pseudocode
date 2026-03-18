/*
 * XREFs of ?GDIEngUserMemAllocNodeAlloc@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z @ 0x140147540
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCNOZ @ 0x1400254A4 (PALLOCNOZ.c)
 */

__int64 __fastcall GDIEngUserMemAllocNodeAlloc(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return PALLOCNOZ(ByteSize, 0x616D5547u);
}

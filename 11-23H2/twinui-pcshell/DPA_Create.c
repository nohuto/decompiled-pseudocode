/*
 * XREFs of DPA_Create @ 0x18079B7D0
 * Callers:
 *     ??0BUCKET@@QEAA@XZ @ 0x180799C10 (--0BUCKET@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

HDPA __stdcall DPA_Create(int cItemGrow)
{
  return DPA_CreateEx(cItemGrow, 0LL);
}

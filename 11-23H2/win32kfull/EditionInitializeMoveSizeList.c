/*
 * XREFs of EditionInitializeMoveSizeList @ 0x1C00A05B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *EditionInitializeMoveSizeList()
{
  __int64 *result; // rax

  result = &gActiveMoveSizeDataList;
  qword_1C035E700 = (__int64)&gActiveMoveSizeDataList;
  gActiveMoveSizeDataList = (__int64)&gActiveMoveSizeDataList;
  return result;
}

/*
 * XREFs of NdisIsStatusIndicationCloneable @ 0x1400A4960
 * Callers:
 *     NdisFIndicateStatus @ 0x14006AE90 (NdisFIndicateStatus.c)
 * Callees:
 *     <none>
 */

bool __fastcall NdisIsStatusIndicationCloneable(int a1)
{
  int Key; // [rsp+40h] [rbp+8h] BYREF

  Key = a1;
  return bsearch(
           &Key,
           &ndisCloneableStatusIndications,
           0x9FuLL,
           4uLL,
           (int (__cdecl *)(const void *, const void *))ndisCompareStatusCodes) != 0LL;
}

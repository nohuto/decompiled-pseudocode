/*
 * XREFs of sub_18001B224 @ 0x18001B224
 * Callers:
 *     sub_180010180 @ 0x180010180 (sub_180010180.c)
 *     sub_180014744 @ 0x180014744 (sub_180014744.c)
 *     sub_180016118 @ 0x180016118 (sub_180016118.c)
 *     sub_18001623C @ 0x18001623C (sub_18001623C.c)
 *     sub_180016360 @ 0x180016360 (sub_180016360.c)
 *     sub_180016450 @ 0x180016450 (sub_180016450.c)
 *     sub_18001651C @ 0x18001651C (sub_18001651C.c)
 *     sub_1800165E8 @ 0x1800165E8 (sub_1800165E8.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_180037978 @ 0x180037978 (sub_180037978.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall sub_18001B224(SIZE_T a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapAlloc(ProcessHeap, 0, a1);
}
